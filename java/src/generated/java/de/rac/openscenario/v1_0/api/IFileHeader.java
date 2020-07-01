package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * File header used in OpenSCENARIO files, e.g. scenario file or catalog files.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IFileHeader extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Major OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMajor
	*/
	public Integer getRevMajor();

	/**
	 * From OpenSCENARIO class model specification:
	 * Minor OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMinor
	*/
	public Integer getRevMinor();

	/**
	 * From OpenSCENARIO class model specification:
	 * User specific date and time recommended: YYYY-MM-DDThh:mm:ss.
	 * 
	 * @return value of model property date
	*/
	public java.util.Date getDate();

	/**
	 * From OpenSCENARIO class model specification:
	 * User specific description.
	 * 
	 * @return value of model property description
	*/
	public String getDescription();

	/**
	 * From OpenSCENARIO class model specification:
	 * Author of the scenario or the catalog.
	 * 
	 * @return value of model property author
	*/
	public String getAuthor();
}
