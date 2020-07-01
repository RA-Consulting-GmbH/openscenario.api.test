package de.rac.openscenario.v1_0.common;
/**
 * A locator for objects in a text file.
 * @author Andreas Hege - RA Consulting
 *
 */
public interface ILocator {
	
	/**
	 * Locates the start of an object in a text file
	 * @return the start marker
	 */
	public Textmarker getStartMarker();
	
	/**
	 * Locates the end of an object in a text file
	 * @return the end marker
	 */
	public Textmarker getEndMarker();
	
	/**
	 * Locates the start of an property that belongs to an object in a text file
	 * @param propertyKey the property (attribute) in xml
	 * @return the start marker
	 */
	public Textmarker getStartMarkerOfProperty(String propertyKey);
	
	/**
	 * Locates the end of an property that belongs to an object in a text file
	 * @param propertyKey the property (attribute) in xml
	 * @return the end marker
	 */
	public Textmarker getEndMarkerOfProperty(String propertyKey);
}
