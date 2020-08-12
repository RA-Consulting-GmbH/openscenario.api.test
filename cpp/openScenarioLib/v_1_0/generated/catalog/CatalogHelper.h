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
#include "ApiClassInterfaces.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
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
            static bool IsController(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IController>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IEnvironment
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IEnvironment
         */
            static bool IsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IEnvironment>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IManeuver
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IManeuver
         */
            static bool IsManeuver(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IManeuver>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IMiscObject
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IMiscObject
         */
            static bool IsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IMiscObject>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IPedestrian
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IPedestrian
         */
            static bool IsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IPedestrian>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IRoute
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IRoute
         */
            static bool IsRoute(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IRoute>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type ITrajectory
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type ITrajectory
         */
            static bool IsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<ITrajectory>(catalogElement) != nullptr;
            }
        /**
         * Tests for the type IVehicle
         * @param catalogElement the catalog element
         * @return true if the catalog element is of type IVehicle
         */
            static bool IsVehicle(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                return std::dynamic_pointer_cast<IVehicle>(catalogElement) != nullptr;
            }

        /**
        * Conversion to type IController
        * @param catalogElement the catalog element
        * @return converted value of type IController or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IController> AsController(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsController(catalogElement))
                    return std::dynamic_pointer_cast<IController>(catalogElement);
                return std::shared_ptr<IController>(nullptr);
            }
        /**
        * Conversion to type IEnvironment
        * @param catalogElement the catalog element
        * @return converted value of type IEnvironment or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IEnvironment> AsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsEnvironment(catalogElement))
                    return std::dynamic_pointer_cast<IEnvironment>(catalogElement);
                return std::shared_ptr<IEnvironment>(nullptr);
            }
        /**
        * Conversion to type IManeuver
        * @param catalogElement the catalog element
        * @return converted value of type IManeuver or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IManeuver> AsManeuver(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsManeuver(catalogElement))
                    return std::dynamic_pointer_cast<IManeuver>(catalogElement);
                return std::shared_ptr<IManeuver>(nullptr);
            }
        /**
        * Conversion to type IMiscObject
        * @param catalogElement the catalog element
        * @return converted value of type IMiscObject or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IMiscObject> AsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsMiscObject(catalogElement))
                    return std::dynamic_pointer_cast<IMiscObject>(catalogElement);
                return std::shared_ptr<IMiscObject>(nullptr);
            }
        /**
        * Conversion to type IPedestrian
        * @param catalogElement the catalog element
        * @return converted value of type IPedestrian or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IPedestrian> AsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsPedestrian(catalogElement))
                    return std::dynamic_pointer_cast<IPedestrian>(catalogElement);
                return std::shared_ptr<IPedestrian>(nullptr);
            }
        /**
        * Conversion to type IRoute
        * @param catalogElement the catalog element
        * @return converted value of type IRoute or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IRoute> AsRoute(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsRoute(catalogElement))
                    return std::dynamic_pointer_cast<IRoute>(catalogElement);
                return std::shared_ptr<IRoute>(nullptr);
            }
        /**
        * Conversion to type ITrajectory
        * @param catalogElement the catalog element
        * @return converted value of type ITrajectory or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<ITrajectory> AsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsTrajectory(catalogElement))
                    return std::dynamic_pointer_cast<ITrajectory>(catalogElement);
                return std::shared_ptr<ITrajectory>(nullptr);
            }
        /**
        * Conversion to type IVehicle
        * @param catalogElement the catalog element
        * @return converted value of type IVehicle or null if the catalogElement 
         * cannot be converted
        */
            static std::shared_ptr<IVehicle> AsVehicle(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsVehicle(catalogElement))
                    return std::dynamic_pointer_cast<IVehicle>(catalogElement);
                return std::shared_ptr<IVehicle>(nullptr);
            }

        /**
         * Provides the name of the catalogElement
         * @param catalogElement the catalog element
         * @return the name of the catalogElement 
         * cannot be converted
         */
            static std::string GetName(std::shared_ptr<ICatalogElement>& catalogElement)
            {
                if (IsController(catalogElement))
                    return std::dynamic_pointer_cast<IController>(catalogElement)->GetName();
                if (IsEnvironment(catalogElement))
                    return std::dynamic_pointer_cast<IEnvironment>(catalogElement)->GetName();
                if (IsManeuver(catalogElement))
                    return std::dynamic_pointer_cast<IManeuver>(catalogElement)->GetName();
                if (IsMiscObject(catalogElement))
                    return std::dynamic_pointer_cast<IMiscObject>(catalogElement)->GetName();
                if (IsPedestrian(catalogElement))
                    return std::dynamic_pointer_cast<IPedestrian>(catalogElement)->GetName();
                if (IsRoute(catalogElement))
                    return std::dynamic_pointer_cast<IRoute>(catalogElement)->GetName();
                if (IsTrajectory(catalogElement))
                    return std::dynamic_pointer_cast<ITrajectory>(catalogElement)->GetName();
                if (IsVehicle(catalogElement))
                    return std::dynamic_pointer_cast<IVehicle>(catalogElement)->GetName();
                return "";
            }
        };
    }
}
