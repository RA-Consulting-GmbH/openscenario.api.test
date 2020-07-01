package de.rac.openscenario.v1_0.test;

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;

import com.sun.org.apache.xerces.internal.xni.parser.XMLParseException;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.impl.OpenScenarioImpl;
import de.rac.openscenario.v1_0.loader.ScenarioLoaderException;

public class TestFiles extends TestBase{


	@Test
	public void testSimpleSuccess() {
		try {
			executeParsing(inputDir + "DoubleLaneChanger.xosc");
		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Test
	public void testParamsSuccess() {
		try {
			executeParsing(inputDir + "DoubleLaneChangerParams.xosc");
			Assertions.assertFalse(hasErrors(messageLogger), "Unexpected error occured");
		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Test
	public void testParamsFailure() {
		try {
			String filename = inputDir + "DoubleLaneChangerParamsError.xosc";
			executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			messages.add(new FileContentMessage(
					"Cannot resolve parameter 'UnknownParameter'",
					ErrorLevel.ERROR, new Textmarker(35, 17, filename)));
			messages.add(new FileContentMessage(
					"Cannot convert 'wrongDouble' to a double. Number format error.",
					ErrorLevel.ERROR, new Textmarker(71, 39, filename)));

			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.ERROR, messageLogger),"Unexpected Errors or Errors missing");

		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Test
	public void testUnvalidXml() {
		try {
			String filename = inputDir + "DoubleLaneChangeExtraHalf.xosc";
			executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			messages.add(new FileContentMessage(
					"XML-Dokumentstrukturen müssen innerhalb derselben Entity beginnen und enden.",
					ErrorLevel.FATAL, new Textmarker(30, 3, filename)));
			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.FATAL, messageLogger));
		} catch (ScenarioLoaderException e) {
			Assertions.assertTrue(
					e.getCause() instanceof XMLParseException);
		}
	}

	@Test
	public void testUnknownElement() {
		try {
			String filename = inputDir
					+ "DoubleLaneChangeExtraUnknownElement.xosc";
			executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			messages.add(new FileContentMessage(
					"Unknown element 'ScenarioObject'", ErrorLevel.ERROR,
					new Textmarker(33, 4, filename)));
			messages.add(new FileContentMessage("Unknown element 'Test'",
					ErrorLevel.ERROR, new Textmarker(59, 4, filename)));
			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.ERROR, messageLogger));
		} catch (ScenarioLoaderException e) {
			Assertions.assertTrue(
					e.getCause() instanceof XMLParseException);
		}
	}

	@Test
	public void testWrongAttributes() {
		try {
			String filename = inputDir
					+ "DoubleLaneChangerWrongAttributes.xosc";
			executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			messages.add(new FileContentMessage("Value 'TTTT' is not allowed.",
					ErrorLevel.ERROR, new Textmarker(61, 72, filename)));
			messages.add(new FileContentMessage(
					"Cannot convert 'ezert' to a double. Number format error.",
					ErrorLevel.ERROR, new Textmarker(61, 58, filename)));
			messages.add(new FileContentMessage(
					"Cannot convert 'TEST' to a double. Number format error.",
					ErrorLevel.ERROR, new Textmarker(63, 39, filename)));
			messages.add(new FileContentMessage(
					"Cannot convert '-56' to an unsignedInteger. Value must be in [0..4294967295].",
					ErrorLevel.ERROR, new Textmarker(121, 23, filename)));
			messages.add(new FileContentMessage(
					"Cannot convert '-40' to an unsignedInteger. Value must be in [0..4294967295].",
					ErrorLevel.ERROR, new Textmarker(158, 69, filename)));
			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.ERROR, messageLogger));
		} catch (ScenarioLoaderException e) {
			Assertions.assertTrue(
					e.getCause() instanceof XMLParseException);
		}
	}

	@Test
	public void testWrongEndElement() {
		try {
			String filename = inputDir + "DoubleLaneChangerWrongEndElement.xosc";
			executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			messages.add(new FileContentMessage(
					"Elementtyp \"PrivateActions\" muss mit dem entsprechenden Endtag \"</PrivateActions>\" beendet werden.",
					ErrorLevel.FATAL, new Textmarker(73,12, filename)));
			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.FATAL, messageLogger));
		} catch (ScenarioLoaderException e) {
			e.printStackTrace();
			Assertions.assertTrue(
					e.getCause() instanceof XMLParseException);
			
		}
	}
	
	@Test
	public void testCustomCommandAction() {
		try {
			String filename = inputDir + "DoubleLaneChangerCustomCommandAction.xosc";
			OpenScenarioImpl openScenarioImpl = executeParsing(filename);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			Assertions.assertTrue(
					assertMessages(messages, ErrorLevel.ERROR, messageLogger));
			String content = openScenarioImpl.getOpenScenarioCategory().getScenarioDefinition().getStoryboard().getInit().getActions().getUserDefinedActions().get(0).getCustomCommandAction().getContent();
			Assertions.assertEquals("\n				This is text defined  Inhalt\n			", content);
			
		} catch (ScenarioLoaderException e) {
			e.printStackTrace();
			Assertions.assertTrue(
					e.getCause() instanceof XMLParseException);
		}
	}
	

	@Test
	public void testFileNotFound() {
		try {
			String filename = inputDir + "FileNotFound.xosc";
			executeParsing(filename);

		} catch (ScenarioLoaderException e) {
			Assertions.assertTrue(
					e.getCause() instanceof FileNotFoundException);
		}
	}

	
	
}
