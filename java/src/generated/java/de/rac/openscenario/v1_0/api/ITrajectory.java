package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a trajectory type in terms of shape and optional time domain.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrajectory extends IOpenScenarioModelElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the trajectory type. Required if used in catalog.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * True if trajectory is closed.
	 * 
	 * @return value of model property closed
	*/
	public Boolean getClosed();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of a trajectory (Polyline, Clothoid or Nurbs)
	 * 
	 * @return value of model property shape
	*/
	public IShape getShape();
}
