/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#pragma once

#include "IScenarioCheckerV1_2.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version
 * A helper class for adding all cardinality checker rules to a loaded scenario
 * all properties and children are checked if they are not optional
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class CardinalityCheckerHelper 
        {
        public:
            /**
            * Connects all cardinality checker rules to a global scenarioChecker
            * @param scenarioChecker the global scenarioChecker
            */
            static void AddAllCardinalityCheckerRules(std::shared_ptr<IScenarioChecker> scenarioChecker);
        };

    }
}
