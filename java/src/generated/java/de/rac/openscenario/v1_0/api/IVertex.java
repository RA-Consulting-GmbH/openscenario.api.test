package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Vertex of a polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IVertex extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification of the vertex.
	 * 
	 * @return value of model property time
	*/
	public Double getTime();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the vertex.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
