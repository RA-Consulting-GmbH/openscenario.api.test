package de.rac.openscenario.v1_0.test;

import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.api.ICatalogReference;
import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.api.IScenarioObject;
import de.rac.openscenario.v1_0.api.IVehicle;
import de.rac.openscenario.v1_0.catalog.CatalogHelper;
import de.rac.openscenario.v1_0.loader.ScenarioLoaderException;

public class TestImports extends TestBase{


	

	@Test
	public void testImportSuccess() {
		try {
			MessageLogger catalogMessageLogger = new MessageLogger();
			
			IOpenScenario openScenario =  executeImportParsing(getResourceFile("simpleImport/simpleImport.xosc").getAbsolutePath(),catalogMessageLogger);
			// Ego parameterAssignement for maxSpeed
			ICatalogReference catalogReference = getVehicleImport(openScenario, "Ego","car_white");
			Assertions.assertTrue(catalogReference != null);
			Assertions.assertTrue(catalogReference.getRef()!= null);
			IVehicle vehicleImportEgo = CatalogHelper.asVehicle(catalogReference.getRef());
			Assertions.assertTrue(vehicleImportEgo!= null);
			Assertions.assertEquals((Double) 69.0, vehicleImportEgo.getPerformance().getMaxSpeed());
			
			catalogReference = getVehicleImport(openScenario, "OverTaker","car_red");
			Assertions.assertTrue(catalogReference != null);
			Assertions.assertTrue(catalogReference.getRef()!= null);
			IVehicle vehicleImportOvertaker = CatalogHelper.asVehicle(catalogReference.getRef());
			Assertions.assertTrue(vehicleImportOvertaker!= null);
			Assertions.assertEquals((Double) 70.0, vehicleImportOvertaker.getPerformance().getMaxSpeed());
			Assertions.assertTrue(vehicleImportOvertaker != vehicleImportEgo);
			
			Assertions.assertFalse(hasErrors(messageLogger));
		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	@Test
	public void testImportWithParametersSuccess() {
		try {
			MessageLogger catalogMessageLogger = new MessageLogger();
			
			IOpenScenario openScenario = executeImportParsing(getResourceFile( "simpleImportWithParameters/importWithParameters.xosc").getAbsolutePath(),catalogMessageLogger);
			
			// Ego parameterAssignement for maxSpeed
			ICatalogReference catalogReference = getVehicleImport(openScenario, "Ego","car_white");
			Assertions.assertTrue(catalogReference != null);
			Assertions.assertTrue(catalogReference.getRef()!= null);
			IVehicle vehicleImportEgo = CatalogHelper.asVehicle(catalogReference.getRef());
			Assertions.assertTrue(vehicleImportEgo!= null);
			Assertions.assertEquals((Double) 70.0, vehicleImportEgo.getPerformance().getMaxSpeed());
			
			// Overtaker: Same import, different ParamterAssignements for maxSpeed
			catalogReference = getVehicleImport(openScenario, "OverTaker","car_white");
			Assertions.assertTrue(catalogReference != null);
			Assertions.assertTrue(catalogReference.getRef()!= null);
			IVehicle vehicleImportOvertaker = CatalogHelper.asVehicle(catalogReference.getRef());
			Assertions.assertTrue(vehicleImportOvertaker!= null);
			Assertions.assertEquals((Double) 31.0, vehicleImportOvertaker.getPerformance().getMaxSpeed());
			Assertions.assertTrue(vehicleImportOvertaker != vehicleImportEgo);
			
			// ThirdEntity: No ParameterAssignements => Default Value for maxSpeed
			catalogReference = getVehicleImport(openScenario, "ThirdEntity","car_white");
			Assertions.assertTrue(catalogReference != null);
			Assertions.assertTrue(catalogReference.getRef()!= null);
			IVehicle vehicleImportThirdVehicle = CatalogHelper.asVehicle(catalogReference.getRef());
			Assertions.assertTrue(vehicleImportThirdVehicle!= null);
			Assertions.assertEquals((Double) 60.0, vehicleImportThirdVehicle.getPerformance().getMaxSpeed());
			
			Assertions.assertFalse(hasErrors(messageLogger));
		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	

	private ICatalogReference getVehicleImport(IOpenScenario openScenario, String scenarioObjectName, String entryName)
	{
		List<IScenarioObject> scenarioObjects = openScenario.getOpenScenarioCategory().getScenarioDefinition().getEntities().getScenarioObjects();
		for (IScenarioObject scenarioObject: scenarioObjects)
		{
			if (scenarioObject.getName().equals(scenarioObjectName))
			{
				ICatalogReference catalogReference = scenarioObject.getEntityObject().getCatalogReference();
				if (catalogReference != null && catalogReference.getEntryName().equals(entryName))
				{
					return catalogReference;
				}
			}
		}
		return null;
	}
	
	
	
}
