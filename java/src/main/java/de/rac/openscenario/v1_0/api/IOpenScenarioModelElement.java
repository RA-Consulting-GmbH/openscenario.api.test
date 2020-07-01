package de.rac.openscenario.v1_0.api;

/**
 * Every osc model element does implement this interface
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IOpenScenarioModelElement {
	/**
	 * Asks for an adapter of a specific class.
	 * @param classifier the class an adapter is requested for.
	 * @return an adapter or null, if the specified adapter class is not supported.
	 */
	public Object getAdapter(Class<?> classifier);
	
	/**
	 * Provides the parent of this object. It is null for any Object that is not of type IOpenScenario 
	 * (which is the root)
	 * @return the model parent of this object
	 */
	public IOpenScenarioModelElement getParent();

}
