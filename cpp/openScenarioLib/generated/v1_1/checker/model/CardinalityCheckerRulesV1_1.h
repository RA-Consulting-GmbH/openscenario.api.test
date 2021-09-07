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

#include <string>
#include <vector>
#include "CardinalityCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "ApiClassInterfacesV1_1.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAbsoluteSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteSpeed> object);

        public:
             AbsoluteSpeedCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAbsoluteTargetLane according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetLane> object);

        public:
             AbsoluteTargetLaneCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLane> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLane> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAbsoluteTargetLaneOffset according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneOffsetCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetLaneOffset> object);

        public:
             AbsoluteTargetLaneOffsetCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLaneOffset> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLaneOffset> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAbsoluteTargetSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetSpeedCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetSpeed> object);

        public:
             AbsoluteTargetSpeedCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetSpeed> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetSpeed> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAccelerationCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AccelerationConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAccelerationCondition> object);

        public:
             AccelerationConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAccelerationCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAccelerationCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAcquirePositionAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AcquirePositionActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAcquirePositionAction> object);

        public:
             AcquirePositionActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAcquirePositionAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAcquirePositionAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAct according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAct> object);

        public:
             ActCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAct> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAct> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAction> object);

        public:
             ActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IActors according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActorsCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IActors> object);

        public:
             ActorsCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IActors> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IActors> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAddEntityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AddEntityActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAddEntityAction> object);

        public:
             AddEntityActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAddEntityAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAddEntityAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAxle according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAxle> object);

        public:
             AxleCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxle> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxle> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IAxles according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxlesCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAxles> object);

        public:
             AxlesCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxles> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxles> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IBoundingBox according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BoundingBoxCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IBoundingBox> object);

        public:
             BoundingBoxCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IBoundingBox> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IBoundingBox> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IByEntityCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByEntityConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByEntityCondition> object);

        public:
             ByEntityConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByEntityCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByEntityCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IByObjectType according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByObjectTypeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByObjectType> object);

        public:
             ByObjectTypeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByObjectType> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByObjectType> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IByType according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByTypeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByType> object);

        public:
             ByTypeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByType> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByType> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICatalogDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogDefinitionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICatalogDefinition> object);

        public:
             CatalogDefinitionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICatalogDefinition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICatalogDefinition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICatalogReference according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogReferenceCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICatalogReference> object);

        public:
             CatalogReferenceCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICatalogReference> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICatalogReference> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICenter according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CenterCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICenter> object);

        public:
             CenterCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICenter> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICenter> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICentralSwarmObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CentralSwarmObjectCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICentralSwarmObject> object);

        public:
             CentralSwarmObjectCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICentralSwarmObject> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICentralSwarmObject> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IClothoid according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IClothoid> object);

        public:
             ClothoidCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IClothoid> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IClothoid> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICondition> object);

        public:
             ConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IConditionGroup according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionGroupCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IConditionGroup> object);

        public:
             ConditionGroupCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IConditionGroup> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IConditionGroup> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IControlPoint according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControlPoint> object);

        public:
             ControlPointCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IController according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IController> object);

        public:
             ControllerCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IController> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IController> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IControllerCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerCatalogLocation> object);

        public:
             ControllerCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IControllerDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerDistribution> object);

        public:
             ControllerDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerDistributionEntry> object);

        public:
             ControllerDistributionEntryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ICustomCommandAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CustomCommandActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICustomCommandAction> object);

        public:
             CustomCommandActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICustomCommandAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICustomCommandAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDeterministicMultiParameterDistribution according to OpenSCENARIO 
         * standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicMultiParameterDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDeterministicMultiParameterDistribution> object);

        public:
             DeterministicMultiParameterDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDeterministicMultiParameterDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDeterministicMultiParameterDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDeterministicMultiParameterDistributionType according to OpenSCENARIO 
         * standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicMultiParameterDistributionTypeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDeterministicMultiParameterDistributionType> object);

        public:
             DeterministicMultiParameterDistributionTypeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDeterministicMultiParameterDistributionType> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDeterministicMultiParameterDistributionType> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDeterministicParameterDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicParameterDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDeterministicParameterDistribution> object);

        public:
             DeterministicParameterDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDeterministicParameterDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDeterministicParameterDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDeterministicSingleParameterDistribution according to OpenSCENARIO 
         * standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicSingleParameterDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDeterministicSingleParameterDistribution> object);

        public:
             DeterministicSingleParameterDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDeterministicSingleParameterDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDeterministicSingleParameterDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDeterministicSingleParameterDistributionType according to OpenSCENARIO 
         * standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicSingleParameterDistributionTypeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDeterministicSingleParameterDistributionType> object);

        public:
             DeterministicSingleParameterDistributionTypeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDeterministicSingleParameterDistributionType> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDeterministicSingleParameterDistributionType> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDimensions according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDimensions> object);

        public:
             DimensionsCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDimensions> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDimensions> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDirectory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectoryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDirectory> object);

        public:
             DirectoryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDirectory> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDirectory> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistanceCondition> object);

        public:
             DistanceConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDistributionDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionDefinitionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistributionDefinition> object);

        public:
             DistributionDefinitionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistributionDefinition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistributionDefinition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDistributionRange according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionRangeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistributionRange> object);

        public:
             DistributionRangeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistributionRange> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistributionRange> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDistributionSet according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionSetCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistributionSet> object);

        public:
             DistributionSetCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistributionSet> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistributionSet> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IDistributionSetElement according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionSetElementCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistributionSetElement> object);

        public:
             DistributionSetElementCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistributionSetElement> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistributionSetElement> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEndOfRoadCondition> object);

        public:
             EndOfRoadConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEntityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntityAction> object);

        public:
             EntityActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEntityRef according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityRefCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntityRef> object);

        public:
             EntityRefCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityRef> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityRef> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEntitySelection according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitySelectionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntitySelection> object);

        public:
             EntitySelectionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntitySelection> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntitySelection> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEnvironment according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEnvironment> object);

        public:
             EnvironmentCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEnvironment> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEnvironment> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEnvironmentCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEnvironmentCatalogLocation> object);

        public:
             EnvironmentCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEnvironmentCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEnvironmentCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IEvent according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEvent> object);

        public:
             EventCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEvent> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEvent> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IExternalObjectReference according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ExternalObjectReferenceCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IExternalObjectReference> object);

        public:
             ExternalObjectReferenceCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IExternalObjectReference> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IExternalObjectReference> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IFile according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFile> object);

        public:
             FileCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFile> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFile> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IFileHeader according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileHeaderCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFileHeader> object);

        public:
             FileHeaderCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IFog according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFog> object);

        public:
             FogCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFog> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFog> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IFollowTrajectoryAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FollowTrajectoryActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFollowTrajectoryAction> object);

        public:
             FollowTrajectoryActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFollowTrajectoryAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFollowTrajectoryAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IGeoPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GeoPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IGeoPosition> object);

        public:
             GeoPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IGeoPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IGeoPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IHistogram according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class HistogramCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IHistogram> object);

        public:
             HistogramCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IHistogram> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IHistogram> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IHistogramBin according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class HistogramBinCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IHistogramBin> object);

        public:
             HistogramBinCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IHistogramBin> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IHistogramBin> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IInfrastructureAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InfrastructureActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IInfrastructureAction> object);

        public:
             InfrastructureActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IInfrastructureAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IInfrastructureAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IInit according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IInit> object);

        public:
             InitCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IInit> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IInit> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IKnot according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class KnotCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IKnot> object);

        public:
             KnotCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IKnot> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IKnot> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILaneChangeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneChangeAction> object);

        public:
             LaneChangeActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneChangeAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneChangeAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILaneOffsetAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneOffsetAction> object);

        public:
             LaneOffsetActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneOffsetActionDynamics> object);

        public:
             LaneOffsetActionDynamicsCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILanePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILanePosition> object);

        public:
             LanePositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILateralDistanceAction> object);

        public:
             LateralDistanceActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILicense according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LicenseCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILicense> object);

        public:
             LicenseCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILicense> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILicense> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILongitudinalDistanceAction> object);

        public:
             LongitudinalDistanceActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IManeuver according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuver> object);

        public:
             ManeuverCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuver> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuver> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IManeuverCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuverCatalogLocation> object);

        public:
             ManeuverCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IManeuverGroup according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuverGroup> object);

        public:
             ManeuverGroupCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IMiscObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IMiscObject> object);

        public:
             MiscObjectCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IMiscObjectCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IMiscObjectCatalogLocation> object);

        public:
             MiscObjectCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObjectCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObjectCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type INormalDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NormalDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<INormalDistribution> object);

        public:
             NormalDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<INormalDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<INormalDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type INurbs according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<INurbs> object);

        public:
             NurbsCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<INurbs> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<INurbs> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOffroadCondition> object);

        public:
             OffroadConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOpenScenario according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOpenScenario> object);

        public:
             OpenScenarioCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOpenScenarioCategory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOpenScenarioCategory> object);

        public:
             OpenScenarioCategoryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideBrakeAction> object);

        public:
             OverrideBrakeActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideClutchAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideClutchAction> object);

        public:
             OverrideClutchActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideGearAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideGearActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideGearAction> object);

        public:
             OverrideGearActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideGearAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideGearAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideParkingBrakeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideParkingBrakeAction> object);

        public:
             OverrideParkingBrakeActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideSteeringWheelAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideSteeringWheelActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideSteeringWheelAction> object);

        public:
             OverrideSteeringWheelActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideSteeringWheelAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideSteeringWheelAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IOverrideThrottleAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideThrottleAction> object);

        public:
             OverrideThrottleActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAction> object);

        public:
             ParameterActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterAddValueRule according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAddValueRuleCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAddValueRule> object);

        public:
             ParameterAddValueRuleCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAddValueRule> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAddValueRule> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterAssignment according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAssignmentCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAssignment> object);

        public:
             ParameterAssignmentCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAssignment> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAssignment> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterCondition> object);

        public:
             ParameterConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterDeclaration according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterDeclarationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterDeclaration> object);

        public:
             ParameterDeclarationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterDeclaration> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterDeclaration> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterModifyAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterModifyActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterModifyAction> object);

        public:
             ParameterModifyActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterModifyAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterModifyAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterMultiplyByValueRule according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterMultiplyByValueRuleCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterMultiplyByValueRule> object);

        public:
             ParameterMultiplyByValueRuleCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterMultiplyByValueRule> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterMultiplyByValueRule> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterSetAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterSetActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterSetAction> object);

        public:
             ParameterSetActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterSetAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterSetAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterValueDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterValueDistribution> object);

        public:
             ParameterValueDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterValueDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterValueDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterValueDistributionDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueDistributionDefinitionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterValueDistributionDefinition> object);

        public:
             ParameterValueDistributionDefinitionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterValueDistributionDefinition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterValueDistributionDefinition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IParameterValueSet according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueSetCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterValueSet> object);

        public:
             ParameterValueSetCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterValueSet> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterValueSet> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPedestrian according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPedestrian> object);

        public:
             PedestrianCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPedestrian> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPedestrian> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPedestrianCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPedestrianCatalogLocation> object);

        public:
             PedestrianCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPedestrianCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPedestrianCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPerformance according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPerformance> object);

        public:
             PerformanceCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPerformance> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPerformance> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPhase according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPhase> object);

        public:
             PhaseCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPhase> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPhase> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPoissonDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PoissonDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPoissonDistribution> object);

        public:
             PoissonDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPoissonDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPoissonDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPolyline according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PolylineCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPolyline> object);

        public:
             PolylineCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPolyline> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPolyline> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionInLaneCoordinates> object);

        public:
             PositionInLaneCoordinatesCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPositionInRoadCoordinates according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInRoadCoordinatesCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionInRoadCoordinates> object);

        public:
             PositionInRoadCoordinatesCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInRoadCoordinates> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInRoadCoordinates> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPositionOfCurrentEntity according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionOfCurrentEntityCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionOfCurrentEntity> object);

        public:
             PositionOfCurrentEntityCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionOfCurrentEntity> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionOfCurrentEntity> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPrecipitation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPrecipitation> object);

        public:
             PrecipitationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IPrivate according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPrivate> object);

        public:
             PrivateCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrivate> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrivate> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IProbabilityDistributionSet according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ProbabilityDistributionSetCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IProbabilityDistributionSet> object);

        public:
             ProbabilityDistributionSetCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IProbabilityDistributionSet> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IProbabilityDistributionSet> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IProbabilityDistributionSetElement according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ProbabilityDistributionSetElementCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IProbabilityDistributionSetElement> object);

        public:
             ProbabilityDistributionSetElementCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IProbabilityDistributionSetElement> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IProbabilityDistributionSetElement> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IProperty according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertyCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IProperty> object);

        public:
             PropertyCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IProperty> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IProperty> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRange according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RangeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRange> object);

        public:
             RangeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRange> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRange> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IReachPositionCondition> object);

        public:
             ReachPositionConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeDistanceCondition> object);

        public:
             RelativeDistanceConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeLanePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeLanePositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeLanePosition> object);

        public:
             RelativeLanePositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeLanePosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeLanePosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeObjectPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeObjectPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeObjectPosition> object);

        public:
             RelativeObjectPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeObjectPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeObjectPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeRoadPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeRoadPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeRoadPosition> object);

        public:
             RelativeRoadPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeRoadPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeRoadPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeSpeedCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeSpeedCondition> object);

        public:
             RelativeSpeedConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeSpeedToMaster according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedToMasterCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeSpeedToMaster> object);

        public:
             RelativeSpeedToMasterCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedToMaster> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedToMaster> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeTargetLane according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetLane> object);

        public:
             RelativeTargetLaneCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLane> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLane> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeTargetLaneOffset according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneOffsetCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetLaneOffset> object);

        public:
             RelativeTargetLaneOffsetCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLaneOffset> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLaneOffset> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeTargetSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetSpeedCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetSpeed> object);

        public:
             RelativeTargetSpeedCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetSpeed> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetSpeed> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRelativeWorldPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeWorldPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeWorldPosition> object);

        public:
             RelativeWorldPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeWorldPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeWorldPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRoadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoadCondition> object);

        public:
             RoadConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRoadPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoadPosition> object);

        public:
             RoadPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRoute according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoute> object);

        public:
             RouteCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoute> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoute> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRouteCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRouteCatalogLocation> object);

        public:
             RouteCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRouteCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRouteCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IRoutePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutePositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoutePosition> object);

        public:
             RoutePositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoutePosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoutePosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IScenarioDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioDefinitionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IScenarioDefinition> object);

        public:
             ScenarioDefinitionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IScenarioDefinition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IScenarioDefinition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IScenarioObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioObjectCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IScenarioObject> object);

        public:
             ScenarioObjectCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IScenarioObject> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IScenarioObject> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISimulationTimeCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SimulationTimeConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISimulationTimeCondition> object);

        public:
             SimulationTimeConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISimulationTimeCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISimulationTimeCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISpeedAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISpeedAction> object);

        public:
             SpeedActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISpeedAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISpeedAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISpeedCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISpeedCondition> object);

        public:
             SpeedConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISpeedCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISpeedCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStandStillCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStandStillCondition> object);

        public:
             StandStillConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISteadyState according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SteadyStateCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISteadyState> object);

        public:
             SteadyStateCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISteadyState> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISteadyState> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStochastic according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStochastic> object);

        public:
             StochasticCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStochastic> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStochastic> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStochasticDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStochasticDistribution> object);

        public:
             StochasticDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStochasticDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStochasticDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStochasticDistributionType according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticDistributionTypeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStochasticDistributionType> object);

        public:
             StochasticDistributionTypeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStochasticDistributionType> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStochasticDistributionType> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStory> object);

        public:
             StoryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStory> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStory> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStoryboard according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStoryboard> object);

        public:
             StoryboardCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStoryboard> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStoryboard> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IStoryboardElementStateCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementStateConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStoryboardElementStateCondition> object);

        public:
             StoryboardElementStateConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStoryboardElementStateCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStoryboardElementStateCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISun according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISun> object);

        public:
             SunCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISun> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISun> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ISynchronizeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SynchronizeActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISynchronizeAction> object);

        public:
             SynchronizeActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISynchronizeAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISynchronizeAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITargetDistanceSteadyState according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TargetDistanceSteadyStateCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITargetDistanceSteadyState> object);

        public:
             TargetDistanceSteadyStateCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITargetDistanceSteadyState> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITargetDistanceSteadyState> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITargetTimeSteadyState according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TargetTimeSteadyStateCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITargetTimeSteadyState> object);

        public:
             TargetTimeSteadyStateCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITargetTimeSteadyState> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITargetTimeSteadyState> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITeleportAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TeleportActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITeleportAction> object);

        public:
             TeleportActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITeleportAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITeleportAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITimeHeadwayCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeHeadwayCondition> object);

        public:
             TimeHeadwayConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITimeOfDay according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeOfDay> object);

        public:
             TimeOfDayCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeOfDay> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeOfDay> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITimeOfDayCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeOfDayCondition> object);

        public:
             TimeOfDayConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeOfDayCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeOfDayCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITimeToCollisionCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeToCollisionCondition> object);

        public:
             TimeToCollisionConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITiming according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITiming> object);

        public:
             TimingCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITiming> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITiming> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficDefinitionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficDefinition> object);

        public:
             TrafficDefinitionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficDefinition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficDefinition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalCondition> object);

        public:
             TrafficSignalConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalController> object);

        public:
             TrafficSignalControllerCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalControllerAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalControllerAction> object);

        public:
             TrafficSignalControllerActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalControllerCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalControllerCondition> object);

        public:
             TrafficSignalControllerConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalState according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalState> object);

        public:
             TrafficSignalStateCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalState> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalState> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSignalStateAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalStateAction> object);

        public:
             TrafficSignalStateActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalStateAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalStateAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSinkAction> object);

        public:
             TrafficSinkActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSourceAction> object);

        public:
             TrafficSourceActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSwarmAction> object);

        public:
             TrafficSwarmActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrajectory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectory> object);

        public:
             TrajectoryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectory> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectory> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrajectoryCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryCatalogLocation> object);

        public:
             TrajectoryCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrajectoryFollowingMode according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryFollowingModeCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryFollowingMode> object);

        public:
             TrajectoryFollowingModeCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryFollowingMode> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryFollowingMode> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrajectoryPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryPosition> object);

        public:
             TrajectoryPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryPosition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITrajectoryRef according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryRefCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryRef> object);

        public:
             TrajectoryRefCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryRef> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryRef> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITransitionDynamics> object);

        public:
             TransitionDynamicsCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITraveledDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITraveledDistanceCondition> object);

        public:
             TraveledDistanceConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type ITriggeringEntities according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggeringEntitiesCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITriggeringEntities> object);

        public:
             TriggeringEntitiesCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITriggeringEntities> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITriggeringEntities> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IUniformDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UniformDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUniformDistribution> object);

        public:
             UniformDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUniformDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUniformDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IUsedArea according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UsedAreaCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUsedArea> object);

        public:
             UsedAreaCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUsedArea> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUsedArea> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IUserDefinedAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUserDefinedAction> object);

        public:
             UserDefinedActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUserDefinedAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUserDefinedAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IUserDefinedDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUserDefinedDistribution> object);

        public:
             UserDefinedDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUserDefinedDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUserDefinedDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IUserDefinedValueCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedValueConditionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUserDefinedValueCondition> object);

        public:
             UserDefinedValueConditionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUserDefinedValueCondition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUserDefinedValueCondition> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IValueConstraint according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueConstraintCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IValueConstraint> object);

        public:
             ValueConstraintCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IValueConstraint> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IValueConstraint> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IValueConstraintGroup according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueConstraintGroupCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IValueConstraintGroup> object);

        public:
             ValueConstraintGroupCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IValueConstraintGroup> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IValueConstraintGroup> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IValueSetDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueSetDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IValueSetDistribution> object);

        public:
             ValueSetDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IValueSetDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IValueSetDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVehicle according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicle> object);

        public:
             VehicleCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicle> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicle> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVehicleCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCatalogLocation> object);

        public:
             VehicleCatalogLocationCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCatalogLocation> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCatalogLocation> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVehicleCategoryDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCategoryDistribution> object);

        public:
             VehicleCategoryDistributionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistribution> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistribution> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCategoryDistributionEntry> object);

        public:
             VehicleCategoryDistributionEntryCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVertex according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VertexCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVertex> object);

        public:
             VertexCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVertex> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVertex> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IVisibilityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VisibilityActionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVisibilityAction> object);

        public:
             VisibilityActionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVisibilityAction> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVisibilityAction> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IWaypoint according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WaypointCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWaypoint> object);

        public:
             WaypointCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWaypoint> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWaypoint> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IWind according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WindCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWind> object);

        public:
             WindCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWind> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWind> object);
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * A cardinality checker rule class for the type IWorldPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WorldPositionCardinalityCheckerRule: public CardinalityCheckerRule
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWorldPosition> object);

        public:
             WorldPositionCardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWorldPosition> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWorldPosition> object);
        };

    }
}
