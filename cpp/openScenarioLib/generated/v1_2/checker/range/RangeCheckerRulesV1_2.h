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

#include "IParserMessageLogger.h"
#include "ApiClassInterfacesV1_2.h"
#include "RangeCheckerRule.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IAbsoluteSpeed according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            AbsoluteSpeedRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IAnimationAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            AnimationActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IAnimationFile according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationFileRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            AnimationFileRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IAnimationState according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationStateRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            AnimationStateRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IAxle according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            AxleRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IClothoid according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ClothoidRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IColorCmyk according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorCmykRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ColorCmykRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IColorRgb according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorRgbRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ColorRgbRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ICondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IControlPoint according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ControlPointRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ControllerDistributionEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IDimensions according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            DimensionsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IDirectionOfTravelDistribution according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectionOfTravelDistributionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            DirectionOfTravelDistributionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            DistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IDomeImage according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DomeImageRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            DomeImageRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IDynamicConstraints according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicConstraintsRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            DynamicConstraintsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            EndOfRoadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IEvent according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            EventRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IFog according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            FogRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IGeoPosition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GeoPositionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            GeoPositionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LaneOffsetActionDynamicsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILanePosition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LanePositionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LateralDistanceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILightState according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightStateRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LightStateRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILightStateAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightStateActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LightStateActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            LongitudinalDistanceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IManeuverGroup according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ManeuverGroupRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IMiscObject according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            MiscObjectRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type INurbs according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            NurbsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OffroadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OverrideBrakeActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOverrideClutchAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OverrideClutchActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOverrideParkingBrakeAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OverrideParkingBrakeActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOverrideSteeringWheelAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideSteeringWheelActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OverrideSteeringWheelActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IOverrideThrottleAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            OverrideThrottleActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IPerformance according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            PerformanceRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IPhase according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            PhaseRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            PositionInLaneCoordinatesRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IPrecipitation according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            PrecipitationRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            ReachPositionConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IRelativeClearanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeClearanceConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            RelativeClearanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IRelativeDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            RelativeDistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IRoadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            RoadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IRoadPosition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadPositionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            RoadPositionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ISpeedProfileEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedProfileEntryRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            SpeedProfileEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IStandStillCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            StandStillConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ISun according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            SunRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITimeHeadwayCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TimeHeadwayConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITimeToCollisionCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TimeToCollisionConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITiming according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TimingRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TrafficSignalControllerRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TrafficSinkActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TrafficSourceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TrafficSwarmActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TransitionDynamicsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type ITraveledDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            TraveledDistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            VehicleCategoryDistributionEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IVehicleRoleDistributionEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleRoleDistributionEntryRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            VehicleRoleDistributionEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IWeather according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WeatherRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            WeatherRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * A range checker rule class for the type IWind according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WindRangeCheckerRule: public RangeCheckerRule
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const;
        public:
            WindRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };

    }
}
