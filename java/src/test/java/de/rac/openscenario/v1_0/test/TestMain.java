package de.rac.openscenario.v1_0.test;

import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.main.OpenScenarioChecker;

public class TestMain extends TestBase {


	public void testImportSuccess() {
		OpenScenarioChecker.main(new String[] { inputDir
				+ "simpleImport/simpleImport.xosc" });

	}
	
	@Test
	public void testWithErrors()
	{
		String filename = inputDir + "DoubleLaneChangerParamsError.xosc";
		OpenScenarioChecker.main(new String[] {filename}
		);
	}
}
