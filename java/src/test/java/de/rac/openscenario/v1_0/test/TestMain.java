package de.rac.openscenario.v1_0.test;

import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.main.OpenScenarioChecker;

public class TestMain extends TestBase {


	public void testImportSuccess() {
		OpenScenarioChecker.main(new String[] { getResourceFile(
				 "simpleImport/simpleImport.xosc").getAbsolutePath() });

	}
	
	@Test
	public void testWithErrors()
	{
		String filename = getResourceFile( "DoubleLaneChangerParamsError.xosc").getAbsolutePath();
		OpenScenarioChecker.main(new String[] {filename}
		);
	}
}
