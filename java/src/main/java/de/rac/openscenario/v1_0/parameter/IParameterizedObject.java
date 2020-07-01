package de.rac.openscenario.v1_0.parameter;

import java.util.List;
import java.util.Set;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;

/**
 * An accessor to a parameterized object
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IParameterizedObject {

	/**
	 * A set with all keys for attributes that have parameters instead of real values.
	 * @return the set of keys
	 */
	public Set<String> getParameterizedAttributeKeys();
	/**
	 * resolving a parameter using a string representation of a value
	 * @param logger to log messages
	 * @param attributeKey attribute key whose parameter should be resolved.
	 * @param value string representation of a value
	 */
	public void resolveParameter(IParserMessageLogger logger, String attributeKey, String value);
	/**
	 * Checks whether there are unresolved attributes left (attributes that are assigned parameters 
	 * instead of real values).
	 * @return true if the object has unresolved attributes
	 */
	public boolean hasParameterDefinitions();
	/**
	 * All parameter definition of a parameter.
	 * @return a list of ParameterValues
	 */
	public List<ParameterValue> getParameterDefinitions();
	/**
	 * The textmarker for a specific parameterized attribute represented by its attribute key.
	 * @param attributeKey the key constant
	 * @return the textmarker or null if the parameter key does not exists or the parameter is not parameterized.
	 */
	public Textmarker getTextmarker(String attributeKey);
	
	/**
	 * The name from a key constant. This method is for assembling messages.
	 * @param attributeKey the key constant
	 * @return the name of the constant.
	 */
	public String getParameterNameFromAttribute(String attributeKey);
	/**
	 * The type of the attribute as a class
	 * @param attributeKey the key constant
	 * @return the class as a type
	 */
	public Class<?> getTypeFromAttributeName(String attributeKey);
	
}
