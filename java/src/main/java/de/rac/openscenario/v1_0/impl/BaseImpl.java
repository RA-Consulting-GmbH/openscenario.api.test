package de.rac.openscenario.v1_0.impl;

import java.util.Hashtable;
import java.util.List;
import java.util.Set;

import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.parameter.IParameterizedObject;
import de.rac.openscenario.v1_0.parameter.ParameterValue;

/**
 * This a base class for all osc model classes. They are independent from the xml platform.
 * Subclasses can be filled from other sources than xml.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class BaseImpl implements IParameterizedObject,  IOpenScenarioModelElement, Cloneable{

	private Hashtable<String, ParameterizedAttribute> attributeKeyToParameterName = new Hashtable<String, ParameterizedAttribute>();
	private Hashtable<String, Textmarker> attributeKeyToStartMarker = new Hashtable<String, Textmarker>();
	private Hashtable<String, Textmarker> attributeKeyToEndMarker = new Hashtable<String, Textmarker>();
	private Hashtable<Class<?>, Object> adapters = new Hashtable<Class<?>, Object>();
	private Textmarker startMarker;
	private Textmarker endMarker;
	private IOpenScenarioModelElement parent = null;
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	/**
	 * Constructor
	 */
	public BaseImpl() {
		adapters.put(ILocator.class, new ILocator() {
		
		@Override
		public Textmarker getStartMarkerOfProperty(String propertyKey) {
			return attributeKeyToStartMarker.get(propertyKey);
		}
		
		@Override
		public Textmarker getStartMarker() {
			return startMarker;
		}
		
		@Override
		public Textmarker getEndMarkerOfProperty(String propertyKey) {
			return attributeKeyToEndMarker.get(propertyKey);
		}
		
		@Override
		public Textmarker getEndMarker() {
			return endMarker;
		}});
	}
	
	@Override
	public Object getAdapter(Class<?> classifier)
	{
		return adapters.get(classifier);
		
	}
	/**
	 * Adds an adapter object to the instance
	 * @param classifier The adapter class
	 * @param object the adapter object
	 */
	public void addAdapter (Class<?> classifier, Object object)
	{
		adapters.put(classifier, object);
	}
	
	/**
	 * Puts a start marker for a specific property 
	 * @param propertyKey the key of the property
	 * @param startMarker the start marker
	 */
	public void putPropertyStartMarker(String propertyKey, Textmarker startMarker)
	{
		attributeKeyToStartMarker.put(propertyKey, startMarker);
	}
	
	/**
	 * Puts an end marker for a specific property 
	 * @param propertyKey the key of the property
	 * @param endMarker the end marker
	 */
	public void putPropertyEndMarker(String propertyKey, Textmarker endMarker)
	{
		attributeKeyToEndMarker.put(propertyKey, endMarker);
	}
	
	/**
	 * A clone method for the start marker
	 * @param baseImpl the cloned object to set this object's start marker
	 */
	protected void cloneStartMarker(BaseImpl baseImpl)
	{
		baseImpl.setStartMarker(startMarker);
		
	}
	
	/**
	 * Clone method for the end marker
	 * @param baseImpl the cloned object to set this object's end marker
	 */
	protected void cloneEndMarker(BaseImpl baseImpl)
	{
		baseImpl.setEndMarker(endMarker);
		
	}
	/**
	 * Clone method for the properties start markers
	 * @param baseImpl the cloned object to set this object's property start markers
	 */
	protected void cloneAttributeKeyToStartMarker(BaseImpl baseImpl)
	{
		baseImpl.attributeKeyToStartMarker.putAll(attributeKeyToStartMarker);
	}
	
	/**
	 * Clone method for the properties end markers
	 * @param baseImpl the cloned object to set this object's property end markers
	 */
	protected void cloneAttributeKeyToEndMarker(BaseImpl baseImpl)
	{
		baseImpl.attributeKeyToEndMarker.putAll(attributeKeyToEndMarker);
	}
	/**
	 * Clones the attributeKeyToParameterName property of this class into the coled object.
	 * @param baseImpl  the cloned object to copy this object's attributeKeyToParameterName into.
	 */
	protected void cloneAttributeKeyToParameterNameMap(BaseImpl baseImpl)
	{
		for (String key : attributeKeyToParameterName.keySet()) {
			
			ParameterizedAttribute parameterizedAttribute = attributeKeyToParameterName.get(key);
			baseImpl.attributeKeyToParameterName.put(key, new ParameterizedAttribute(parameterizedAttribute.parameterName, parameterizedAttribute.textMarker));
			
		}
		
	}
	
	/**
	 * Sets an attribute that is represented by a parameter instead of a real value.
	 * @param attributeKey the key of this attribute.
	 * @param parameterName the name of the parameter.
	 * @param textmarker The text marker for this object.
	 */
	public void setAttributeParameter(String attributeKey,String parameterName, Textmarker textmarker )
	{
		attributeKeyToParameterName.put(attributeKey, new ParameterizedAttribute(parameterName,  textmarker) );
	}
	
	/**
	 * Removes the resolved attribute value from the list of unresolved parameters.
	 * @param attributeKey attribute key of the property.
	 */
	protected void removeResolvedParameter(String attributeKey)
	{
		attributeKeyToParameterName.remove(attributeKey);
	}

	@Override
	public List<ParameterValue> getParameterDefinitions() {
		return null;
	}
	
	@Override
	public boolean hasParameterDefinitions() {
		return false;
	}
	
	/**
	 * Gets the java class for a parameter type (for resolving the parameter).
	 * @param typeName the model type name.
	 * @return the corresponding java class or null if no type is found.
	 */
	protected Class<?> getParameterType(String typeName)
	{
		if (typeName == "string")
		{
			return String.class;
			
		}else if (typeName == "unsignedInt")
		{
			return Long.class;
			
		}else if (typeName == "integer")
		{
			return Integer.class;
			
		}else if (typeName == "unsignedShort")
		{
			return Integer.class;
		}else if (typeName == "dateTime")
		{
			return java.util.Date.class;
		}else if (typeName == "boolean")
		{
			return Boolean.class;
			
		}else if (typeName == "double")
		{
			return Double.class;
		}
		return null;
	}
	
	@Override
	public Textmarker getTextmarker(String attributeKey) {
		ParameterizedAttribute parameterizedAttribute = attributeKeyToParameterName.get(attributeKey);
		if (parameterizedAttribute == null)
			return null;
		else return parameterizedAttribute.textMarker;
	}
	
	
	
	@Override
	public  Set<String> getParameterizedAttributeKeys()
	{
		return attributeKeyToParameterName.keySet();
	}
	
	@Override
	public  String getParameterNameFromAttribute(String attributeKey)
	{
		ParameterizedAttribute parameterizedAttribute = attributeKeyToParameterName.get(attributeKey);
		if (parameterizedAttribute != null)
		{
			return parameterizedAttribute.parameterName;
		}else
		{
			return null;
		}
	}
	
	/**
	 * An attribute that is paramterized.
	 *
	 */
	private class ParameterizedAttribute
	{
		protected Textmarker textMarker;
		protected String parameterName;
		
		public ParameterizedAttribute(
				String parameterName,Textmarker textMarker) {
			super();
			this.textMarker = textMarker;
			this.parameterName = parameterName;
		}
		
		
		
	}
	/**
	 * The tpe of an attribute that is represented by the attribute key
	 * @param attributeKey the key of the attribute
	 * @return the type of the attribute
	 */
	public abstract Class<?> getTypeFromAttributeName(String attributeKey);
	
	/**
	 * Resolve a parameter internally
	 * @param logger to log messages during the resolving process (e.g. format errors)
	 * @param attributeKey the key of the property the value should be assigned to
	 * @param value the string representation of the value that should be assigned to the property
	 */
	protected abstract void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String value);
	

	/**
	 * Resolve a parameter. Checks the target class and calls resolveParameterInternal.
	 * @param logger to log messages during the resolving process (e.g. format errors)
	 * @param attributeKey the key of the property the value should be assigned to
	 * @param value the string representation of the value that should be assigned to the property
	 */
	public  void resolveParameter(IParserMessageLogger logger, String attributeKey, String value)
	{
		// make sure it is a parameterized attribute
		Class<?> targetClass = getTypeFromAttributeName(attributeKey);
		assert(targetClass != null);
		resolveParameterInternal(logger, attributeKey, value);
	}
	
	/**
	 * The start marker of the this object in a file.
	 * @return start marker or null if not set
	 */
	public Textmarker getStartMarker() {
		return startMarker;
	}

	/**
	 * Assigns the start marker
	 * @param startMarker the start marker
	 */
	public void setStartMarker(Textmarker startMarker) {
		this.startMarker = startMarker;
	}

	/**
	 * The end marker of the this object in a file.
	 * @return end marker or null if not set
	 */
	public Textmarker getEndMarker() {
		return endMarker;
	}

	/**
	 * Assigns the end marker
	 * @param endMarker the end marker
	 */
	public void setEndMarker(Textmarker endMarker) {
		this.endMarker = endMarker;
	}
	
	/**
	 * All child instances of this object as a flattened list. Must be implemented in subclasses.
	 * @return a list with all child instances.
	 */
	public abstract List<BaseImpl> getChildren();
	
	/**
	 * Indicating that all subclasses must implement the the Clonable interface.
	 */
	public abstract BaseImpl clone();
	
	@Override
    public IOpenScenarioModelElement getParent()
    {
        return parent;
    } 
    
    /**
     * Setting the object's parent
     * @param parent the parent of the object in the model tree.
     */
    public void setParent(IOpenScenarioModelElement parent)
    {
        this.parent = parent;
    } 
}
