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

import net.asam.xml.indexer.ElementNode;
import net.asam.xml.indexer.PositionIndex;
import net.asam.xml.indexer.grammar.XMLLexer;
import net.asam.xml.indexer.grammar.XMLParser;

public class MainTest {

  private static final String[] expectedOutput = {
    "0: (18, 1) - (58, 15)",
    "1: (19, 2) - (19, 113)",
    "2: (20, 2) - (57, 12)",
    "3: (21, 4) - (32, 12)",
    "4: (22, 6) - (26, 17)",
    "5: (23, 8) - (25, 19)",
    "6: (24, 10) - (24, 67)",
    "7: (27, 6) - (31, 17)",
    "8: (28, 8) - (30, 19)",
    "9: (29, 10) - (29, 65)",
    "10: (33, 4) - (44, 12)",
    "11: (34, 6) - (38, 17)",
    "12: (35, 8) - (37, 19)",
    "13: (36, 10) - (36, 67)",
    "14: (39, 6) - (43, 17)",
    "15: (40, 8) - (42, 19)",
    "16: (41, 10) - (41, 65)",
    "17: (45, 4) - (56, 12)",
    "18: (46, 6) - (50, 17)",
    "19: (47, 8) - (49, 19)",
    "20: (48, 10) - (48, 65)",
    "21: (51, 6) - (55, 17)",
    "22: (52, 8) - (54, 19)",
    "23: (53, 10) - (53, 64)"
  };

  @Test
  public void testBooks() {

    CharStream stream;
    try {
      ClassLoader classLoader = getClass().getClassLoader();
      File file = new File(classLoader.getResource("indexer/RouteCatalog.xosc").getFile());
      InputStream in = new FileInputStream(file);
      stream = CharStreams.fromStream(in);

      XMLLexer lexer = new XMLLexer(stream);

      CommonTokenStream tokens = new CommonTokenStream(lexer);
      XMLParser parser = new XMLParser(tokens);
      parser.document();

      PositionIndex positionIndex = parser.getPositionIndex();
      for (int i = 0; i < positionIndex.getSize(); i++) {
        Assertions.assertEquals(expectedOutput[i], dump(positionIndex, i));
      }
      in.close();
    } catch (IOException e) {
      Assertions.fail();
    }
  }

  public static String dump(PositionIndex positionIndex, int index) {
    ElementNode elementNode = positionIndex.getElementNode(index);
    return index
        + ": "
        + "("
        + elementNode.getStartPosition().getLine()
        + ", "
        + elementNode.getStartPosition().getColumn()
        + ") - ("
        + elementNode.getEndPosition().getLine()
        + ", "
        + elementNode.getEndPosition().getColumn()
        + ")";
  }
}
