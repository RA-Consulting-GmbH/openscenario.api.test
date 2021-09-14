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
 
#include "CatalogHelperV1_1.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * <p>
         * A helper class for the catalog elements. This class provides conversion methods for all subclasses of ICatalogElement 
         * and a method for providing the name
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
       
        /**
        * Tests for the type IController
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IController
        */
        bool CatalogHelper::IsController(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IController>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IEnvironment
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IEnvironment
        */
        bool CatalogHelper::IsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IEnvironment>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IManeuver
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IManeuver
        */
        bool CatalogHelper::IsManeuver(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IManeuver>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IMiscObject
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IMiscObject
        */
        bool CatalogHelper::IsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IMiscObject>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IPedestrian
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IPedestrian
        */
        bool CatalogHelper::IsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IPedestrian>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IRoute
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IRoute
        */
        bool CatalogHelper::IsRoute(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IRoute>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type ITrajectory
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type ITrajectory
        */
        bool CatalogHelper::IsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<ITrajectory>(catalogElement) != nullptr;
        }

        /**
        * Tests for the type IVehicle
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type IVehicle
        */
        bool CatalogHelper::IsVehicle(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<IVehicle>(catalogElement) != nullptr;
        }

        /**
        * Conversion to type IController
        * @param catalogElement the catalog element
        * @return converted value of type IController or null if the catalogElement 
        * cannot be converted
        */
        std::shared_ptr<IController> CatalogHelper::AsController(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IEnvironment> CatalogHelper::AsEnvironment(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IManeuver> CatalogHelper::AsManeuver(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IMiscObject> CatalogHelper::AsMiscObject(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IPedestrian> CatalogHelper::AsPedestrian(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IRoute> CatalogHelper::AsRoute(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<ITrajectory> CatalogHelper::AsTrajectory(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::shared_ptr<IVehicle> CatalogHelper::AsVehicle(std::shared_ptr<ICatalogElement>& catalogElement)
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
        std::string CatalogHelper::GetName(std::shared_ptr<ICatalogElement>& catalogElement)
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
 
    }
}
