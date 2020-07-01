package de.rac.openscenario.v1_0.api;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Function type used to represent the change of a given variable over time or distance.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>Value changes in a linear function: f(x) = f_0 + rate * x.
 * <li>Cubical transition f(x)=A*x^3+B*x^2+C*x+D with the constraint that the gradient must be zero at start and end.
 * <li>Sinusoidal transition f(x)=A*sin(x)+B with the constraint that the gradient must be zero at start and end.
 * <li>Step transition.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum DynamicsShape {	
	LINEAR("linear"),
	CUBIC("cubic"),
	SINUSOIDAL("sinusoidal"),
	STEP("step");
	
	private final String literal;
	
	/**
	 * The literal from this enumeration value.
	 * @return the literal as defined in OpenSCENARIO
	 */
	public String getLiteral()
	{
		return literal;
	}
	
	/**
	 * Constructor using the literal
	 * @param the literal as defined in OpenSCENARIO
	 */
	DynamicsShape(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static DynamicsShape getFromLiteral(String literal)
	{
		if(literal.equals("linear"))
		{
			return LINEAR;
		} else 
		if(literal.equals("cubic"))
		{
			return CUBIC;
		} else 
		if(literal.equals("sinusoidal"))
		{
			return SINUSOIDAL;
		} else 
		if(literal.equals("step"))
		{
			return STEP;
		} else 
		{
			return null;
		}
	}

}

