package de.rac.openscenario.v1_0.parameter;

/**
 * Container for parameter values (name, type, value)
 * @author Andreas Hege - RA Consulting
 *
 */
public class ParameterValue {

	
	private String name;
	private Class<?> type;
	private String value;
	
	/**
	 * Constructor
	 * @param name the name of the parameter
	 * @param type the type of a parameter as class
	 * @param value the value of a parameter
	 */
	public ParameterValue(String name, Class<?> type, String value) {
		super();
		this.name = name;
		this.type = type;
		this.value = value;
	}
	
	/**
	 * The name of the parameter
	 * @return the name
	 */
	public String getName() {
		return name;
	}
	
	/**
	 * The type of a parameter as class
	 * @return the type
	 */
	public Class<?> getType() {
		return type;
	}
	/**
	 * The value of a parameter
	 * @return the value
	 */
	public String getValue() {
		return value;
	}
	
	/**
	 * Sets the value of a parameter
	 * @param value the value of a parameter
	 */
	public void setValue(String value) {
		this.value = value;
	}
	
}
