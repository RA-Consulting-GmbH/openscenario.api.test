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

import de.rac.xml.indexer.PositionIndex;
import de.rac.xml.indexer.AttributeNode;
import java.util.List;
import java.util.ArrayList;

}

@parser::members {
    protected PositionIndex positionIndex= new PositionIndex();
    
    public PositionIndex getPositionIndex()
    {
    	return positionIndex;
    }
}

options { tokenVocab=XMLLexer; }

document    :   prolog misc* (doctypedecl  misc*)? element  misc* ;

prolog      :   XMLDeclOpen attribute* SPECIAL_CLOSE;

doctypedecl :  DTD_START(DTD_NESTED)* DTD_CLOSE;

content     :   (chardata  | CDATA )? 
                ((element | reference | CDATA | PI | COMMENT) (chardata | CDATA)?)*;

element     :   (OPEN Name r=attributeList CLOSE) {positionIndex.pushElementNode($OPEN.getLine(), $OPEN.getCharPositionInLine(),$r.result);} content OPEN '/' Name CLOSE {positionIndex.setEndPosition($CLOSE.getLine(), $CLOSE.getCharPositionInLine()+1);}
            |   (OPEN Name r=attributeList) {positionIndex.pushElementNode($OPEN.getLine(), $OPEN.getCharPositionInLine(),$r.result);} SLASH_CLOSE {positionIndex.setEndPosition($SLASH_CLOSE.getLine(), $SLASH_CLOSE.getCharPositionInLine()+2);}
            ;
            


attributeList  returns [List<AttributeNode> result]
@init
{
    $result = new ArrayList<AttributeNode> ();
}
	:
		(attribute {$result.add(new AttributeNode($attribute.result,$attribute.start.getLine(), $attribute.start.getCharPositionInLine(), $attribute.stop.getLine(), $attribute.stop.getCharPositionInLine()));})*
;

reference   :   EntityRef | CharRef ;

attribute   returns [String result]
@init
{
    $result = null;
}

:   Name  {$result = $Name.getText();} '=' STRING ; // Our STRING is AttValue in spec

/** ``All text that is not markup constitutes the character data of
 *  the document.''
 */
chardata    :   TEXT | SEA_WS ;

misc        :   COMMENT | PI | SEA_WS ;