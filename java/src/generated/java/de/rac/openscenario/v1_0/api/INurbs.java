package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Non-uniform rational b-spline (NURBS) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface INurbs extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Order of the NURBS trajectory. This is the order of the curve, not the degree of the polynomials, which will be one less
	 * than the order of the curve. Range [2..inf[.
	 * 
	 * @return value of model property order
	*/
	public Long getOrder();

	/**
	 * From OpenSCENARIO class model specification:
	 * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
	 * curve.
	 * 
	 * @return value of model property controlPoints
	*/
	public List<IControlPoint> getControlPoints();

	/**
	 * From OpenSCENARIO class model specification:
	 * Knot vector of the NURBS trajectory. Knot values must be given in ascending order. The number of knot vector values must
	 * be equal to the number of control points plus the order of the curve.
	 * 
	 * @return value of model property knots
	*/
	public List<IKnot> getKnots();
}
