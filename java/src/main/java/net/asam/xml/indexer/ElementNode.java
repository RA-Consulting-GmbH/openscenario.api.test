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
 
package net.asam.xml.indexer;

import java.util.ArrayList;
import java.util.List;

/**
 * Element node that hold attributes and positions (start, end)
 * @author Andreas Hege - RA Consulting
 *
 */
public class ElementNode extends PositionNode{

	
	private List<AttributeNode> attributes = new ArrayList<AttributeNode>();
	
	/**
     * Constructor
     * @param line of the start position
     * @param column of the stat position
     */
	public ElementNode(int line, int column) {
		super(line, column);
		
	}
	/**
     * Constructor
     * @param startLine line of the start position
     * @param startColumn column of the stat position
     * @param endLine line of the end position
     * @param endColumn column of the end position
     */
	public ElementNode(int startLine, int startColumn, int endLine, int endColumn) {
		super(startLine, startColumn,endLine, endColumn);
		
	}

	/**
	 * Adds an attribute node
	 * @param attributeNodes attribte node to add
	 */
	public void addAttributes(List<AttributeNode> attributeNodes)
	{
		attributes.addAll(attributeNodes);
	}
	
	/**
	 * Get the attribute node by its index.
	 * @param index the requested index
	 * @return the attribute node
	 */
	public AttributeNode getAttributeNode( int index)
	{
		return attributes.get(index);
	}
	
	/**
	 * Get the attribute node by its name
	 * @param attributeName the name of the attribute node
	 * @return the attribute node with the specific name.
	 */
	public AttributeNode getAttributeNode(String attributeName)
	{
		AttributeNode result = null;
		for (AttributeNode attributeNode : attributes) {
			if (attributeNode.getName().equals(attributeName))
			{
				return attributeNode;
			}
		}
		return result;
	}
	

}
