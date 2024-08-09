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
#include "ApiClassInterfacesV1_3.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.3
         * <p>
         * A helper class for the catalog elements. This class provides conversion methods for all subclasses of ICatalogElement 
         * and a method for providing the name
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogHelper 
        {
        public:
            /**
            * Tests for the type IController
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IController
            */
            OPENSCENARIOLIB_EXP static bool IsController(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IEnvironment
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IEnvironment
            */
            OPENSCENARIOLIB_EXP static bool IsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IManeuver
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IManeuver
            */
            OPENSCENARIOLIB_EXP static bool IsManeuver(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IMiscObject
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IMiscObject
            */
            OPENSCENARIOLIB_EXP static bool IsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IPedestrian
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IPedestrian
            */
            OPENSCENARIOLIB_EXP static bool IsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IRoute
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IRoute
            */
            OPENSCENARIOLIB_EXP static bool IsRoute(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type ITrajectory
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type ITrajectory
            */
            OPENSCENARIOLIB_EXP static bool IsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Tests for the type IVehicle
            * @param catalogElement the catalog element
            * @return true if the catalog element is of type IVehicle
            */
            OPENSCENARIOLIB_EXP static bool IsVehicle(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IController
            * @param catalogElement the catalog element
            * @return converted value of type IController or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IController> AsController(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IEnvironment
            * @param catalogElement the catalog element
            * @return converted value of type IEnvironment or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IEnvironment> AsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IManeuver
            * @param catalogElement the catalog element
            * @return converted value of type IManeuver or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IManeuver> AsManeuver(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IMiscObject
            * @param catalogElement the catalog element
            * @return converted value of type IMiscObject or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IMiscObject> AsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IPedestrian
            * @param catalogElement the catalog element
            * @return converted value of type IPedestrian or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IPedestrian> AsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IRoute
            * @param catalogElement the catalog element
            * @return converted value of type IRoute or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IRoute> AsRoute(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type ITrajectory
            * @param catalogElement the catalog element
            * @return converted value of type ITrajectory or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<ITrajectory> AsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Conversion to type IVehicle
            * @param catalogElement the catalog element
            * @return converted value of type IVehicle or null if the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::shared_ptr<IVehicle> AsVehicle(std::shared_ptr<ICatalogElement>& catalogElement);

            /**
            * Provides the name of the catalogElement
            * @param catalogElement the catalog element
            * @return the name of the catalogElement 
            * cannot be converted
            */
            OPENSCENARIOLIB_EXP static std::string GetName(std::shared_ptr<ICatalogElement>& catalogElement);
            
            /**
	        * Provides the ParameterDeclarations of the catalogElement
	        * @param catalogElement the catalog element
	        * @return The list with the parameter declarations
	        */
	        OPENSCENARIOLIB_EXP static std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations(std::shared_ptr<ICatalogElement>& catalogElement);
       
        };
    }
}
