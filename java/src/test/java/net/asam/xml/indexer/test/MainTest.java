/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
package net.asam.xml.indexer.test;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.v1_0.test.TestBase;
import net.asam.xml.indexer.ElementNode;
import net.asam.xml.indexer.PositionIndex;
import net.asam.xml.indexer.grammar.XMLLexer;
import net.asam.xml.indexer.grammar.XMLParser;

public class MainTest extends TestBase {

private static final String  expectedOutput = 
  "0: (2, 0) - (128, 1)\r\n"+
  "1: (5, 3) - (13, 13)\r\n"+
  "2: (6, 6) - (6, 43)\r\n"+
  "3: (7, 6) - (7, 42)\r\n"+
  "4: (8, 6) - (8, 29)\r\n"+
  "5: (9, 6) - (9, 26)\r\n"+
  "6: (10, 6) - (10, 45)\r\n"+
  "7: (11, 6) - (12, 29)\r\n"+
  "8: (14, 3) - (23, 10)\r\n"+
  "9: (15, 6) - (15, 33)\r\n"+
  "10: (16, 6) - (16, 34)\r\n"+
  "11: (17, 6) - (17, 28)\r\n"+
  "12: (18, 6) - (18, 25)\r\n"+
  "13: (19, 6) - (19, 45)\r\n"+
  "14: (20, 6) - (22, 33)\r\n"+
  "15: (24, 3) - (36, 10)\r\n"+
  "16: (25, 6) - (25, 34)\r\n"+
  "17: (26, 6) - (26, 69)\r\n"+
  "18: (27, 6) - (27, 28)\r\n"+
  "19: (28, 6) - (28, 25)\r\n"+
  "20: (29, 6) - (29, 45)\r\n"+
  "21: (30, 6) - (32, 49)\r\n"+
  "22: (33, 6) - (35, 25)\r\n"+
  "23: (37, 3) - (47, 10)\r\n"+
  "24: (38, 6) - (38, 34)\r\n"+
  "25: (39, 6) - (39, 36)\r\n"+
  "26: (40, 6) - (40, 28)\r\n"+
  "27: (41, 6) - (41, 25)\r\n"+
  "28: (42, 6) - (42, 45)\r\n"+
  "29: (43, 6) - (46, 30)\r\n"+
  "30: (48, 3) - (57, 10)\r\n"+
  "31: (49, 6) - (49, 34)\r\n"+
  "32: (50, 6) - (50, 39)\r\n"+
  "33: (51, 6) - (51, 28)\r\n"+
  "34: (52, 6) - (52, 25)\r\n"+
  "35: (53, 6) - (53, 45)\r\n"+
  "36: (54, 6) - (56, 36)\r\n"+
  "37: (58, 3) - (66, 10)\r\n"+
  "38: (59, 6) - (59, 39)\r\n"+
  "39: (60, 6) - (60, 32)\r\n"+
  "40: (61, 6) - (61, 28)\r\n"+
  "41: (62, 6) - (62, 25)\r\n"+
  "42: (63, 6) - (63, 45)\r\n"+
  "43: (64, 6) - (65, 68)\r\n"+
  "44: (67, 3) - (75, 10)\r\n"+
  "45: (68, 6) - (68, 37)\r\n"+
  "46: (69, 6) - (69, 34)\r\n"+
  "47: (70, 6) - (70, 28)\r\n"+
  "48: (71, 6) - (71, 25)\r\n"+
  "49: (72, 6) - (72, 45)\r\n"+
  "50: (73, 6) - (74, 53)\r\n"+
  "51: (76, 3) - (84, 10)\r\n"+
  "52: (77, 6) - (77, 36)\r\n"+
  "53: (78, 6) - (78, 36)\r\n"+
  "54: (79, 6) - (79, 27)\r\n"+
  "55: (80, 6) - (80, 25)\r\n"+
  "56: (81, 6) - (81, 45)\r\n"+
  "57: (82, 6) - (83, 61)\r\n"+
  "58: (85, 3) - (94, 10)\r\n"+
  "59: (86, 6) - (86, 35)\r\n"+
  "60: (87, 6) - (87, 33)\r\n"+
  "61: (88, 6) - (88, 36)\r\n"+
  "62: (89, 6) - (89, 25)\r\n"+
  "63: (90, 6) - (90, 45)\r\n"+
  "64: (91, 6) - (93, 37)\r\n"+
  "65: (95, 3) - (103, 10)\r\n"+
  "66: (96, 6) - (96, 35)\r\n"+
  "67: (97, 6) - (97, 58)\r\n"+
  "68: (98, 6) - (98, 29)\r\n"+
  "69: (99, 6) - (99, 26)\r\n"+
  "70: (100, 6) - (100, 45)\r\n"+
  "71: (101, 6) - (102, 63)\r\n"+
  "72: (104, 3) - (113, 10)\r\n"+
  "73: (105, 6) - (105, 35)\r\n"+
  "74: (106, 6) - (106, 50)\r\n"+
  "75: (107, 6) - (107, 29)\r\n"+
  "76: (108, 6) - (108, 26)\r\n"+
  "77: (109, 6) - (109, 45)\r\n"+
  "78: (110, 6) - (112, 33)\r\n"+
  "79: (115, 3) - (125, 10)\r\n"+
  "80: (116, 6) - (116, 34)\r\n"+
  "81: (117, 6) - (117, 59)\r\n"+
  "82: (118, 6) - (118, 29)\r\n"+
  "83: (119, 6) - (119, 26)\r\n"+
  "84: (120, 6) - (120, 45)\r\n"+
  "85: (121, 6) - (124, 32)\r\n"+
  "86: (126, 3) - (126, 10)\r\n";

    @Test
	public  void testBooks() {
		
		CharStream stream;
		try {
		    ClassLoader classLoader = getClass().getClassLoader();
	        File file =  new File(classLoader.getResource("indexer/books.xml").getFile());
		    InputStream  in = new FileInputStream(file);
			stream = CharStreams.fromStream(in);
			
			
		XMLLexer lexer = new XMLLexer(stream);
		
	    CommonTokenStream tokens = new CommonTokenStream(lexer);
	    XMLParser parser = new XMLParser(tokens);
	    parser.document();
	    
	    PositionIndex positionIndex =  parser.getPositionIndex();
	    for (int i = 0; i< positionIndex.getSize(); i++)
	    {
	    	dump(positionIndex, i);
	    }
	    Assertions.assertEquals(expectedOutput, testOut.toString());
		} catch (IOException e) {
			Assertions.fail();
		}
	}
	public static void dump(PositionIndex positionIndex, int index)
	{
		ElementNode elementNode = positionIndex.getElementNode(index);
		System.out.println( index + ": " + "(" + elementNode.getStartPosition().getLine() + ", " + elementNode.getStartPosition().getColumn() + ") - ("
				+ elementNode.getEndPosition().getLine() + ", " + elementNode.getEndPosition().getColumn() + ")");
	}
}
