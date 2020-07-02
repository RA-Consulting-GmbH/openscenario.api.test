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
 
package de.rac.xml.indexer;

import java.util.Hashtable;
import java.util.List;
import java.util.Stack;

/**
 * Index of element nodes that is filled during reading
 * @author Andreas Hege - RA Consulting
 *
 */
public class PositionIndex {

	private int counter = 0;
	private Hashtable<Integer, ElementNode> dictionary = new Hashtable<Integer, ElementNode>();
	Stack< ElementNode> stack = new Stack<ElementNode>();
	
	/**
	 * Pushing a element node 
	 * @param line start line of the element node
	 * @param column start column of the element node
	 * @param attributeNodes the attribute nodes of the element node.
	 */
	public void pushElementNode(int line, int column, List<AttributeNode> attributeNodes)
	{
		
		ElementNode node = new ElementNode(line, column);
		node.addAttributes(attributeNodes);
		dictionary.put(counter++, node);
		stack.push(node);	
	}
	/**
	 * Sets the end position
	 * @param line end line of the element node
	 * @param column end column of the element node
	 */
	public void setEndPosition(int line, int column)
	{
		ElementNode node = stack.pop();
		node.addEndPosition(line, column);
	}
	
	/**
	 * Getter facadse for the index
	 * @param index the requested index
	 * @return the found element node or null if not not found
	 */
	public ElementNode getElementNode(int index)
	{
		return dictionary.get(index);
	}
	
	/**
	 * Size of the index
	 * @return the size
	 */
	public int getSize()
	{
		return counter;
	}
	
	

}
