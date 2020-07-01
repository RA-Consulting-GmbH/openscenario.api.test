package de.rac.openscenario.v1_0.loader;

import java.util.Hashtable;

import de.rac.openscenario.v1_0.api.ICatalogElement;
import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.api.IOpenScenarioCategory;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.impl.OpenScenarioImpl;
import de.rac.openscenario.v1_0.parameter.ParameterResolver;

/**
 * Helper mehtod for processing a instance of a loaded IOpenScenario
 * @author Andreas Hege - RA Consulting
 *
 */
public class OpenScenarioProcessingHelper {

	/**
	 * is the loaded scenario a catalog.
	 * @param openScenario the loaded instance of IOpenScenario
	 * @return true if catalog
	 */
	public static boolean isCatalog(IOpenScenario openScenario)
	{
		IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();
		return openScenarioCategory != null && openScenarioCategory.getCatalogDefinition() != null;
	}
	
	/**
	 * Resolve all parameters in the loaded instance of IOpenScenario
	 * @param logger to log messages
	 * @param openScenario the loaded instance of IOpenScenario
	 */
	public static void resolve(IParserMessageLogger logger,  OpenScenarioImpl openScenario)
	{
		if (!isCatalog(openScenario))
		{
			ParameterResolver parameterResolver = new ParameterResolver();
			parameterResolver.resolve(logger, openScenario, true);
		}
	
	}
	
	
	/**
	 * Resolve all parameters in the loaded catalog element
	 * @param logger to log messages
	 * @param catalogElement a catalogElement the parameters will be resolved.
	 * @param parameterAssignments the parameter assignments that provide the parameter names and values
	 */
	public static void resolveWithParameterAssignements(IParserMessageLogger logger,  ICatalogElement catalogElement, Hashtable<String, String> parameterAssignments)
	{
		ParameterResolver parameterResolver = new ParameterResolver();
		parameterResolver.resolveWithParameterAssignments(logger, catalogElement, parameterAssignments);
	
	}
	
	
	
	
}
