/*
 [The "BSD licence"]
 Copyright (c) 2013 Terence Parr
 All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. The name of the author may not be used to endorse or promote products
    derived from this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/** XML parser derived from ANTLR v4 ref guide book example */
parser grammar XMLParser;


@header
{
#include "PositionIndex.h"
#include "AttributeNode.h"
using namespace RAC_XML_INDEXER;
}

@parser::members {
    protected:
    PositionIndex _positionIndex;
    
    public:
    PositionIndex GetPositionIndex() const
    {
    	return _positionIndex;
    }
}

options { tokenVocab=XMLLexer; }

document    :   prolog misc* (doctypedecl  misc*)? element  misc* ;

prolog      :   XMLDeclOpen attribute* SPECIAL_CLOSE;

doctypedecl :  DTD_START(DTD_NESTED)* DTD_CLOSE;

content     :   (chardata  | CDATA )? 
                ((element | reference | CDATA | PI | COMMENT) (chardata | CDATA)?)*;

element     :   (OPEN Name r=attributeList CLOSE) {_positionIndex.PushElementNode($OPEN->getLine(), $OPEN->getCharPositionInLine(),$r.result);} content OPEN SLASH Name CLOSE {_positionIndex.SetEndPosition($CLOSE->getLine(), $CLOSE->getCharPositionInLine()+1);}
            |   (OPEN Name r=attributeList) {_positionIndex.PushElementNode($OPEN->getLine(), $OPEN->getCharPositionInLine(),$r.result);} SLASH_CLOSE {_positionIndex.SetEndPosition($SLASH_CLOSE->getLine(), $SLASH_CLOSE->getCharPositionInLine()+2);}
            ;
            


attributeList  returns [std::vector<AttributeNode> result]
@init
{
    $result = std::vector<AttributeNode> {};
}
	:
		(attribute {$result.emplace_back(AttributeNode($attribute.result,$attribute.start->getLine(), $attribute.start->getCharPositionInLine(), $attribute.stop->getLine(), $attribute.stop->getCharPositionInLine()));})*
;

reference   :   EntityRef | CharRef ;

attribute   returns [std::string result]
@init
{
    $result = "";
}

:   Name  {$result = $Name->getText();} EQUALS STRING ; // Our STRING is AttValue in spec

/** ``All text that is not markup constitutes the character data of
 *  the document.''
 */
chardata    :   TEXT | SEA_WS ;

misc        :   COMMENT | PI | SEA_WS ;