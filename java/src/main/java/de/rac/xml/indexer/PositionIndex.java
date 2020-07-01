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
