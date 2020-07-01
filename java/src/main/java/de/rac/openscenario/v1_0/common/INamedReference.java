package de.rac.openscenario.v1_0.common;

import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;

/**
 * A proxy for the real object. If resolved, the targetName holds the real object.
 * 
 * @author Andreas Hege - RA Consulting
 * @param <T> type of the target object
 *
 */
public interface INamedReference<T> extends IOpenScenarioModelElement{

	/**
	 * The real object the reference is pointing to
	 * @return resolved real object or null if not yet resolved or could not be resolved.
	 */
	public T getTargetObject();
	
	/**
	 * The name that represents the real object.
	 * @return the name of the target object.
	 */
	public String getNameRef() ;
	
	/**
	 * Setting the parent of this named reference
	 * @param parent parent in the tree.
	 */
	public void setParent(IOpenScenarioModelElement parent);
	
}
