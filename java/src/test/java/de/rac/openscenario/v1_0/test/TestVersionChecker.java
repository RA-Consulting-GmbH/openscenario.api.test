package de.rac.openscenario.v1_0.test;

import java.util.ArrayList;
import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.checker.VersionCheckerRule;
import de.rac.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;
import de.rac.openscenario.v1_0.checker.range.RangeCheckerHelper;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.loader.ScenarioLoaderException;

public class TestVersionChecker extends TestBase {


	private void applyCheckerRules( IOpenScenario openScenario, int majorRev, int minorRev)
	{
		ScenarioCheckerImpl scenarioChecker = new ScenarioCheckerImpl();
		scenarioChecker.addFileHeaderCheckerRule(new VersionCheckerRule(majorRev, minorRev));
		scenarioChecker.checkScenario(messageLogger, openScenario);
	}

	@Test
	public void testSuccess() {
		try {
			String filename = getResourceFile( "DoubleLaneChanger.xosc").getAbsolutePath();
			IOpenScenario openScenario=executeParsing(filename);
			applyCheckerRules(openScenario, 0,9);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, messageLogger));
			applyCheckerRules(openScenario, 1,0);
            messages.add(new FileContentMessage(
			    "Major revision and minor revision are expected to be 1 and 0",
					ErrorLevel.WARNING, new Textmarker(5, 2, filename)));

			Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, messageLogger));

		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	

	
}
