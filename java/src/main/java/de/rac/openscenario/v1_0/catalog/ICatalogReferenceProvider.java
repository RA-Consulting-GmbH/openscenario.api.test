package de.rac.openscenario.v1_0.catalog;

import java.util.List;

import de.rac.openscenario.v1_0.api.ICatalogReference;

/**
 * Interface for requesting all catalog references from a scenario.
 * It is used to reslove all references once the scenario file has been loaded.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface ICatalogReferenceProvider {

	/**
	 * Provides a list with all catalog references from a scenario a file.
	 * @return the list with the catalog references
	 */
	public List<ICatalogReference> getCatalogReferences();
}
