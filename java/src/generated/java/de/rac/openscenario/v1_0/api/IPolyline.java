package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPolyline extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Ordered chain of vertices of the polygonal chain.
	 * 
	 * @return value of model property vertices
	*/
	public List<IVertex> getVertices();
}
