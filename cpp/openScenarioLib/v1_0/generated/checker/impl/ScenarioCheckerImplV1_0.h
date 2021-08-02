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

#include <map>
#include <vector>
#include "IParserMessageLogger.h"
#include "ICheckerRule.h"
#include "IScenarioCheckerV1_0.h"
#include "ApiClassInterfacesV1_0.h"
#include "MemLeakDetection.h"
#include <memory>
#include "ExportDefinitions.h"
#include "IContentMessageLogger.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioCheckerImpl: public IScenarioChecker
        {
        private:
            enum ContextMode { MODE_TREE, MODE_FILE };

            //string is typeid(class).name()
            std::map<std::string, std::vector<std::shared_ptr<CheckerRule>>> _typeToCheckerRuleList;
            template <class T>
            void ApplyAbsoluteSpeedCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAbsoluteSpeed> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteSpeed>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAbsoluteTargetLaneCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAbsoluteTargetLane> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetLane>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAbsoluteTargetLaneOffsetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAbsoluteTargetLaneOffset> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetLaneOffset>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAbsoluteTargetSpeedCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAbsoluteTargetSpeed> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetSpeed>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAccelerationConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAccelerationCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAccelerationCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAccelerationCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAcquirePositionActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAcquirePositionAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAcquirePositionAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyActCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAct> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAct).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAct>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kManeuverGroups = object->GetManeuverGroups();
                for(auto& kListItem: kManeuverGroups)
                {
                    if ( kListItem )
                        ApplyManeuverGroupCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kStartTrigger = object->GetStartTrigger();
                if ( kStartTrigger)
                {
                    ApplyTriggerCheckerRules(messageLogger, kStartTrigger, contextMode);
                }
                const auto kStopTrigger = object->GetStopTrigger();
                if ( kStopTrigger)
                {
                    ApplyTriggerCheckerRules(messageLogger, kStopTrigger, contextMode);
                }
            }
            template <class T>
            void ApplyActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kGlobalAction = object->GetGlobalAction();
                if ( kGlobalAction)
                {
                    ApplyGlobalActionCheckerRules(messageLogger, kGlobalAction, contextMode);
                }
                const auto kUserDefinedAction = object->GetUserDefinedAction();
                if ( kUserDefinedAction)
                {
                    ApplyUserDefinedActionCheckerRules(messageLogger, kUserDefinedAction, contextMode);
                }
                const auto kPrivateAction = object->GetPrivateAction();
                if ( kPrivateAction)
                {
                    ApplyPrivateActionCheckerRules(messageLogger, kPrivateAction, contextMode);
                }
            }
            template <class T>
            void ApplyActivateControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IActivateControllerAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActivateControllerAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IActivateControllerAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyActorsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IActors> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActors).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IActors>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEntityRefs = object->GetEntityRefs();
                for(auto& kListItem: kEntityRefs)
                {
                    if ( kListItem )
                        ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyAddEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAddEntityAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAddEntityAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAddEntityAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyAssignControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAssignControllerAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignControllerAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAssignControllerAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kController = object->GetController();
                if ( kController)
                {
                    ApplyControllerCheckerRules(messageLogger, kController, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
            }
            template <class T>
            void ApplyAssignRouteActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAssignRouteAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignRouteAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAssignRouteAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRoute = object->GetRoute();
                if ( kRoute)
                {
                    ApplyRouteCheckerRules(messageLogger, kRoute, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
            }
            template <class T>
            void ApplyAxleCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAxle> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxle).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAxle>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyAxlesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IAxles> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxles).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAxles>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kFrontAxle = object->GetFrontAxle();
                if ( kFrontAxle)
                {
                    ApplyAxleCheckerRules(messageLogger, kFrontAxle, contextMode);
                }
                const auto kRearAxle = object->GetRearAxle();
                if ( kRearAxle)
                {
                    ApplyAxleCheckerRules(messageLogger, kRearAxle, contextMode);
                }
                const auto kAdditionalAxles = object->GetAdditionalAxles();
                for(auto& kListItem: kAdditionalAxles)
                {
                    if ( kListItem )
                        ApplyAxleCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyBoundingBoxCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IBoundingBox> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBoundingBox).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IBoundingBox>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCenter = object->GetCenter();
                if ( kCenter)
                {
                    ApplyCenterCheckerRules(messageLogger, kCenter, contextMode);
                }
                const auto kDimensions = object->GetDimensions();
                if ( kDimensions)
                {
                    ApplyDimensionsCheckerRules(messageLogger, kDimensions, contextMode);
                }
            }
            template <class T>
            void ApplyByEntityConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IByEntityCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByEntityCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByEntityCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTriggeringEntities = object->GetTriggeringEntities();
                if ( kTriggeringEntities)
                {
                    ApplyTriggeringEntitiesCheckerRules(messageLogger, kTriggeringEntities, contextMode);
                }
                const auto kEntityCondition = object->GetEntityCondition();
                if ( kEntityCondition)
                {
                    ApplyEntityConditionCheckerRules(messageLogger, kEntityCondition, contextMode);
                }
            }
            template <class T>
            void ApplyByObjectTypeCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IByObjectType> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByObjectType).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByObjectType>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyByTypeCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IByType> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByType).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByType>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyByValueConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IByValueCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByValueCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByValueCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterCondition = object->GetParameterCondition();
                if ( kParameterCondition)
                {
                    ApplyParameterConditionCheckerRules(messageLogger, kParameterCondition, contextMode);
                }
                const auto kTimeOfDayCondition = object->GetTimeOfDayCondition();
                if ( kTimeOfDayCondition)
                {
                    ApplyTimeOfDayConditionCheckerRules(messageLogger, kTimeOfDayCondition, contextMode);
                }
                const auto kSimulationTimeCondition = object->GetSimulationTimeCondition();
                if ( kSimulationTimeCondition)
                {
                    ApplySimulationTimeConditionCheckerRules(messageLogger, kSimulationTimeCondition, contextMode);
                }
                const auto kStoryboardElementStateCondition = object->GetStoryboardElementStateCondition();
                if ( kStoryboardElementStateCondition)
                {
                    ApplyStoryboardElementStateConditionCheckerRules(messageLogger, kStoryboardElementStateCondition, contextMode);
                }
                const auto kUserDefinedValueCondition = object->GetUserDefinedValueCondition();
                if ( kUserDefinedValueCondition)
                {
                    ApplyUserDefinedValueConditionCheckerRules(messageLogger, kUserDefinedValueCondition, contextMode);
                }
                const auto kTrafficSignalCondition = object->GetTrafficSignalCondition();
                if ( kTrafficSignalCondition)
                {
                    ApplyTrafficSignalConditionCheckerRules(messageLogger, kTrafficSignalCondition, contextMode);
                }
                const auto kTrafficSignalControllerCondition = object->GetTrafficSignalControllerCondition();
                if ( kTrafficSignalControllerCondition)
                {
                    ApplyTrafficSignalControllerConditionCheckerRules(messageLogger, kTrafficSignalControllerCondition, contextMode);
                }
            }
            template <class T>
            void ApplyCatalogCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICatalog> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalog).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalog>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kVehicles = object->GetVehicles();
                for(auto& kListItem: kVehicles)
                {
                    if ( kListItem )
                        ApplyVehicleCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kControllers = object->GetControllers();
                for(auto& kListItem: kControllers)
                {
                    if ( kListItem )
                        ApplyControllerCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kPedestrians = object->GetPedestrians();
                for(auto& kListItem: kPedestrians)
                {
                    if ( kListItem )
                        ApplyPedestrianCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kMiscObjects = object->GetMiscObjects();
                for(auto& kListItem: kMiscObjects)
                {
                    if ( kListItem )
                        ApplyMiscObjectCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kEnvironments = object->GetEnvironments();
                for(auto& kListItem: kEnvironments)
                {
                    if ( kListItem )
                        ApplyEnvironmentCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kManeuvers = object->GetManeuvers();
                for(auto& kListItem: kManeuvers)
                {
                    if ( kListItem )
                        ApplyManeuverCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kTrajectories = object->GetTrajectories();
                for(auto& kListItem: kTrajectories)
                {
                    if ( kListItem )
                        ApplyTrajectoryCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kRoutes = object->GetRoutes();
                for(auto& kListItem: kRoutes)
                {
                    if ( kListItem )
                        ApplyRouteCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyCatalogDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICatalogDefinition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogDefinition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogDefinition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCatalog = object->GetCatalog();
                if ( kCatalog)
                {
                    ApplyCatalogCheckerRules(messageLogger, kCatalog, contextMode);
                }
            }
            template <class T>
            void ApplyCatalogLocationsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICatalogLocations> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogLocations).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogLocations>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kVehicleCatalog = object->GetVehicleCatalog();
                if ( kVehicleCatalog)
                {
                    ApplyVehicleCatalogLocationCheckerRules(messageLogger, kVehicleCatalog, contextMode);
                }
                const auto kControllerCatalog = object->GetControllerCatalog();
                if ( kControllerCatalog)
                {
                    ApplyControllerCatalogLocationCheckerRules(messageLogger, kControllerCatalog, contextMode);
                }
                const auto kPedestrianCatalog = object->GetPedestrianCatalog();
                if ( kPedestrianCatalog)
                {
                    ApplyPedestrianCatalogLocationCheckerRules(messageLogger, kPedestrianCatalog, contextMode);
                }
                const auto kMiscObjectCatalog = object->GetMiscObjectCatalog();
                if ( kMiscObjectCatalog)
                {
                    ApplyMiscObjectCatalogLocationCheckerRules(messageLogger, kMiscObjectCatalog, contextMode);
                }
                const auto kEnvironmentCatalog = object->GetEnvironmentCatalog();
                if ( kEnvironmentCatalog)
                {
                    ApplyEnvironmentCatalogLocationCheckerRules(messageLogger, kEnvironmentCatalog, contextMode);
                }
                const auto kManeuverCatalog = object->GetManeuverCatalog();
                if ( kManeuverCatalog)
                {
                    ApplyManeuverCatalogLocationCheckerRules(messageLogger, kManeuverCatalog, contextMode);
                }
                const auto kTrajectoryCatalog = object->GetTrajectoryCatalog();
                if ( kTrajectoryCatalog)
                {
                    ApplyTrajectoryCatalogLocationCheckerRules(messageLogger, kTrajectoryCatalog, contextMode);
                }
                const auto kRouteCatalog = object->GetRouteCatalog();
                if ( kRouteCatalog)
                {
                    ApplyRouteCatalogLocationCheckerRules(messageLogger, kRouteCatalog, contextMode);
                }
            }
            template <class T>
            void ApplyCatalogReferenceCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICatalogReference> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogReference).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogReference>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterAssignments = object->GetParameterAssignments();
                for(auto& kListItem: kParameterAssignments)
                {
                    if ( kListItem )
                        ApplyParameterAssignmentCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyCenterCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICenter> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICenter).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICenter>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyCentralSwarmObjectCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICentralSwarmObject> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICentralSwarmObject>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyClothoidCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IClothoid> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoid).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IClothoid>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyCollisionConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICollisionCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICollisionCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICollisionCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEntityRef = object->GetEntityRef();
                if ( kEntityRef)
                {
                    ApplyEntityRefCheckerRules(messageLogger, kEntityRef, contextMode);
                }
                const auto kByType = object->GetByType();
                if ( kByType)
                {
                    ApplyByObjectTypeCheckerRules(messageLogger, kByType, contextMode);
                }
            }
            template <class T>
            void ApplyConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kByEntityCondition = object->GetByEntityCondition();
                if ( kByEntityCondition)
                {
                    ApplyByEntityConditionCheckerRules(messageLogger, kByEntityCondition, contextMode);
                }
                const auto kByValueCondition = object->GetByValueCondition();
                if ( kByValueCondition)
                {
                    ApplyByValueConditionCheckerRules(messageLogger, kByValueCondition, contextMode);
                }
            }
            template <class T>
            void ApplyConditionGroupCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IConditionGroup> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConditionGroup).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IConditionGroup>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kConditions = object->GetConditions();
                for(auto& kListItem: kConditions)
                {
                    if ( kListItem )
                        ApplyConditionCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyControlPointCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IControlPoint> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControlPoint).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControlPoint>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyControllerCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IController> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IController).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IController>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kProperties = object->GetProperties();
                if ( kProperties)
                {
                    ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
                }
            }
            template <class T>
            void ApplyControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IControllerAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kAssignControllerAction = object->GetAssignControllerAction();
                if ( kAssignControllerAction)
                {
                    ApplyAssignControllerActionCheckerRules(messageLogger, kAssignControllerAction, contextMode);
                }
                const auto kOverrideControllerValueAction = object->GetOverrideControllerValueAction();
                if ( kOverrideControllerValueAction)
                {
                    ApplyOverrideControllerValueActionCheckerRules(messageLogger, kOverrideControllerValueAction, contextMode);
                }
            }
            template <class T>
            void ApplyControllerCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IControllerCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyControllerDistributionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IControllerDistribution> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistribution).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerDistribution>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kControllerDistributionEntries = object->GetControllerDistributionEntries();
                for(auto& kListItem: kControllerDistributionEntries)
                {
                    if ( kListItem )
                        ApplyControllerDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyControllerDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IControllerDistributionEntry> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerDistributionEntry>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kController = object->GetController();
                if ( kController)
                {
                    ApplyControllerCheckerRules(messageLogger, kController, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
            }
            template <class T>
            void ApplyCustomCommandActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ICustomCommandAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomCommandAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICustomCommandAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyDeleteEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IDeleteEntityAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDeleteEntityAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyDimensionsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IDimensions> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDimensions).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDimensions>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyDirectoryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IDirectory> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectory).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDirectory>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IDistanceCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistanceCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDistanceCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyDynamicConstraintsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IDynamicConstraints> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDynamicConstraints).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDynamicConstraints>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyEndOfRoadConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEndOfRoadCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEndOfRoadCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntities> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntities).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntities>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kScenarioObjects = object->GetScenarioObjects();
                for(auto& kListItem: kScenarioObjects)
                {
                    if ( kListItem )
                        ApplyScenarioObjectCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kEntitySelections = object->GetEntitySelections();
                for(auto& kListItem: kEntitySelections)
                {
                    if ( kListItem )
                        ApplyEntitySelectionCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntityAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kAddEntityAction = object->GetAddEntityAction();
                if ( kAddEntityAction)
                {
                    ApplyAddEntityActionCheckerRules(messageLogger, kAddEntityAction, contextMode);
                }
                const auto kDeleteEntityAction = object->GetDeleteEntityAction();
                if ( kDeleteEntityAction)
                {
                    ApplyDeleteEntityActionCheckerRules(messageLogger, kDeleteEntityAction, contextMode);
                }
            }
            template <class T>
            void ApplyEntityConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntityCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEndOfRoadCondition = object->GetEndOfRoadCondition();
                if ( kEndOfRoadCondition)
                {
                    ApplyEndOfRoadConditionCheckerRules(messageLogger, kEndOfRoadCondition, contextMode);
                }
                const auto kCollisionCondition = object->GetCollisionCondition();
                if ( kCollisionCondition)
                {
                    ApplyCollisionConditionCheckerRules(messageLogger, kCollisionCondition, contextMode);
                }
                const auto kOffroadCondition = object->GetOffroadCondition();
                if ( kOffroadCondition)
                {
                    ApplyOffroadConditionCheckerRules(messageLogger, kOffroadCondition, contextMode);
                }
                const auto kTimeHeadwayCondition = object->GetTimeHeadwayCondition();
                if ( kTimeHeadwayCondition)
                {
                    ApplyTimeHeadwayConditionCheckerRules(messageLogger, kTimeHeadwayCondition, contextMode);
                }
                const auto kTimeToCollisionCondition = object->GetTimeToCollisionCondition();
                if ( kTimeToCollisionCondition)
                {
                    ApplyTimeToCollisionConditionCheckerRules(messageLogger, kTimeToCollisionCondition, contextMode);
                }
                const auto kAccelerationCondition = object->GetAccelerationCondition();
                if ( kAccelerationCondition)
                {
                    ApplyAccelerationConditionCheckerRules(messageLogger, kAccelerationCondition, contextMode);
                }
                const auto kStandStillCondition = object->GetStandStillCondition();
                if ( kStandStillCondition)
                {
                    ApplyStandStillConditionCheckerRules(messageLogger, kStandStillCondition, contextMode);
                }
                const auto kSpeedCondition = object->GetSpeedCondition();
                if ( kSpeedCondition)
                {
                    ApplySpeedConditionCheckerRules(messageLogger, kSpeedCondition, contextMode);
                }
                const auto kRelativeSpeedCondition = object->GetRelativeSpeedCondition();
                if ( kRelativeSpeedCondition)
                {
                    ApplyRelativeSpeedConditionCheckerRules(messageLogger, kRelativeSpeedCondition, contextMode);
                }
                const auto kTraveledDistanceCondition = object->GetTraveledDistanceCondition();
                if ( kTraveledDistanceCondition)
                {
                    ApplyTraveledDistanceConditionCheckerRules(messageLogger, kTraveledDistanceCondition, contextMode);
                }
                const auto kReachPositionCondition = object->GetReachPositionCondition();
                if ( kReachPositionCondition)
                {
                    ApplyReachPositionConditionCheckerRules(messageLogger, kReachPositionCondition, contextMode);
                }
                const auto kDistanceCondition = object->GetDistanceCondition();
                if ( kDistanceCondition)
                {
                    ApplyDistanceConditionCheckerRules(messageLogger, kDistanceCondition, contextMode);
                }
                const auto kRelativeDistanceCondition = object->GetRelativeDistanceCondition();
                if ( kRelativeDistanceCondition)
                {
                    ApplyRelativeDistanceConditionCheckerRules(messageLogger, kRelativeDistanceCondition, contextMode);
                }
            }
            template <class T>
            void ApplyEntityObjectCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntityObject> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityObject).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityObject>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
                const auto kVehicle = object->GetVehicle();
                if ( kVehicle)
                {
                    ApplyVehicleCheckerRules(messageLogger, kVehicle, contextMode);
                }
                const auto kPedestrian = object->GetPedestrian();
                if ( kPedestrian)
                {
                    ApplyPedestrianCheckerRules(messageLogger, kPedestrian, contextMode);
                }
                const auto kMiscObject = object->GetMiscObject();
                if ( kMiscObject)
                {
                    ApplyMiscObjectCheckerRules(messageLogger, kMiscObject, contextMode);
                }
            }
            template <class T>
            void ApplyEntityRefCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntityRef> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityRef).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityRef>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyEntitySelectionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEntitySelection> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntitySelection).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntitySelection>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kMembers = object->GetMembers();
                if ( kMembers)
                {
                    ApplySelectedEntitiesCheckerRules(messageLogger, kMembers, contextMode);
                }
            }
            template <class T>
            void ApplyEnvironmentCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEnvironment> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironment).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironment>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kTimeOfDay = object->GetTimeOfDay();
                if ( kTimeOfDay)
                {
                    ApplyTimeOfDayCheckerRules(messageLogger, kTimeOfDay, contextMode);
                }
                const auto kWeather = object->GetWeather();
                if ( kWeather)
                {
                    ApplyWeatherCheckerRules(messageLogger, kWeather, contextMode);
                }
                const auto kRoadCondition = object->GetRoadCondition();
                if ( kRoadCondition)
                {
                    ApplyRoadConditionCheckerRules(messageLogger, kRoadCondition, contextMode);
                }
            }
            template <class T>
            void ApplyEnvironmentActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEnvironmentAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironmentAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEnvironment = object->GetEnvironment();
                if ( kEnvironment)
                {
                    ApplyEnvironmentCheckerRules(messageLogger, kEnvironment, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
            }
            template <class T>
            void ApplyEnvironmentCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEnvironmentCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironmentCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyEventCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IEvent> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEvent).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEvent>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kActions = object->GetActions();
                for(auto& kListItem: kActions)
                {
                    if ( kListItem )
                        ApplyActionCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kStartTrigger = object->GetStartTrigger();
                if ( kStartTrigger)
                {
                    ApplyTriggerCheckerRules(messageLogger, kStartTrigger, contextMode);
                }
            }
            template <class T>
            void ApplyFileCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IFile> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFile).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFile>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyFileHeaderCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IFileHeader> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFileHeader).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFileHeader>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyFinalSpeedCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IFinalSpeed> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFinalSpeed).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFinalSpeed>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kAbsoluteSpeed = object->GetAbsoluteSpeed();
                if ( kAbsoluteSpeed)
                {
                    ApplyAbsoluteSpeedCheckerRules(messageLogger, kAbsoluteSpeed, contextMode);
                }
                const auto kRelativeSpeedToMaster = object->GetRelativeSpeedToMaster();
                if ( kRelativeSpeedToMaster)
                {
                    ApplyRelativeSpeedToMasterCheckerRules(messageLogger, kRelativeSpeedToMaster, contextMode);
                }
            }
            template <class T>
            void ApplyFogCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IFog> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFog).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFog>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kBoundingBox = object->GetBoundingBox();
                if ( kBoundingBox)
                {
                    ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
                }
            }
            template <class T>
            void ApplyFollowTrajectoryActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IFollowTrajectoryAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFollowTrajectoryAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTrajectory = object->GetTrajectory();
                if ( kTrajectory)
                {
                    ApplyTrajectoryCheckerRules(messageLogger, kTrajectory, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
                const auto kTimeReference = object->GetTimeReference();
                if ( kTimeReference)
                {
                    ApplyTimeReferenceCheckerRules(messageLogger, kTimeReference, contextMode);
                }
                const auto kTrajectoryFollowingMode = object->GetTrajectoryFollowingMode();
                if ( kTrajectoryFollowingMode)
                {
                    ApplyTrajectoryFollowingModeCheckerRules(messageLogger, kTrajectoryFollowingMode, contextMode);
                }
            }
            template <class T>
            void ApplyGlobalActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IGlobalAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGlobalAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IGlobalAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEnvironmentAction = object->GetEnvironmentAction();
                if ( kEnvironmentAction)
                {
                    ApplyEnvironmentActionCheckerRules(messageLogger, kEnvironmentAction, contextMode);
                }
                const auto kEntityAction = object->GetEntityAction();
                if ( kEntityAction)
                {
                    ApplyEntityActionCheckerRules(messageLogger, kEntityAction, contextMode);
                }
                const auto kParameterAction = object->GetParameterAction();
                if ( kParameterAction)
                {
                    ApplyParameterActionCheckerRules(messageLogger, kParameterAction, contextMode);
                }
                const auto kInfrastructureAction = object->GetInfrastructureAction();
                if ( kInfrastructureAction)
                {
                    ApplyInfrastructureActionCheckerRules(messageLogger, kInfrastructureAction, contextMode);
                }
                const auto kTrafficAction = object->GetTrafficAction();
                if ( kTrafficAction)
                {
                    ApplyTrafficActionCheckerRules(messageLogger, kTrafficAction, contextMode);
                }
            }
            template <class T>
            void ApplyInRoutePositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IInRoutePosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInRoutePosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInRoutePosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kFromCurrentEntity = object->GetFromCurrentEntity();
                if ( kFromCurrentEntity)
                {
                    ApplyPositionOfCurrentEntityCheckerRules(messageLogger, kFromCurrentEntity, contextMode);
                }
                const auto kFromRoadCoordinates = object->GetFromRoadCoordinates();
                if ( kFromRoadCoordinates)
                {
                    ApplyPositionInRoadCoordinatesCheckerRules(messageLogger, kFromRoadCoordinates, contextMode);
                }
                const auto kFromLaneCoordinates = object->GetFromLaneCoordinates();
                if ( kFromLaneCoordinates)
                {
                    ApplyPositionInLaneCoordinatesCheckerRules(messageLogger, kFromLaneCoordinates, contextMode);
                }
            }
            template <class T>
            void ApplyInfrastructureActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IInfrastructureAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInfrastructureAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInfrastructureAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTrafficSignalAction = object->GetTrafficSignalAction();
                if ( kTrafficSignalAction)
                {
                    ApplyTrafficSignalActionCheckerRules(messageLogger, kTrafficSignalAction, contextMode);
                }
            }
            template <class T>
            void ApplyInitCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IInit> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInit).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInit>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kActions = object->GetActions();
                if ( kActions)
                {
                    ApplyInitActionsCheckerRules(messageLogger, kActions, contextMode);
                }
            }
            template <class T>
            void ApplyInitActionsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IInitActions> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInitActions).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInitActions>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kGlobalActions = object->GetGlobalActions();
                for(auto& kListItem: kGlobalActions)
                {
                    if ( kListItem )
                        ApplyGlobalActionCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kUserDefinedActions = object->GetUserDefinedActions();
                for(auto& kListItem: kUserDefinedActions)
                {
                    if ( kListItem )
                        ApplyUserDefinedActionCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kPrivates = object->GetPrivates();
                for(auto& kListItem: kPrivates)
                {
                    if ( kListItem )
                        ApplyPrivateCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyKnotCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IKnot> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IKnot).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IKnot>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyLaneChangeActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILaneChangeAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneChangeAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kLaneChangeActionDynamics = object->GetLaneChangeActionDynamics();
                if ( kLaneChangeActionDynamics)
                {
                    ApplyTransitionDynamicsCheckerRules(messageLogger, kLaneChangeActionDynamics, contextMode);
                }
                const auto kLaneChangeTarget = object->GetLaneChangeTarget();
                if ( kLaneChangeTarget)
                {
                    ApplyLaneChangeTargetCheckerRules(messageLogger, kLaneChangeTarget, contextMode);
                }
            }
            template <class T>
            void ApplyLaneChangeTargetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILaneChangeTarget> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneChangeTarget>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRelativeTargetLane = object->GetRelativeTargetLane();
                if ( kRelativeTargetLane)
                {
                    ApplyRelativeTargetLaneCheckerRules(messageLogger, kRelativeTargetLane, contextMode);
                }
                const auto kAbsoluteTargetLane = object->GetAbsoluteTargetLane();
                if ( kAbsoluteTargetLane)
                {
                    ApplyAbsoluteTargetLaneCheckerRules(messageLogger, kAbsoluteTargetLane, contextMode);
                }
            }
            template <class T>
            void ApplyLaneOffsetActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILaneOffsetAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kLaneOffsetActionDynamics = object->GetLaneOffsetActionDynamics();
                if ( kLaneOffsetActionDynamics)
                {
                    ApplyLaneOffsetActionDynamicsCheckerRules(messageLogger, kLaneOffsetActionDynamics, contextMode);
                }
                const auto kLaneOffsetTarget = object->GetLaneOffsetTarget();
                if ( kLaneOffsetTarget)
                {
                    ApplyLaneOffsetTargetCheckerRules(messageLogger, kLaneOffsetTarget, contextMode);
                }
            }
            template <class T>
            void ApplyLaneOffsetActionDynamicsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILaneOffsetActionDynamics> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetActionDynamics>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyLaneOffsetTargetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILaneOffsetTarget> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetTarget>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRelativeTargetLaneOffset = object->GetRelativeTargetLaneOffset();
                if ( kRelativeTargetLaneOffset)
                {
                    ApplyRelativeTargetLaneOffsetCheckerRules(messageLogger, kRelativeTargetLaneOffset, contextMode);
                }
                const auto kAbsoluteTargetLaneOffset = object->GetAbsoluteTargetLaneOffset();
                if ( kAbsoluteTargetLaneOffset)
                {
                    ApplyAbsoluteTargetLaneOffsetCheckerRules(messageLogger, kAbsoluteTargetLaneOffset, contextMode);
                }
            }
            template <class T>
            void ApplyLanePositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILanePosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILanePosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILanePosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyLateralActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILateralAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILateralAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kLaneChangeAction = object->GetLaneChangeAction();
                if ( kLaneChangeAction)
                {
                    ApplyLaneChangeActionCheckerRules(messageLogger, kLaneChangeAction, contextMode);
                }
                const auto kLaneOffsetAction = object->GetLaneOffsetAction();
                if ( kLaneOffsetAction)
                {
                    ApplyLaneOffsetActionCheckerRules(messageLogger, kLaneOffsetAction, contextMode);
                }
                const auto kLateralDistanceAction = object->GetLateralDistanceAction();
                if ( kLateralDistanceAction)
                {
                    ApplyLateralDistanceActionCheckerRules(messageLogger, kLateralDistanceAction, contextMode);
                }
            }
            template <class T>
            void ApplyLateralDistanceActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILateralDistanceAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILateralDistanceAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDynamicConstraints = object->GetDynamicConstraints();
                if ( kDynamicConstraints)
                {
                    ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints, contextMode);
                }
            }
            template <class T>
            void ApplyLongitudinalActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILongitudinalAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILongitudinalAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kSpeedAction = object->GetSpeedAction();
                if ( kSpeedAction)
                {
                    ApplySpeedActionCheckerRules(messageLogger, kSpeedAction, contextMode);
                }
                const auto kLongitudinalDistanceAction = object->GetLongitudinalDistanceAction();
                if ( kLongitudinalDistanceAction)
                {
                    ApplyLongitudinalDistanceActionCheckerRules(messageLogger, kLongitudinalDistanceAction, contextMode);
                }
            }
            template <class T>
            void ApplyLongitudinalDistanceActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ILongitudinalDistanceAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILongitudinalDistanceAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDynamicConstraints = object->GetDynamicConstraints();
                if ( kDynamicConstraints)
                {
                    ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints, contextMode);
                }
            }
            template <class T>
            void ApplyManeuverCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IManeuver> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuver).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuver>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kEvents = object->GetEvents();
                for(auto& kListItem: kEvents)
                {
                    if ( kListItem )
                        ApplyEventCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyManeuverCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IManeuverCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuverCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyManeuverGroupCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IManeuverGroup> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverGroup).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuverGroup>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kActors = object->GetActors();
                if ( kActors)
                {
                    ApplyActorsCheckerRules(messageLogger, kActors, contextMode);
                }
                const auto kCatalogReferences = object->GetCatalogReferences();
                for(auto& kListItem: kCatalogReferences)
                {
                    if ( kListItem )
                        ApplyCatalogReferenceCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kManeuvers = object->GetManeuvers();
                for(auto& kListItem: kManeuvers)
                {
                    if ( kListItem )
                        ApplyManeuverCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyMiscObjectCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IMiscObject> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObject).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IMiscObject>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kBoundingBox = object->GetBoundingBox();
                if ( kBoundingBox)
                {
                    ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
                }
                const auto kProperties = object->GetProperties();
                if ( kProperties)
                {
                    ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
                }
            }
            template <class T>
            void ApplyMiscObjectCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IMiscObjectCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IMiscObjectCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyModifyRuleCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IModifyRule> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IModifyRule).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IModifyRule>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kAddValue = object->GetAddValue();
                if ( kAddValue)
                {
                    ApplyParameterAddValueRuleCheckerRules(messageLogger, kAddValue, contextMode);
                }
                const auto kMultiplyByValue = object->GetMultiplyByValue();
                if ( kMultiplyByValue)
                {
                    ApplyParameterMultiplyByValueRuleCheckerRules(messageLogger, kMultiplyByValue, contextMode);
                }
            }
            template <class T>
            void ApplyNoneCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<INone> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(INone).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<INone>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyNurbsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<INurbs> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(INurbs).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<INurbs>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kControlPoints = object->GetControlPoints();
                for(auto& kListItem: kControlPoints)
                {
                    if ( kListItem )
                        ApplyControlPointCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kKnots = object->GetKnots();
                for(auto& kListItem: kKnots)
                {
                    if ( kListItem )
                        ApplyKnotCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyObjectControllerCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IObjectController> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IObjectController).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IObjectController>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
                const auto kController = object->GetController();
                if ( kController)
                {
                    ApplyControllerCheckerRules(messageLogger, kController, contextMode);
                }
            }
            template <class T>
            void ApplyOffroadConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOffroadCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOffroadCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOffroadCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOpenScenarioCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOpenScenario> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenario).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOpenScenario>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kFileHeader = object->GetFileHeader();
                if ( kFileHeader)
                {
                    ApplyFileHeaderCheckerRules(messageLogger, kFileHeader, contextMode);
                }
                const auto kOpenScenarioCategory = object->GetOpenScenarioCategory();
                if ( kOpenScenarioCategory)
                {
                    ApplyOpenScenarioCategoryCheckerRules(messageLogger, kOpenScenarioCategory, contextMode);
                }
            }
            template <class T>
            void ApplyOpenScenarioCategoryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOpenScenarioCategory> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOpenScenarioCategory>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kScenarioDefinition = object->GetScenarioDefinition();
                if ( kScenarioDefinition)
                {
                    ApplyScenarioDefinitionCheckerRules(messageLogger, kScenarioDefinition, contextMode);
                }
                const auto kCatalogDefinition = object->GetCatalogDefinition();
                if ( kCatalogDefinition)
                {
                    ApplyCatalogDefinitionCheckerRules(messageLogger, kCatalogDefinition, contextMode);
                }
            }
            template <class T>
            void ApplyOrientationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOrientation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOrientation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOrientation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideBrakeActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideBrakeAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideBrakeAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideClutchActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideClutchAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideClutchAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideControllerValueActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideControllerValueAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideControllerValueAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kThrottle = object->GetThrottle();
                if ( kThrottle)
                {
                    ApplyOverrideThrottleActionCheckerRules(messageLogger, kThrottle, contextMode);
                }
                const auto kBrake = object->GetBrake();
                if ( kBrake)
                {
                    ApplyOverrideBrakeActionCheckerRules(messageLogger, kBrake, contextMode);
                }
                const auto kClutch = object->GetClutch();
                if ( kClutch)
                {
                    ApplyOverrideClutchActionCheckerRules(messageLogger, kClutch, contextMode);
                }
                const auto kParkingBrake = object->GetParkingBrake();
                if ( kParkingBrake)
                {
                    ApplyOverrideParkingBrakeActionCheckerRules(messageLogger, kParkingBrake, contextMode);
                }
                const auto kSteeringWheel = object->GetSteeringWheel();
                if ( kSteeringWheel)
                {
                    ApplyOverrideSteeringWheelActionCheckerRules(messageLogger, kSteeringWheel, contextMode);
                }
                const auto kGear = object->GetGear();
                if ( kGear)
                {
                    ApplyOverrideGearActionCheckerRules(messageLogger, kGear, contextMode);
                }
            }
            template <class T>
            void ApplyOverrideGearActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideGearAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideGearAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideGearAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideParkingBrakeActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideParkingBrakeAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideParkingBrakeAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideSteeringWheelActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideSteeringWheelAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideSteeringWheelAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyOverrideThrottleActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IOverrideThrottleAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideThrottleAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kSetAction = object->GetSetAction();
                if ( kSetAction)
                {
                    ApplyParameterSetActionCheckerRules(messageLogger, kSetAction, contextMode);
                }
                const auto kModifyAction = object->GetModifyAction();
                if ( kModifyAction)
                {
                    ApplyParameterModifyActionCheckerRules(messageLogger, kModifyAction, contextMode);
                }
            }
            template <class T>
            void ApplyParameterAddValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterAddValueRule> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAddValueRule>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterAssignmentCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterAssignment> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAssignment).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAssignment>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterDeclarationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterDeclaration> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterDeclaration).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterDeclaration>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterModifyActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterModifyAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterModifyAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterModifyAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRule = object->GetRule();
                if ( kRule)
                {
                    ApplyModifyRuleCheckerRules(messageLogger, kRule, contextMode);
                }
            }
            template <class T>
            void ApplyParameterMultiplyByValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterMultiplyByValueRule> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterMultiplyByValueRule>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyParameterSetActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IParameterSetAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterSetAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterSetAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPedestrianCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPedestrian> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrian).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPedestrian>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kBoundingBox = object->GetBoundingBox();
                if ( kBoundingBox)
                {
                    ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
                }
                const auto kProperties = object->GetProperties();
                if ( kProperties)
                {
                    ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
                }
            }
            template <class T>
            void ApplyPedestrianCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPedestrianCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPedestrianCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyPerformanceCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPerformance> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPerformance).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPerformance>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPhaseCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPhase> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPhase).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPhase>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTrafficSignalStates = object->GetTrafficSignalStates();
                for(auto& kListItem: kTrafficSignalStates)
                {
                    if ( kListItem )
                        ApplyTrafficSignalStateCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyPolylineCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPolyline> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolyline).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPolyline>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kVertices = object->GetVertices();
                for(auto& kListItem: kVertices)
                {
                    if ( kListItem )
                        ApplyVertexCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kWorldPosition = object->GetWorldPosition();
                if ( kWorldPosition)
                {
                    ApplyWorldPositionCheckerRules(messageLogger, kWorldPosition, contextMode);
                }
                const auto kRelativeWorldPosition = object->GetRelativeWorldPosition();
                if ( kRelativeWorldPosition)
                {
                    ApplyRelativeWorldPositionCheckerRules(messageLogger, kRelativeWorldPosition, contextMode);
                }
                const auto kRelativeObjectPosition = object->GetRelativeObjectPosition();
                if ( kRelativeObjectPosition)
                {
                    ApplyRelativeObjectPositionCheckerRules(messageLogger, kRelativeObjectPosition, contextMode);
                }
                const auto kRoadPosition = object->GetRoadPosition();
                if ( kRoadPosition)
                {
                    ApplyRoadPositionCheckerRules(messageLogger, kRoadPosition, contextMode);
                }
                const auto kRelativeRoadPosition = object->GetRelativeRoadPosition();
                if ( kRelativeRoadPosition)
                {
                    ApplyRelativeRoadPositionCheckerRules(messageLogger, kRelativeRoadPosition, contextMode);
                }
                const auto kLanePosition = object->GetLanePosition();
                if ( kLanePosition)
                {
                    ApplyLanePositionCheckerRules(messageLogger, kLanePosition, contextMode);
                }
                const auto kRelativeLanePosition = object->GetRelativeLanePosition();
                if ( kRelativeLanePosition)
                {
                    ApplyRelativeLanePositionCheckerRules(messageLogger, kRelativeLanePosition, contextMode);
                }
                const auto kRoutePosition = object->GetRoutePosition();
                if ( kRoutePosition)
                {
                    ApplyRoutePositionCheckerRules(messageLogger, kRoutePosition, contextMode);
                }
            }
            template <class T>
            void ApplyPositionInLaneCoordinatesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPositionInLaneCoordinates> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionInLaneCoordinates>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPositionInRoadCoordinatesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPositionInRoadCoordinates> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionInRoadCoordinates>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPositionOfCurrentEntityCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPositionOfCurrentEntity> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionOfCurrentEntity>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPrecipitationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPrecipitation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrecipitation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrecipitation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyPrivateCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPrivate> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivate).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrivate>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPrivateActions = object->GetPrivateActions();
                for(auto& kListItem: kPrivateActions)
                {
                    if ( kListItem )
                        ApplyPrivateActionCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyPrivateActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IPrivateAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivateAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrivateAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kLongitudinalAction = object->GetLongitudinalAction();
                if ( kLongitudinalAction)
                {
                    ApplyLongitudinalActionCheckerRules(messageLogger, kLongitudinalAction, contextMode);
                }
                const auto kLateralAction = object->GetLateralAction();
                if ( kLateralAction)
                {
                    ApplyLateralActionCheckerRules(messageLogger, kLateralAction, contextMode);
                }
                const auto kVisibilityAction = object->GetVisibilityAction();
                if ( kVisibilityAction)
                {
                    ApplyVisibilityActionCheckerRules(messageLogger, kVisibilityAction, contextMode);
                }
                const auto kSynchronizeAction = object->GetSynchronizeAction();
                if ( kSynchronizeAction)
                {
                    ApplySynchronizeActionCheckerRules(messageLogger, kSynchronizeAction, contextMode);
                }
                const auto kActivateControllerAction = object->GetActivateControllerAction();
                if ( kActivateControllerAction)
                {
                    ApplyActivateControllerActionCheckerRules(messageLogger, kActivateControllerAction, contextMode);
                }
                const auto kControllerAction = object->GetControllerAction();
                if ( kControllerAction)
                {
                    ApplyControllerActionCheckerRules(messageLogger, kControllerAction, contextMode);
                }
                const auto kTeleportAction = object->GetTeleportAction();
                if ( kTeleportAction)
                {
                    ApplyTeleportActionCheckerRules(messageLogger, kTeleportAction, contextMode);
                }
                const auto kRoutingAction = object->GetRoutingAction();
                if ( kRoutingAction)
                {
                    ApplyRoutingActionCheckerRules(messageLogger, kRoutingAction, contextMode);
                }
            }
            template <class T>
            void ApplyPropertiesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IProperties> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperties).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IProperties>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kProperties = object->GetProperties();
                for(auto& kListItem: kProperties)
                {
                    if ( kListItem )
                        ApplyPropertyCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kFiles = object->GetFiles();
                for(auto& kListItem: kFiles)
                {
                    if ( kListItem )
                        ApplyFileCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyPropertyCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IProperty> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperty).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IProperty>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyReachPositionConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IReachPositionCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IReachPositionCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IReachPositionCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyRelativeDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeDistanceCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeDistanceCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeLanePositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeLanePosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeLanePosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyRelativeObjectPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeObjectPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeObjectPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyRelativeRoadPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeRoadPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeRoadPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyRelativeSpeedConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeSpeedCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeSpeedCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeSpeedToMasterCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeSpeedToMaster> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeSpeedToMaster>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeTargetLaneCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeTargetLane> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetLane>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeTargetLaneOffsetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeTargetLaneOffset> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetLaneOffset>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeTargetSpeedCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeTargetSpeed> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetSpeed>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyRelativeWorldPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRelativeWorldPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeWorldPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyRoadConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoadCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kProperties = object->GetProperties();
                if ( kProperties)
                {
                    ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
                }
            }
            template <class T>
            void ApplyRoadNetworkCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoadNetwork> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadNetwork).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadNetwork>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kLogicFile = object->GetLogicFile();
                if ( kLogicFile)
                {
                    ApplyFileCheckerRules(messageLogger, kLogicFile, contextMode);
                }
                const auto kSceneGraphFile = object->GetSceneGraphFile();
                if ( kSceneGraphFile)
                {
                    ApplyFileCheckerRules(messageLogger, kSceneGraphFile, contextMode);
                }
                const auto kTrafficSignals = object->GetTrafficSignals();
                for(auto& kListItem: kTrafficSignals)
                {
                    if ( kListItem )
                        ApplyTrafficSignalControllerCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyRoadPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoadPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
            }
            template <class T>
            void ApplyRouteCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoute> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoute).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoute>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kWaypoints = object->GetWaypoints();
                for(auto& kListItem: kWaypoints)
                {
                    if ( kListItem )
                        ApplyWaypointCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyRouteCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRouteCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRouteCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyRoutePositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoutePosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutePosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoutePosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRouteRef = object->GetRouteRef();
                if ( kRouteRef)
                {
                    ApplyRouteRefCheckerRules(messageLogger, kRouteRef, contextMode);
                }
                const auto kOrientation = object->GetOrientation();
                if ( kOrientation)
                {
                    ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
                }
                const auto kInRoutePosition = object->GetInRoutePosition();
                if ( kInRoutePosition)
                {
                    ApplyInRoutePositionCheckerRules(messageLogger, kInRoutePosition, contextMode);
                }
            }
            template <class T>
            void ApplyRouteRefCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRouteRef> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteRef).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRouteRef>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRoute = object->GetRoute();
                if ( kRoute)
                {
                    ApplyRouteCheckerRules(messageLogger, kRoute, contextMode);
                }
                const auto kCatalogReference = object->GetCatalogReference();
                if ( kCatalogReference)
                {
                    ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
                }
            }
            template <class T>
            void ApplyRoutingActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IRoutingAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutingAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoutingAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kAssignRouteAction = object->GetAssignRouteAction();
                if ( kAssignRouteAction)
                {
                    ApplyAssignRouteActionCheckerRules(messageLogger, kAssignRouteAction, contextMode);
                }
                const auto kFollowTrajectoryAction = object->GetFollowTrajectoryAction();
                if ( kFollowTrajectoryAction)
                {
                    ApplyFollowTrajectoryActionCheckerRules(messageLogger, kFollowTrajectoryAction, contextMode);
                }
                const auto kAcquirePositionAction = object->GetAcquirePositionAction();
                if ( kAcquirePositionAction)
                {
                    ApplyAcquirePositionActionCheckerRules(messageLogger, kAcquirePositionAction, contextMode);
                }
            }
            template <class T>
            void ApplyScenarioDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IScenarioDefinition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioDefinition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IScenarioDefinition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kCatalogLocations = object->GetCatalogLocations();
                if ( kCatalogLocations)
                {
                    ApplyCatalogLocationsCheckerRules(messageLogger, kCatalogLocations, contextMode);
                }
                const auto kRoadNetwork = object->GetRoadNetwork();
                if ( kRoadNetwork)
                {
                    ApplyRoadNetworkCheckerRules(messageLogger, kRoadNetwork, contextMode);
                }
                const auto kEntities = object->GetEntities();
                if ( kEntities)
                {
                    ApplyEntitiesCheckerRules(messageLogger, kEntities, contextMode);
                }
                const auto kStoryboard = object->GetStoryboard();
                if ( kStoryboard)
                {
                    ApplyStoryboardCheckerRules(messageLogger, kStoryboard, contextMode);
                }
            }
            template <class T>
            void ApplyScenarioObjectCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IScenarioObject> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObject).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IScenarioObject>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEntityObject = object->GetEntityObject();
                if ( kEntityObject)
                {
                    ApplyEntityObjectCheckerRules(messageLogger, kEntityObject, contextMode);
                }
                const auto kObjectController = object->GetObjectController();
                if ( kObjectController)
                {
                    ApplyObjectControllerCheckerRules(messageLogger, kObjectController, contextMode);
                }
            }
            template <class T>
            void ApplySelectedEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISelectedEntities> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISelectedEntities).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISelectedEntities>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEntityRef = object->GetEntityRef();
                for(auto& kListItem: kEntityRef)
                {
                    if ( kListItem )
                        ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kByType = object->GetByType();
                for(auto& kListItem: kByType)
                {
                    if ( kListItem )
                        ApplyByTypeCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyShapeCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IShape> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IShape).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IShape>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPolyline = object->GetPolyline();
                if ( kPolyline)
                {
                    ApplyPolylineCheckerRules(messageLogger, kPolyline, contextMode);
                }
                const auto kClothoid = object->GetClothoid();
                if ( kClothoid)
                {
                    ApplyClothoidCheckerRules(messageLogger, kClothoid, contextMode);
                }
                const auto kNurbs = object->GetNurbs();
                if ( kNurbs)
                {
                    ApplyNurbsCheckerRules(messageLogger, kNurbs, contextMode);
                }
            }
            template <class T>
            void ApplySimulationTimeConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISimulationTimeCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISimulationTimeCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplySpeedActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISpeedAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kSpeedActionDynamics = object->GetSpeedActionDynamics();
                if ( kSpeedActionDynamics)
                {
                    ApplyTransitionDynamicsCheckerRules(messageLogger, kSpeedActionDynamics, contextMode);
                }
                const auto kSpeedActionTarget = object->GetSpeedActionTarget();
                if ( kSpeedActionTarget)
                {
                    ApplySpeedActionTargetCheckerRules(messageLogger, kSpeedActionTarget, contextMode);
                }
            }
            template <class T>
            void ApplySpeedActionTargetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISpeedActionTarget> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedActionTarget>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kRelativeTargetSpeed = object->GetRelativeTargetSpeed();
                if ( kRelativeTargetSpeed)
                {
                    ApplyRelativeTargetSpeedCheckerRules(messageLogger, kRelativeTargetSpeed, contextMode);
                }
                const auto kAbsoluteTargetSpeed = object->GetAbsoluteTargetSpeed();
                if ( kAbsoluteTargetSpeed)
                {
                    ApplyAbsoluteTargetSpeedCheckerRules(messageLogger, kAbsoluteTargetSpeed, contextMode);
                }
            }
            template <class T>
            void ApplySpeedConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISpeedCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyStandStillConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IStandStillCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStandStillCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStandStillCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyStoryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IStory> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStory).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStory>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kActs = object->GetActs();
                for(auto& kListItem: kActs)
                {
                    if ( kListItem )
                        ApplyActCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyStoryboardCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IStoryboard> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboard).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStoryboard>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kInit = object->GetInit();
                if ( kInit)
                {
                    ApplyInitCheckerRules(messageLogger, kInit, contextMode);
                }
                const auto kStories = object->GetStories();
                for(auto& kListItem: kStories)
                {
                    if ( kListItem )
                        ApplyStoryCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kStopTrigger = object->GetStopTrigger();
                if ( kStopTrigger)
                {
                    ApplyTriggerCheckerRules(messageLogger, kStopTrigger, contextMode);
                }
            }
            template <class T>
            void ApplyStoryboardElementStateConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IStoryboardElementStateCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStoryboardElementStateCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplySunCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISun> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISun).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISun>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplySynchronizeActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ISynchronizeAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISynchronizeAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISynchronizeAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTargetPositionMaster = object->GetTargetPositionMaster();
                if ( kTargetPositionMaster)
                {
                    ApplyPositionCheckerRules(messageLogger, kTargetPositionMaster, contextMode);
                }
                const auto kTargetPosition = object->GetTargetPosition();
                if ( kTargetPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kTargetPosition, contextMode);
                }
                const auto kFinalSpeed = object->GetFinalSpeed();
                if ( kFinalSpeed)
                {
                    ApplyFinalSpeedCheckerRules(messageLogger, kFinalSpeed, contextMode);
                }
            }
            template <class T>
            void ApplyTeleportActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITeleportAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITeleportAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITeleportAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyTimeHeadwayConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeHeadwayCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeHeadwayCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTimeOfDayCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeOfDay> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDay).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeOfDay>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTimeOfDayConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeOfDayCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeOfDayCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTimeReferenceCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeReference> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeReference).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeReference>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kNone = object->GetNone();
                if ( kNone)
                {
                    ApplyNoneCheckerRules(messageLogger, kNone, contextMode);
                }
                const auto kTiming = object->GetTiming();
                if ( kTiming)
                {
                    ApplyTimingCheckerRules(messageLogger, kTiming, contextMode);
                }
            }
            template <class T>
            void ApplyTimeToCollisionConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeToCollisionCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeToCollisionCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTimeToCollisionConditionTarget = object->GetTimeToCollisionConditionTarget();
                if ( kTimeToCollisionConditionTarget)
                {
                    ApplyTimeToCollisionConditionTargetCheckerRules(messageLogger, kTimeToCollisionConditionTarget, contextMode);
                }
            }
            template <class T>
            void ApplyTimeToCollisionConditionTargetCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITimeToCollisionConditionTarget> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeToCollisionConditionTarget>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
                const auto kEntityRef = object->GetEntityRef();
                if ( kEntityRef)
                {
                    ApplyEntityRefCheckerRules(messageLogger, kEntityRef, contextMode);
                }
            }
            template <class T>
            void ApplyTimingCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITiming> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITiming).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITiming>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTrafficSourceAction = object->GetTrafficSourceAction();
                if ( kTrafficSourceAction)
                {
                    ApplyTrafficSourceActionCheckerRules(messageLogger, kTrafficSourceAction, contextMode);
                }
                const auto kTrafficSinkAction = object->GetTrafficSinkAction();
                if ( kTrafficSinkAction)
                {
                    ApplyTrafficSinkActionCheckerRules(messageLogger, kTrafficSinkAction, contextMode);
                }
                const auto kTrafficSwarmAction = object->GetTrafficSwarmAction();
                if ( kTrafficSwarmAction)
                {
                    ApplyTrafficSwarmActionCheckerRules(messageLogger, kTrafficSwarmAction, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficDefinition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDefinition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficDefinition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kVehicleCategoryDistribution = object->GetVehicleCategoryDistribution();
                if ( kVehicleCategoryDistribution)
                {
                    ApplyVehicleCategoryDistributionCheckerRules(messageLogger, kVehicleCategoryDistribution, contextMode);
                }
                const auto kControllerDistribution = object->GetControllerDistribution();
                if ( kControllerDistribution)
                {
                    ApplyControllerDistributionCheckerRules(messageLogger, kControllerDistribution, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficSignalActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kTrafficSignalControllerAction = object->GetTrafficSignalControllerAction();
                if ( kTrafficSignalControllerAction)
                {
                    ApplyTrafficSignalControllerActionCheckerRules(messageLogger, kTrafficSignalControllerAction, contextMode);
                }
                const auto kTrafficSignalStateAction = object->GetTrafficSignalStateAction();
                if ( kTrafficSignalStateAction)
                {
                    ApplyTrafficSignalStateActionCheckerRules(messageLogger, kTrafficSignalStateAction, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficSignalConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficSignalControllerCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalController> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalController).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalController>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPhases = object->GetPhases();
                for(auto& kListItem: kPhases)
                {
                    if ( kListItem )
                        ApplyPhaseCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficSignalControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalControllerAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalControllerAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficSignalControllerConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalControllerCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalControllerCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficSignalStateCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalState> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalState).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalState>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficSignalStateActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSignalStateAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalStateAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTrafficSinkActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSinkAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSinkAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
                const auto kTrafficDefinition = object->GetTrafficDefinition();
                if ( kTrafficDefinition)
                {
                    ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficSourceActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSourceAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSourceAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
                const auto kTrafficDefinition = object->GetTrafficDefinition();
                if ( kTrafficDefinition)
                {
                    ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
                }
            }
            template <class T>
            void ApplyTrafficSwarmActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrafficSwarmAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSwarmAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCentralObject = object->GetCentralObject();
                if ( kCentralObject)
                {
                    ApplyCentralSwarmObjectCheckerRules(messageLogger, kCentralObject, contextMode);
                }
                const auto kTrafficDefinition = object->GetTrafficDefinition();
                if ( kTrafficDefinition)
                {
                    ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
                }
            }
            template <class T>
            void ApplyTrajectoryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrajectory> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectory).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectory>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kShape = object->GetShape();
                if ( kShape)
                {
                    ApplyShapeCheckerRules(messageLogger, kShape, contextMode);
                }
            }
            template <class T>
            void ApplyTrajectoryCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrajectoryCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectoryCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyTrajectoryFollowingModeCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrajectoryFollowingMode> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectoryFollowingMode>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTransitionDynamicsCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITransitionDynamics> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITransitionDynamics).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITransitionDynamics>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTraveledDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITraveledDistanceCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITraveledDistanceCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyTriggerCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITrigger> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrigger).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrigger>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kConditionGroups = object->GetConditionGroups();
                for(auto& kListItem: kConditionGroups)
                {
                    if ( kListItem )
                        ApplyConditionGroupCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyTriggeringEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<ITriggeringEntities> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITriggeringEntities).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITriggeringEntities>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kEntityRefs = object->GetEntityRefs();
                for(auto& kListItem: kEntityRefs)
                {
                    if ( kListItem )
                        ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyUserDefinedActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IUserDefinedAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IUserDefinedAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kCustomCommandAction = object->GetCustomCommandAction();
                if ( kCustomCommandAction)
                {
                    ApplyCustomCommandActionCheckerRules(messageLogger, kCustomCommandAction, contextMode);
                }
            }
            template <class T>
            void ApplyUserDefinedValueConditionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IUserDefinedValueCondition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IUserDefinedValueCondition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyVehicleCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVehicle> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicle).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicle>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kParameterDeclarations = object->GetParameterDeclarations();
                for(auto& kListItem: kParameterDeclarations)
                {
                    if ( kListItem )
                        ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
                }
                const auto kBoundingBox = object->GetBoundingBox();
                if ( kBoundingBox)
                {
                    ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
                }
                const auto kPerformance = object->GetPerformance();
                if ( kPerformance)
                {
                    ApplyPerformanceCheckerRules(messageLogger, kPerformance, contextMode);
                }
                const auto kAxles = object->GetAxles();
                if ( kAxles)
                {
                    ApplyAxlesCheckerRules(messageLogger, kAxles, contextMode);
                }
                const auto kProperties = object->GetProperties();
                if ( kProperties)
                {
                    ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
                }
            }
            template <class T>
            void ApplyVehicleCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVehicleCatalogLocation> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCatalogLocation>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kDirectory = object->GetDirectory();
                if ( kDirectory)
                {
                    ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
                }
            }
            template <class T>
            void ApplyVehicleCategoryDistributionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVehicleCategoryDistribution> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCategoryDistribution>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kVehicleCategoryDistributionEntries = object->GetVehicleCategoryDistributionEntries();
                for(auto& kListItem: kVehicleCategoryDistributionEntries)
                {
                    if ( kListItem )
                        ApplyVehicleCategoryDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
                }
            }
            template <class T>
            void ApplyVehicleCategoryDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVehicleCategoryDistributionEntry> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCategoryDistributionEntry>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyVertexCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVertex> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVertex).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVertex>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyVisibilityActionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IVisibilityAction> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVisibilityAction).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVisibilityAction>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }
            template <class T>
            void ApplyWaypointCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IWaypoint> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWaypoint).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWaypoint>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kPosition = object->GetPosition();
                if ( kPosition)
                {
                    ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
                }
            }
            template <class T>
            void ApplyWeatherCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IWeather> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWeather).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWeather>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
                const auto kSun = object->GetSun();
                if ( kSun)
                {
                    ApplySunCheckerRules(messageLogger, kSun, contextMode);
                }
                const auto kFog = object->GetFog();
                if ( kFog)
                {
                    ApplyFogCheckerRules(messageLogger, kFog, contextMode);
                }
                const auto kPrecipitation = object->GetPrecipitation();
                if ( kPrecipitation)
                {
                    ApplyPrecipitationCheckerRules(messageLogger, kPrecipitation, contextMode);
                }
            }
            template <class T>
            void ApplyWorldPositionCheckerRules(std::shared_ptr<IContentMessageLogger<T>> messageLogger, const std::shared_ptr<IWorldPosition> object, const ContextMode contextMode)
            {
                auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWorldPosition).name()];
                if ( !checkerRulesForType.empty() )
                {
                    for (auto& checkerRule:checkerRulesForType)
                    {
                        auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWorldPosition>> (checkerRule);
                        if (contextMode == MODE_FILE) 
                        {
                            typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), object);
                        }
                        else
                        {
                            typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), object);
                        }
                    }
                }

                // getChildren
            }

        public:
            OPENSCENARIOLIB_EXP void CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLane>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLaneOffset>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAccelerationConditionCheckerRule(std::shared_ptr<ICheckerRule<IAccelerationCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAcquirePositionActionCheckerRule(std::shared_ptr<ICheckerRule<IAcquirePositionAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActCheckerRule(std::shared_ptr<ICheckerRule<IAct>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActionCheckerRule(std::shared_ptr<ICheckerRule<IAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActivateControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IActivateControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActorsCheckerRule(std::shared_ptr<ICheckerRule<IActors>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IAddEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignRouteActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignRouteAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxleCheckerRule(std::shared_ptr<ICheckerRule<IAxle>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxlesCheckerRule(std::shared_ptr<ICheckerRule<IAxles>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddBoundingBoxCheckerRule(std::shared_ptr<ICheckerRule<IBoundingBox>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IByEntityCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByObjectTypeCheckerRule(std::shared_ptr<ICheckerRule<IByObjectType>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByTypeCheckerRule(std::shared_ptr<ICheckerRule<IByType>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IByValueCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogCheckerRule(std::shared_ptr<ICheckerRule<ICatalog>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ICatalogDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogLocationsCheckerRule(std::shared_ptr<ICheckerRule<ICatalogLocations>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogReferenceCheckerRule(std::shared_ptr<ICheckerRule<ICatalogReference>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCenterCheckerRule(std::shared_ptr<ICheckerRule<ICenter>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCentralSwarmObjectCheckerRule(std::shared_ptr<ICheckerRule<ICentralSwarmObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddClothoidCheckerRule(std::shared_ptr<ICheckerRule<IClothoid>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ICollisionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionCheckerRule(std::shared_ptr<ICheckerRule<ICondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionGroupCheckerRule(std::shared_ptr<ICheckerRule<IConditionGroup>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControlPointCheckerRule(std::shared_ptr<ICheckerRule<IControlPoint>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCheckerRule(std::shared_ptr<ICheckerRule<IController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IControllerCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistribution>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistributionEntry>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCustomCommandActionCheckerRule(std::shared_ptr<ICheckerRule<ICustomCommandAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeleteEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IDeleteEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDimensionsCheckerRule(std::shared_ptr<ICheckerRule<IDimensions>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDirectoryCheckerRule(std::shared_ptr<ICheckerRule<IDirectory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDynamicConstraintsCheckerRule(std::shared_ptr<ICheckerRule<IDynamicConstraints>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEndOfRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IEndOfRoadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitiesCheckerRule(std::shared_ptr<ICheckerRule<IEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IEntityCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityObjectCheckerRule(std::shared_ptr<ICheckerRule<IEntityObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityRefCheckerRule(std::shared_ptr<ICheckerRule<IEntityRef>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitySelectionCheckerRule(std::shared_ptr<ICheckerRule<IEntitySelection>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCheckerRule(std::shared_ptr<ICheckerRule<IEnvironment>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentActionCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEventCheckerRule(std::shared_ptr<ICheckerRule<IEvent>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileCheckerRule(std::shared_ptr<ICheckerRule<IFile>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileHeaderCheckerRule(std::shared_ptr<ICheckerRule<IFileHeader>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFinalSpeedCheckerRule(std::shared_ptr<ICheckerRule<IFinalSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFogCheckerRule(std::shared_ptr<ICheckerRule<IFog>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFollowTrajectoryActionCheckerRule(std::shared_ptr<ICheckerRule<IFollowTrajectoryAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddGlobalActionCheckerRule(std::shared_ptr<ICheckerRule<IGlobalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IInRoutePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInfrastructureActionCheckerRule(std::shared_ptr<ICheckerRule<IInfrastructureAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitCheckerRule(std::shared_ptr<ICheckerRule<IInit>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitActionsCheckerRule(std::shared_ptr<ICheckerRule<IInitActions>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddKnotCheckerRule(std::shared_ptr<ICheckerRule<IKnot>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetActionDynamics>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLanePositionCheckerRule(std::shared_ptr<ICheckerRule<ILanePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralDistanceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalDistanceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCheckerRule(std::shared_ptr<ICheckerRule<IManeuver>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IManeuverCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverGroupCheckerRule(std::shared_ptr<ICheckerRule<IManeuverGroup>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCheckerRule(std::shared_ptr<ICheckerRule<IMiscObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IMiscObjectCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddModifyRuleCheckerRule(std::shared_ptr<ICheckerRule<IModifyRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNoneCheckerRule(std::shared_ptr<ICheckerRule<INone>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNurbsCheckerRule(std::shared_ptr<ICheckerRule<INurbs>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddObjectControllerCheckerRule(std::shared_ptr<ICheckerRule<IObjectController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOffroadConditionCheckerRule(std::shared_ptr<ICheckerRule<IOffroadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenario>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCategoryCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenarioCategory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOrientationCheckerRule(std::shared_ptr<ICheckerRule<IOrientation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideBrakeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideClutchActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideClutchAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideControllerValueActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideControllerValueAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideGearActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideGearAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideParkingBrakeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideSteeringWheelAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideThrottleActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideThrottleAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterAddValueRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAssignmentCheckerRule(std::shared_ptr<ICheckerRule<IParameterAssignment>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterConditionCheckerRule(std::shared_ptr<ICheckerRule<IParameterCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterDeclarationCheckerRule(std::shared_ptr<ICheckerRule<IParameterDeclaration>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterModifyActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterModifyAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterMultiplyByValueRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterSetActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterSetAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCheckerRule(std::shared_ptr<ICheckerRule<IPedestrian>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IPedestrianCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPerformanceCheckerRule(std::shared_ptr<ICheckerRule<IPerformance>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPhaseCheckerRule(std::shared_ptr<ICheckerRule<IPhase>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPolylineCheckerRule(std::shared_ptr<ICheckerRule<IPolyline>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionCheckerRule(std::shared_ptr<ICheckerRule<IPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInLaneCoordinates>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInRoadCoordinates>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<ICheckerRule<IPositionOfCurrentEntity>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrecipitationCheckerRule(std::shared_ptr<ICheckerRule<IPrecipitation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateCheckerRule(std::shared_ptr<ICheckerRule<IPrivate>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateActionCheckerRule(std::shared_ptr<ICheckerRule<IPrivateAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertiesCheckerRule(std::shared_ptr<ICheckerRule<IProperties>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertyCheckerRule(std::shared_ptr<ICheckerRule<IProperty>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddReachPositionConditionCheckerRule(std::shared_ptr<ICheckerRule<IReachPositionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeLanePositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeLanePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeObjectPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeObjectPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeRoadPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedToMaster>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLane>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLaneOffset>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeWorldPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IRoadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadNetworkCheckerRule(std::shared_ptr<ICheckerRule<IRoadNetwork>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRoadPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCheckerRule(std::shared_ptr<ICheckerRule<IRoute>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IRouteCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IRoutePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteRefCheckerRule(std::shared_ptr<ICheckerRule<IRouteRef>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutingActionCheckerRule(std::shared_ptr<ICheckerRule<IRoutingAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioDefinitionCheckerRule(std::shared_ptr<ICheckerRule<IScenarioDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioObjectCheckerRule(std::shared_ptr<ICheckerRule<IScenarioObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSelectedEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ISelectedEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddShapeCheckerRule(std::shared_ptr<ICheckerRule<IShape>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSimulationTimeConditionCheckerRule(std::shared_ptr<ICheckerRule<ISimulationTimeCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionTargetCheckerRule(std::shared_ptr<ICheckerRule<ISpeedActionTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStandStillConditionCheckerRule(std::shared_ptr<ICheckerRule<IStandStillCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryCheckerRule(std::shared_ptr<ICheckerRule<IStory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardCheckerRule(std::shared_ptr<ICheckerRule<IStoryboard>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<ICheckerRule<IStoryboardElementStateCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSunCheckerRule(std::shared_ptr<ICheckerRule<ISun>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSynchronizeActionCheckerRule(std::shared_ptr<ICheckerRule<ISynchronizeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTeleportActionCheckerRule(std::shared_ptr<ICheckerRule<ITeleportAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeHeadwayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeHeadwayCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDay>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDayCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeReferenceCheckerRule(std::shared_ptr<ICheckerRule<ITimeReference>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionTargetCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionConditionTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimingCheckerRule(std::shared_ptr<ICheckerRule<ITiming>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalState>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalStateAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSinkActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSinkAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSourceActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSourceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSwarmActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSwarmAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCheckerRule(std::shared_ptr<ICheckerRule<ITrajectory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryFollowingMode>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTransitionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ITransitionDynamics>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTraveledDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<ITraveledDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggerCheckerRule(std::shared_ptr<ICheckerRule<ITrigger>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggeringEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ITriggeringEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedActionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedValueCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCheckerRule(std::shared_ptr<ICheckerRule<IVehicle>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistribution>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistributionEntry>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVertexCheckerRule(std::shared_ptr<ICheckerRule<IVertex>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVisibilityActionCheckerRule(std::shared_ptr<ICheckerRule<IVisibilityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWaypointCheckerRule(std::shared_ptr<ICheckerRule<IWaypoint>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWeatherCheckerRule(std::shared_ptr<ICheckerRule<IWeather>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IWorldPosition>> checkerRule) override;
        };
    }
}
