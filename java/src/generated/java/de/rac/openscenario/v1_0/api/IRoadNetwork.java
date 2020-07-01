package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The road network which provides the base layer (and road-relative coordinate systems) for all scenario elements is
 * defined as a reference to a road network file. This reference is optional; in case it is not specified, an infinite
 * non-inclined plane on level z=0 shall be assumed as base layer. Additionally and optionally, a visual 3D model file can
 * be referenced and any number of signals can be specified.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoadNetwork extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * File path of the road network file (e.g. an ASAM OpenDRIVE file).
	 * 
	 * @return value of model property logicFile
	*/
	public IFile getLogicFile();

	/**
	 * From OpenSCENARIO class model specification:
	 * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
	 * 
	 * @return value of model property sceneGraphFile
	*/
	public IFile getSceneGraphFile();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name references and description of dynamic behavior for traffic signals defined in the road network file.
	 * 
	 * @return value of model property trafficSignals
	*/
	public List<ITrafficSignalController> getTrafficSignals();
}
