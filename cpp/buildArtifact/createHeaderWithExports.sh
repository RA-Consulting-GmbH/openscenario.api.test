#!/bin/bash
# Include all header files exporting symbols created with the Linux bash command (execute in cpp/applications/openScenarioReader/src):
cwd=$(pwd)
cd ../applications/openScenarioReader/src
echo "#pragma once" >headerWithExports.h
for fullfile in $(find ../../../ -name "*.h" -exec grep -l -h -e "OPENSCENARIOLIB_EXP" \{\} \;); do echo "#include \"${fullfile##*/}\"" >>headerWithExports.h; done
cd "${cwd}"
