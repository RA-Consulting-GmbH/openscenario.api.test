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

#include <string>
#include <vector>
#include "UnionCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "ApiClassInterfacesV1_0.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            ActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAssignControllerAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignControllerActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAssignControllerAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            AssignControllerActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAssignRouteAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignRouteActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAssignRouteAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            AssignRouteActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IByValueCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByValueConditionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IByValueCondition> object);

            std::vector<std::string> GetAllChildren();

        public:
            ByValueConditionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ICollisionCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CollisionConditionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ICollisionCondition> object);

            std::vector<std::string> GetAllChildren();

        public:
            CollisionConditionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ICondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ICondition> object);

            std::vector<std::string> GetAllChildren();

        public:
            ConditionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IControllerDistributionEntry> object);

            std::vector<std::string> GetAllChildren();

        public:
            ControllerDistributionEntryUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            EntityActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityConditionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityCondition> object);

            std::vector<std::string> GetAllChildren();

        public:
            EntityConditionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityObject according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityObjectUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityObject> object);

            std::vector<std::string> GetAllChildren();

        public:
            EntityObjectUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEnvironmentAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEnvironmentAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            EnvironmentActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IFinalSpeed according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FinalSpeedUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IFinalSpeed> object);

            std::vector<std::string> GetAllChildren();

        public:
            FinalSpeedUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IGlobalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GlobalActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IGlobalAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            GlobalActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IInRoutePosition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InRoutePositionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IInRoutePosition> object);

            std::vector<std::string> GetAllChildren();

        public:
            InRoutePositionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILaneChangeTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeTargetUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILaneChangeTarget> object);

            std::vector<std::string> GetAllChildren();

        public:
            LaneChangeTargetUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILaneOffsetTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetTargetUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILaneOffsetTarget> object);

            std::vector<std::string> GetAllChildren();

        public:
            LaneOffsetTargetUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILateralAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILateralAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            LateralActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILongitudinalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILongitudinalAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            LongitudinalActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IModifyRule according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ModifyRuleUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IModifyRule> object);

            std::vector<std::string> GetAllChildren();

        public:
            ModifyRuleUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IObjectController according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ObjectControllerUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IObjectController> object);

            std::vector<std::string> GetAllChildren();

        public:
            ObjectControllerUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IOpenScenarioCategory according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IOpenScenarioCategory> object);

            std::vector<std::string> GetAllChildren();

        public:
            OpenScenarioCategoryUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IParameterAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IParameterAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            ParameterActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IPosition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IPosition> object);

            std::vector<std::string> GetAllChildren();

        public:
            PositionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IPrivateAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IPrivateAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            PrivateActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IRouteRef according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteRefUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IRouteRef> object);

            std::vector<std::string> GetAllChildren();

        public:
            RouteRefUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IRoutingAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutingActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IRoutingAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            RoutingActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ISelectedEntities according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SelectedEntitiesUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ISelectedEntities> object);

            std::vector<std::string> GetAllChildren();

        public:
            SelectedEntitiesUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IShape according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ShapeUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IShape> object);

            std::vector<std::string> GetAllChildren();

        public:
            ShapeUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ISpeedActionTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionTargetUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ISpeedActionTarget> object);

            std::vector<std::string> GetAllChildren();

        public:
            SpeedActionTargetUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITimeReference according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeReferenceUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITimeReference> object);

            std::vector<std::string> GetAllChildren();

        public:
            TimeReferenceUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITimeToCollisionConditionTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionTargetUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITimeToCollisionConditionTarget> object);

            std::vector<std::string> GetAllChildren();

        public:
            TimeToCollisionConditionTargetUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITrafficAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITrafficAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            TrafficActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITrafficSignalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalActionUnionCheckerRule: public UnionCheckerRule
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITrafficSignalAction> object);

            std::vector<std::string> GetAllChildren();

        public:
            TrafficSignalActionUnionCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object);

    	};
	}
}

