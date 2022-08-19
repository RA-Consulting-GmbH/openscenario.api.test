#!/bin/bash

cd /opt/osc-generator/de.rac.openscenario.generator/target
export CLASSPATH=de.rac.openscenario.generator-1.2.2-jar-with-dependencies.jar 

java de.rac.openscenario.generator.cpp.GeneratorCpp /outputDir