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

#include "IOpenScenarioModelElement.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CatalogElement'
         * From OpenSCENARIO class model specification:
         * Instances of the types Controller, Environment, Maneuver, MiscObject, Pedestrian, Route, Trajectory and Vehicle are
         * considered as instances of type CatalogElement. Or less formal: controller, environments, maneuvers, miscellaneous
         * objects, pedestrians, routes, trajectories and vehicles are catalog elements. A catalog element is either a controller,
         * an environment, a maneuver, a miscellaneous object, a pedestrian, a route, a trajectory or a vehicle.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICatalogElementWriter: public virtual IOpenScenarioModelElement
        {
        public:
            ICatalogElementWriter() = default;
            virtual ~ICatalogElementWriter() = default;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Entity'
         * From OpenSCENARIO class model specification:
         * Instances of the types ScenarioObject, EntitySelection and SpawnedObject are considered to be instances of type Entity.
         * Or less formal: scenario objects and entity selections are both entities. An entity is either a scenario object or an
         * entity selection.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntityWriter: public virtual IOpenScenarioModelElement
        {
        public:
            IEntityWriter() = default;
            virtual ~IEntityWriter() = default;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SpawnedObject'
         * From OpenSCENARIO class model specification:
         * An instances of SpawnedObject is considered an instance of Entity. SpawnedObject represents objects that are spawned
         * dynamically during runtime by sources and swarms. It is transient which means that it is not represented in the XSD.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpawnedObjectWriter: public virtual IOpenScenarioModelElement
        {
        public:
            ISpawnedObjectWriter() = default;
            virtual ~ISpawnedObjectWriter() = default;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'StoryboardElement'
         * From OpenSCENARIO class model specification:
         * Instances of the types Story, Act, Action, Event and Maneuver are considered to be instances of type StoryboardElement.
         * Or less formal: story, acts, actions, events, maneuvers are storyboard elements. A storyboard element is either a story,
         * an act, an event, an action or a maneuver.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStoryboardElementWriter: public virtual IOpenScenarioModelElement
        {
        public:
            IStoryboardElementWriter() = default;
            virtual ~IStoryboardElementWriter() = default;
        };

    }
}
