package de.rac.openscenario.v1_0.api;
import java.util.List;
import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for private actions assigned to one specific entity and used in the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPrivate extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of private actions to be executed when the enclosing container gets triggered.
	 * 
	 * @return value of model property privateActions
	*/
	public List<IPrivateAction> getPrivateActions();
}
