package de.rac.openscenario.v1_0.common;

/**
 * Error Levels for Parsing and checking
 * <ul>
 * <li> FATAL - Fatal error that stops the whole loading process
 * <li> ERROR - Error that makes the loading results unusable but the loading process can continue to find 
 * additional errors and warnings.
 * <li> WARNING - Warnings are errors that most likely have been corrected by the loader.
 * <li> INFO - Informations for the loader process.
 * <li> DEBUG - Debug information to trace the loading process.
 *  
 * </ul>
 * @author Andreas Hege - RA Consulting
 *
 */
public enum ErrorLevel {

	FATAL, ERROR, WARNING, INFO, DEBUG;
}
