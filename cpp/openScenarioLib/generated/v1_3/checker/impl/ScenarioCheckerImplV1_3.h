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
#include "IScenarioCheckerV1_3.h"
#include "ApiClassInterfacesV1_3.h"
#include "MemLeakDetection.h"
#include <memory>
#include "ExportDefinitions.h"
#include "IContentMessageLogger.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.3
         * A range checker rule class for the type
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OPENSCENARIOLIB_EXP ScenarioCheckerImpl: public IScenarioChecker
        {
        private:
            enum ContextMode { MODE_TREE, MODE_FILE };

            //string is typeid(class).name()
            std::map<std::string, std::vector<std::shared_ptr<CheckerRule>>> _typeToCheckerRuleList;
   	        void ApplyAbsoluteSpeedCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAbsoluteSpeed>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSteadyState = typedObject->GetSteadyState();
	            if ( kSteadyState)
	            {
	                ApplySteadyStateCheckerRules(messageLogger, kSteadyState, contextMode);
	            }
	        }
   	        void ApplyAbsoluteTargetLaneCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAbsoluteTargetLane>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAbsoluteTargetLaneOffsetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAbsoluteTargetLaneOffset>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAbsoluteTargetSpeedCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAbsoluteTargetSpeed>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAccelerationConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAccelerationCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAccelerationCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAcquirePositionActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAcquirePositionAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyActCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAct).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAct>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kManeuverGroups = typedObject->GetManeuverGroups();
	            for(auto& kListItem: kManeuverGroups)
	            {
	                if ( kListItem )
	                    ApplyManeuverGroupCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kStartTrigger = typedObject->GetStartTrigger();
	            if ( kStartTrigger)
	            {
	                ApplyTriggerCheckerRules(messageLogger, kStartTrigger, contextMode);
	            }
	            const auto kStopTrigger = typedObject->GetStopTrigger();
	            if ( kStopTrigger)
	            {
	                ApplyTriggerCheckerRules(messageLogger, kStopTrigger, contextMode);
	            }
	        }
   	        void ApplyActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kGlobalAction = typedObject->GetGlobalAction();
	            if ( kGlobalAction)
	            {
	                ApplyGlobalActionCheckerRules(messageLogger, kGlobalAction, contextMode);
	            }
	            const auto kUserDefinedAction = typedObject->GetUserDefinedAction();
	            if ( kUserDefinedAction)
	            {
	                ApplyUserDefinedActionCheckerRules(messageLogger, kUserDefinedAction, contextMode);
	            }
	            const auto kPrivateAction = typedObject->GetPrivateAction();
	            if ( kPrivateAction)
	            {
	                ApplyPrivateActionCheckerRules(messageLogger, kPrivateAction, contextMode);
	            }
	        }
   	        void ApplyActivateControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActivateControllerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IActivateControllerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyActorsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActors).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IActors>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityRefs = typedObject->GetEntityRefs();
	            for(auto& kListItem: kEntityRefs)
	            {
	                if ( kListItem )
	                    ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyAddEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAddEntityAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAddEntityAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyAngleConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAngleCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAngleCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAnimationActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAnimationAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAnimationAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAnimationType = typedObject->GetAnimationType();
	            if ( kAnimationType)
	            {
	                ApplyAnimationTypeCheckerRules(messageLogger, kAnimationType, contextMode);
	            }
	            const auto kAnimationState = typedObject->GetAnimationState();
	            if ( kAnimationState)
	            {
	                ApplyAnimationStateCheckerRules(messageLogger, kAnimationState, contextMode);
	            }
	        }
   	        void ApplyAnimationFileCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAnimationFile).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAnimationFile>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kFile = typedObject->GetFile();
	            if ( kFile)
	            {
	                ApplyFileCheckerRules(messageLogger, kFile, contextMode);
	            }
	        }
   	        void ApplyAnimationStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAnimationState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAnimationState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAnimationTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAnimationType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAnimationType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kComponentAnimation = typedObject->GetComponentAnimation();
	            if ( kComponentAnimation)
	            {
	                ApplyComponentAnimationCheckerRules(messageLogger, kComponentAnimation, contextMode);
	            }
	            const auto kPedestrianAnimation = typedObject->GetPedestrianAnimation();
	            if ( kPedestrianAnimation)
	            {
	                ApplyPedestrianAnimationCheckerRules(messageLogger, kPedestrianAnimation, contextMode);
	            }
	            const auto kAnimationFile = typedObject->GetAnimationFile();
	            if ( kAnimationFile)
	            {
	                ApplyAnimationFileCheckerRules(messageLogger, kAnimationFile, contextMode);
	            }
	            const auto kUserDefinedAnimation = typedObject->GetUserDefinedAnimation();
	            if ( kUserDefinedAnimation)
	            {
	                ApplyUserDefinedAnimationCheckerRules(messageLogger, kUserDefinedAnimation, contextMode);
	            }
	        }
   	        void ApplyAppearanceActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAppearanceAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAppearanceAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLightStateAction = typedObject->GetLightStateAction();
	            if ( kLightStateAction)
	            {
	                ApplyLightStateActionCheckerRules(messageLogger, kLightStateAction, contextMode);
	            }
	            const auto kAnimationAction = typedObject->GetAnimationAction();
	            if ( kAnimationAction)
	            {
	                ApplyAnimationActionCheckerRules(messageLogger, kAnimationAction, contextMode);
	            }
	        }
   	        void ApplyAssignControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignControllerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAssignControllerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kController = typedObject->GetController();
	            if ( kController)
	            {
	                ApplyControllerCheckerRules(messageLogger, kController, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	            const auto kObjectController = typedObject->GetObjectController();
	            if ( kObjectController)
	            {
	                ApplyObjectControllerCheckerRules(messageLogger, kObjectController, contextMode);
	            }
	        }
   	        void ApplyAssignRouteActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignRouteAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAssignRouteAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRoute = typedObject->GetRoute();
	            if ( kRoute)
	            {
	                ApplyRouteCheckerRules(messageLogger, kRoute, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	        }
   	        void ApplyAutomaticGearCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAutomaticGear).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAutomaticGear>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAxleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxle).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyAxlesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxles).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IAxles>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kFrontAxle = typedObject->GetFrontAxle();
	            if ( kFrontAxle)
	            {
	                ApplyAxleCheckerRules(messageLogger, kFrontAxle, contextMode);
	            }
	            const auto kRearAxle = typedObject->GetRearAxle();
	            if ( kRearAxle)
	            {
	                ApplyAxleCheckerRules(messageLogger, kRearAxle, contextMode);
	            }
	            const auto kAdditionalAxles = typedObject->GetAdditionalAxles();
	            for(auto& kListItem: kAdditionalAxles)
	            {
	                if ( kListItem )
	                    ApplyAxleCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyBoundingBoxCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBoundingBox).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IBoundingBox>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCenter = typedObject->GetCenter();
	            if ( kCenter)
	            {
	                ApplyCenterCheckerRules(messageLogger, kCenter, contextMode);
	            }
	            const auto kDimensions = typedObject->GetDimensions();
	            if ( kDimensions)
	            {
	                ApplyDimensionsCheckerRules(messageLogger, kDimensions, contextMode);
	            }
	        }
   	        void ApplyBrakeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBrake).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IBrake>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyBrakeInputCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBrakeInput).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IBrakeInput>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kBrakePercent = typedObject->GetBrakePercent();
	            if ( kBrakePercent)
	            {
	                ApplyBrakeCheckerRules(messageLogger, kBrakePercent, contextMode);
	            }
	            const auto kBrakeForce = typedObject->GetBrakeForce();
	            if ( kBrakeForce)
	            {
	                ApplyBrakeCheckerRules(messageLogger, kBrakeForce, contextMode);
	            }
	        }
   	        void ApplyByEntityConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByEntityCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IByEntityCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTriggeringEntities = typedObject->GetTriggeringEntities();
	            if ( kTriggeringEntities)
	            {
	                ApplyTriggeringEntitiesCheckerRules(messageLogger, kTriggeringEntities, contextMode);
	            }
	            const auto kEntityCondition = typedObject->GetEntityCondition();
	            if ( kEntityCondition)
	            {
	                ApplyEntityConditionCheckerRules(messageLogger, kEntityCondition, contextMode);
	            }
	        }
   	        void ApplyByObjectTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByObjectType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IByObjectType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyByTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IByType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyByValueConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByValueCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IByValueCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterCondition = typedObject->GetParameterCondition();
	            if ( kParameterCondition)
	            {
	                ApplyParameterConditionCheckerRules(messageLogger, kParameterCondition, contextMode);
	            }
	            const auto kTimeOfDayCondition = typedObject->GetTimeOfDayCondition();
	            if ( kTimeOfDayCondition)
	            {
	                ApplyTimeOfDayConditionCheckerRules(messageLogger, kTimeOfDayCondition, contextMode);
	            }
	            const auto kSimulationTimeCondition = typedObject->GetSimulationTimeCondition();
	            if ( kSimulationTimeCondition)
	            {
	                ApplySimulationTimeConditionCheckerRules(messageLogger, kSimulationTimeCondition, contextMode);
	            }
	            const auto kStoryboardElementStateCondition = typedObject->GetStoryboardElementStateCondition();
	            if ( kStoryboardElementStateCondition)
	            {
	                ApplyStoryboardElementStateConditionCheckerRules(messageLogger, kStoryboardElementStateCondition, contextMode);
	            }
	            const auto kUserDefinedValueCondition = typedObject->GetUserDefinedValueCondition();
	            if ( kUserDefinedValueCondition)
	            {
	                ApplyUserDefinedValueConditionCheckerRules(messageLogger, kUserDefinedValueCondition, contextMode);
	            }
	            const auto kTrafficSignalCondition = typedObject->GetTrafficSignalCondition();
	            if ( kTrafficSignalCondition)
	            {
	                ApplyTrafficSignalConditionCheckerRules(messageLogger, kTrafficSignalCondition, contextMode);
	            }
	            const auto kTrafficSignalControllerCondition = typedObject->GetTrafficSignalControllerCondition();
	            if ( kTrafficSignalControllerCondition)
	            {
	                ApplyTrafficSignalControllerConditionCheckerRules(messageLogger, kTrafficSignalControllerCondition, contextMode);
	            }
	            const auto kVariableCondition = typedObject->GetVariableCondition();
	            if ( kVariableCondition)
	            {
	                ApplyVariableConditionCheckerRules(messageLogger, kVariableCondition, contextMode);
	            }
	        }
   	        void ApplyCatalogCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalog).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICatalog>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicles = typedObject->GetVehicles();
	            for(auto& kListItem: kVehicles)
	            {
	                if ( kListItem )
	                    ApplyVehicleCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kControllers = typedObject->GetControllers();
	            for(auto& kListItem: kControllers)
	            {
	                if ( kListItem )
	                    ApplyControllerCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kPedestrians = typedObject->GetPedestrians();
	            for(auto& kListItem: kPedestrians)
	            {
	                if ( kListItem )
	                    ApplyPedestrianCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kMiscObjects = typedObject->GetMiscObjects();
	            for(auto& kListItem: kMiscObjects)
	            {
	                if ( kListItem )
	                    ApplyMiscObjectCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kEnvironments = typedObject->GetEnvironments();
	            for(auto& kListItem: kEnvironments)
	            {
	                if ( kListItem )
	                    ApplyEnvironmentCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kManeuvers = typedObject->GetManeuvers();
	            for(auto& kListItem: kManeuvers)
	            {
	                if ( kListItem )
	                    ApplyManeuverCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kTrajectories = typedObject->GetTrajectories();
	            for(auto& kListItem: kTrajectories)
	            {
	                if ( kListItem )
	                    ApplyTrajectoryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kRoutes = typedObject->GetRoutes();
	            for(auto& kListItem: kRoutes)
	            {
	                if ( kListItem )
	                    ApplyRouteCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyCatalogDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogDefinition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICatalogDefinition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCatalog = typedObject->GetCatalog();
	            if ( kCatalog)
	            {
	                ApplyCatalogCheckerRules(messageLogger, kCatalog, contextMode);
	            }
	        }
   	        void ApplyCatalogLocationsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogLocations).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICatalogLocations>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleCatalog = typedObject->GetVehicleCatalog();
	            if ( kVehicleCatalog)
	            {
	                ApplyVehicleCatalogLocationCheckerRules(messageLogger, kVehicleCatalog, contextMode);
	            }
	            const auto kControllerCatalog = typedObject->GetControllerCatalog();
	            if ( kControllerCatalog)
	            {
	                ApplyControllerCatalogLocationCheckerRules(messageLogger, kControllerCatalog, contextMode);
	            }
	            const auto kPedestrianCatalog = typedObject->GetPedestrianCatalog();
	            if ( kPedestrianCatalog)
	            {
	                ApplyPedestrianCatalogLocationCheckerRules(messageLogger, kPedestrianCatalog, contextMode);
	            }
	            const auto kMiscObjectCatalog = typedObject->GetMiscObjectCatalog();
	            if ( kMiscObjectCatalog)
	            {
	                ApplyMiscObjectCatalogLocationCheckerRules(messageLogger, kMiscObjectCatalog, contextMode);
	            }
	            const auto kEnvironmentCatalog = typedObject->GetEnvironmentCatalog();
	            if ( kEnvironmentCatalog)
	            {
	                ApplyEnvironmentCatalogLocationCheckerRules(messageLogger, kEnvironmentCatalog, contextMode);
	            }
	            const auto kManeuverCatalog = typedObject->GetManeuverCatalog();
	            if ( kManeuverCatalog)
	            {
	                ApplyManeuverCatalogLocationCheckerRules(messageLogger, kManeuverCatalog, contextMode);
	            }
	            const auto kTrajectoryCatalog = typedObject->GetTrajectoryCatalog();
	            if ( kTrajectoryCatalog)
	            {
	                ApplyTrajectoryCatalogLocationCheckerRules(messageLogger, kTrajectoryCatalog, contextMode);
	            }
	            const auto kRouteCatalog = typedObject->GetRouteCatalog();
	            if ( kRouteCatalog)
	            {
	                ApplyRouteCatalogLocationCheckerRules(messageLogger, kRouteCatalog, contextMode);
	            }
	        }
   	        void ApplyCatalogReferenceCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogReference).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICatalogReference>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterAssignments = typedObject->GetParameterAssignments();
	            for(auto& kListItem: kParameterAssignments)
	            {
	                if ( kListItem )
	                    ApplyParameterAssignmentCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyCenterCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICenter).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICenter>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyCentralSwarmObjectCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICentralSwarmObject>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyClothoidCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoid).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IClothoid>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyClothoidSplineCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoidSpline).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IClothoidSpline>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSegments = typedObject->GetSegments();
	            for(auto& kListItem: kSegments)
	            {
	                if ( kListItem )
	                    ApplyClothoidSplineSegmentCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyClothoidSplineSegmentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoidSplineSegment).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IClothoidSplineSegment>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPositionStart = typedObject->GetPositionStart();
	            if ( kPositionStart)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPositionStart, contextMode);
	            }
	        }
   	        void ApplyCollisionConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICollisionCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICollisionCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityRef = typedObject->GetEntityRef();
	            if ( kEntityRef)
	            {
	                ApplyEntityRefCheckerRules(messageLogger, kEntityRef, contextMode);
	            }
	            const auto kByType = typedObject->GetByType();
	            if ( kByType)
	            {
	                ApplyByObjectTypeCheckerRules(messageLogger, kByType, contextMode);
	            }
	        }
   	        void ApplyColorCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IColor).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IColor>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kColorRgb = typedObject->GetColorRgb();
	            if ( kColorRgb)
	            {
	                ApplyColorRgbCheckerRules(messageLogger, kColorRgb, contextMode);
	            }
	            const auto kColorCmyk = typedObject->GetColorCmyk();
	            if ( kColorCmyk)
	            {
	                ApplyColorCmykCheckerRules(messageLogger, kColorCmyk, contextMode);
	            }
	        }
   	        void ApplyColorCmykCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IColorCmyk).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IColorCmyk>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyColorRgbCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IColorRgb).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IColorRgb>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyComponentAnimationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IComponentAnimation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IComponentAnimation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleComponent = typedObject->GetVehicleComponent();
	            if ( kVehicleComponent)
	            {
	                ApplyVehicleComponentCheckerRules(messageLogger, kVehicleComponent, contextMode);
	            }
	            const auto kUserDefinedComponent = typedObject->GetUserDefinedComponent();
	            if ( kUserDefinedComponent)
	            {
	                ApplyUserDefinedComponentCheckerRules(messageLogger, kUserDefinedComponent, contextMode);
	            }
	        }
   	        void ApplyConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kByEntityCondition = typedObject->GetByEntityCondition();
	            if ( kByEntityCondition)
	            {
	                ApplyByEntityConditionCheckerRules(messageLogger, kByEntityCondition, contextMode);
	            }
	            const auto kByValueCondition = typedObject->GetByValueCondition();
	            if ( kByValueCondition)
	            {
	                ApplyByValueConditionCheckerRules(messageLogger, kByValueCondition, contextMode);
	            }
	        }
   	        void ApplyConditionGroupCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConditionGroup).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IConditionGroup>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kConditions = typedObject->GetConditions();
	            for(auto& kListItem: kConditions)
	            {
	                if ( kListItem )
	                    ApplyConditionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyConnectTrailerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConnectTrailerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IConnectTrailerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyControlPointCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControlPoint).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IControlPoint>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyControllerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IController).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IController>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IControllerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAssignControllerAction = typedObject->GetAssignControllerAction();
	            if ( kAssignControllerAction)
	            {
	                ApplyAssignControllerActionCheckerRules(messageLogger, kAssignControllerAction, contextMode);
	            }
	            const auto kOverrideControllerValueAction = typedObject->GetOverrideControllerValueAction();
	            if ( kOverrideControllerValueAction)
	            {
	                ApplyOverrideControllerValueActionCheckerRules(messageLogger, kOverrideControllerValueAction, contextMode);
	            }
	            const auto kActivateControllerAction = typedObject->GetActivateControllerAction();
	            if ( kActivateControllerAction)
	            {
	                ApplyActivateControllerActionCheckerRules(messageLogger, kActivateControllerAction, contextMode);
	            }
	        }
   	        void ApplyControllerCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IControllerCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyControllerDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IControllerDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kControllerDistributionEntries = typedObject->GetControllerDistributionEntries();
	            for(auto& kListItem: kControllerDistributionEntries)
	            {
	                if ( kListItem )
	                    ApplyControllerDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyControllerDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IControllerDistributionEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kController = typedObject->GetController();
	            if ( kController)
	            {
	                ApplyControllerCheckerRules(messageLogger, kController, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	        }
   	        void ApplyCustomCommandActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomCommandAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICustomCommandAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyCustomContentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomContent).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ICustomContent>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDeleteEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeleteEntityAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDeterministicCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministic).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministic>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDeterministicParameterDistributions = typedObject->GetDeterministicParameterDistributions();
	            for(auto& kListItem: kDeterministicParameterDistributions)
	            {
	                if ( kListItem )
	                    ApplyDeterministicParameterDistributionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyDeterministicMultiParameterDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministicMultiParameterDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministicMultiParameterDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDeterministicMultiParameterDistributionType = typedObject->GetDeterministicMultiParameterDistributionType();
	            if ( kDeterministicMultiParameterDistributionType)
	            {
	                ApplyDeterministicMultiParameterDistributionTypeCheckerRules(messageLogger, kDeterministicMultiParameterDistributionType, contextMode);
	            }
	        }
   	        void ApplyDeterministicMultiParameterDistributionTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministicMultiParameterDistributionType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministicMultiParameterDistributionType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kValueSetDistribution = typedObject->GetValueSetDistribution();
	            if ( kValueSetDistribution)
	            {
	                ApplyValueSetDistributionCheckerRules(messageLogger, kValueSetDistribution, contextMode);
	            }
	        }
   	        void ApplyDeterministicParameterDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministicParameterDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministicParameterDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDeterministicMultiParameterDistribution = typedObject->GetDeterministicMultiParameterDistribution();
	            if ( kDeterministicMultiParameterDistribution)
	            {
	                ApplyDeterministicMultiParameterDistributionCheckerRules(messageLogger, kDeterministicMultiParameterDistribution, contextMode);
	            }
	            const auto kDeterministicSingleParameterDistribution = typedObject->GetDeterministicSingleParameterDistribution();
	            if ( kDeterministicSingleParameterDistribution)
	            {
	                ApplyDeterministicSingleParameterDistributionCheckerRules(messageLogger, kDeterministicSingleParameterDistribution, contextMode);
	            }
	        }
   	        void ApplyDeterministicSingleParameterDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministicSingleParameterDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministicSingleParameterDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDeterministicSingleParameterDistributionType = typedObject->GetDeterministicSingleParameterDistributionType();
	            if ( kDeterministicSingleParameterDistributionType)
	            {
	                ApplyDeterministicSingleParameterDistributionTypeCheckerRules(messageLogger, kDeterministicSingleParameterDistributionType, contextMode);
	            }
	        }
   	        void ApplyDeterministicSingleParameterDistributionTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeterministicSingleParameterDistributionType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDeterministicSingleParameterDistributionType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDistributionSet = typedObject->GetDistributionSet();
	            if ( kDistributionSet)
	            {
	                ApplyDistributionSetCheckerRules(messageLogger, kDistributionSet, contextMode);
	            }
	            const auto kDistributionRange = typedObject->GetDistributionRange();
	            if ( kDistributionRange)
	            {
	                ApplyDistributionRangeCheckerRules(messageLogger, kDistributionRange, contextMode);
	            }
	            const auto kUserDefinedDistribution = typedObject->GetUserDefinedDistribution();
	            if ( kUserDefinedDistribution)
	            {
	                ApplyUserDefinedDistributionCheckerRules(messageLogger, kUserDefinedDistribution, contextMode);
	            }
	        }
   	        void ApplyDimensionsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDimensions).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDimensions>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDirectionOfTravelDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectionOfTravelDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDirectionOfTravelDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDirectoryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectory).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDirectory>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDisconnectTrailerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDisconnectTrailerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDisconnectTrailerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistanceCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDistanceCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyDistributionDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistributionDefinition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDistributionDefinition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDeterministic = typedObject->GetDeterministic();
	            if ( kDeterministic)
	            {
	                ApplyDeterministicCheckerRules(messageLogger, kDeterministic, contextMode);
	            }
	            const auto kStochastic = typedObject->GetStochastic();
	            if ( kStochastic)
	            {
	                ApplyStochasticCheckerRules(messageLogger, kStochastic, contextMode);
	            }
	        }
   	        void ApplyDistributionRangeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistributionRange).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDistributionRange>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyDistributionSetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistributionSet).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDistributionSet>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kElements = typedObject->GetElements();
	            for(auto& kListItem: kElements)
	            {
	                if ( kListItem )
	                    ApplyDistributionSetElementCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyDistributionSetElementCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistributionSetElement).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDistributionSetElement>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyDomeImageCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDomeImage).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDomeImage>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDomeFile = typedObject->GetDomeFile();
	            if ( kDomeFile)
	            {
	                ApplyFileCheckerRules(messageLogger, kDomeFile, contextMode);
	            }
	        }
   	        void ApplyDynamicConstraintsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDynamicConstraints).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IDynamicConstraints>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyEndOfRoadConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEndOfRoadCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntities).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntities>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kScenarioObjects = typedObject->GetScenarioObjects();
	            for(auto& kListItem: kScenarioObjects)
	            {
	                if ( kListItem )
	                    ApplyScenarioObjectCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kEntitySelections = typedObject->GetEntitySelections();
	            for(auto& kListItem: kEntitySelections)
	            {
	                if ( kListItem )
	                    ApplyEntitySelectionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyEntityActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAddEntityAction = typedObject->GetAddEntityAction();
	            if ( kAddEntityAction)
	            {
	                ApplyAddEntityActionCheckerRules(messageLogger, kAddEntityAction, contextMode);
	            }
	            const auto kDeleteEntityAction = typedObject->GetDeleteEntityAction();
	            if ( kDeleteEntityAction)
	            {
	                ApplyDeleteEntityActionCheckerRules(messageLogger, kDeleteEntityAction, contextMode);
	            }
	        }
   	        void ApplyEntityConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEndOfRoadCondition = typedObject->GetEndOfRoadCondition();
	            if ( kEndOfRoadCondition)
	            {
	                ApplyEndOfRoadConditionCheckerRules(messageLogger, kEndOfRoadCondition, contextMode);
	            }
	            const auto kCollisionCondition = typedObject->GetCollisionCondition();
	            if ( kCollisionCondition)
	            {
	                ApplyCollisionConditionCheckerRules(messageLogger, kCollisionCondition, contextMode);
	            }
	            const auto kOffroadCondition = typedObject->GetOffroadCondition();
	            if ( kOffroadCondition)
	            {
	                ApplyOffroadConditionCheckerRules(messageLogger, kOffroadCondition, contextMode);
	            }
	            const auto kTimeHeadwayCondition = typedObject->GetTimeHeadwayCondition();
	            if ( kTimeHeadwayCondition)
	            {
	                ApplyTimeHeadwayConditionCheckerRules(messageLogger, kTimeHeadwayCondition, contextMode);
	            }
	            const auto kTimeToCollisionCondition = typedObject->GetTimeToCollisionCondition();
	            if ( kTimeToCollisionCondition)
	            {
	                ApplyTimeToCollisionConditionCheckerRules(messageLogger, kTimeToCollisionCondition, contextMode);
	            }
	            const auto kAccelerationCondition = typedObject->GetAccelerationCondition();
	            if ( kAccelerationCondition)
	            {
	                ApplyAccelerationConditionCheckerRules(messageLogger, kAccelerationCondition, contextMode);
	            }
	            const auto kStandStillCondition = typedObject->GetStandStillCondition();
	            if ( kStandStillCondition)
	            {
	                ApplyStandStillConditionCheckerRules(messageLogger, kStandStillCondition, contextMode);
	            }
	            const auto kSpeedCondition = typedObject->GetSpeedCondition();
	            if ( kSpeedCondition)
	            {
	                ApplySpeedConditionCheckerRules(messageLogger, kSpeedCondition, contextMode);
	            }
	            const auto kRelativeSpeedCondition = typedObject->GetRelativeSpeedCondition();
	            if ( kRelativeSpeedCondition)
	            {
	                ApplyRelativeSpeedConditionCheckerRules(messageLogger, kRelativeSpeedCondition, contextMode);
	            }
	            const auto kTraveledDistanceCondition = typedObject->GetTraveledDistanceCondition();
	            if ( kTraveledDistanceCondition)
	            {
	                ApplyTraveledDistanceConditionCheckerRules(messageLogger, kTraveledDistanceCondition, contextMode);
	            }
	            const auto kReachPositionCondition = typedObject->GetReachPositionCondition();
	            if ( kReachPositionCondition)
	            {
	                ApplyReachPositionConditionCheckerRules(messageLogger, kReachPositionCondition, contextMode);
	            }
	            const auto kDistanceCondition = typedObject->GetDistanceCondition();
	            if ( kDistanceCondition)
	            {
	                ApplyDistanceConditionCheckerRules(messageLogger, kDistanceCondition, contextMode);
	            }
	            const auto kRelativeDistanceCondition = typedObject->GetRelativeDistanceCondition();
	            if ( kRelativeDistanceCondition)
	            {
	                ApplyRelativeDistanceConditionCheckerRules(messageLogger, kRelativeDistanceCondition, contextMode);
	            }
	            const auto kRelativeClearanceCondition = typedObject->GetRelativeClearanceCondition();
	            if ( kRelativeClearanceCondition)
	            {
	                ApplyRelativeClearanceConditionCheckerRules(messageLogger, kRelativeClearanceCondition, contextMode);
	            }
	            const auto kAngleCondition = typedObject->GetAngleCondition();
	            if ( kAngleCondition)
	            {
	                ApplyAngleConditionCheckerRules(messageLogger, kAngleCondition, contextMode);
	            }
	            const auto kRelativeAngleCondition = typedObject->GetRelativeAngleCondition();
	            if ( kRelativeAngleCondition)
	            {
	                ApplyRelativeAngleConditionCheckerRules(messageLogger, kRelativeAngleCondition, contextMode);
	            }
	        }
   	        void ApplyEntityDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityDistributionEntry = typedObject->GetEntityDistributionEntry();
	            for(auto& kListItem: kEntityDistributionEntry)
	            {
	                if ( kListItem )
	                    ApplyEntityDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyEntityDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityDistributionEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityDistributionEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kScenarioObjectTemplate = typedObject->GetScenarioObjectTemplate();
	            if ( kScenarioObjectTemplate)
	            {
	                ApplyScenarioObjectTemplateCheckerRules(messageLogger, kScenarioObjectTemplate, contextMode);
	            }
	        }
   	        void ApplyEntityObjectCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityObject).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityObject>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	            const auto kVehicle = typedObject->GetVehicle();
	            if ( kVehicle)
	            {
	                ApplyVehicleCheckerRules(messageLogger, kVehicle, contextMode);
	            }
	            const auto kPedestrian = typedObject->GetPedestrian();
	            if ( kPedestrian)
	            {
	                ApplyPedestrianCheckerRules(messageLogger, kPedestrian, contextMode);
	            }
	            const auto kMiscObject = typedObject->GetMiscObject();
	            if ( kMiscObject)
	            {
	                ApplyMiscObjectCheckerRules(messageLogger, kMiscObject, contextMode);
	            }
	            const auto kExternalObjectReference = typedObject->GetExternalObjectReference();
	            if ( kExternalObjectReference)
	            {
	                ApplyExternalObjectReferenceCheckerRules(messageLogger, kExternalObjectReference, contextMode);
	            }
	        }
   	        void ApplyEntityRefCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityRef).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntityRef>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyEntitySelectionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntitySelection).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEntitySelection>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kMembers = typedObject->GetMembers();
	            if ( kMembers)
	            {
	                ApplySelectedEntitiesCheckerRules(messageLogger, kMembers, contextMode);
	            }
	        }
   	        void ApplyEnvironmentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironment).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEnvironment>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kTimeOfDay = typedObject->GetTimeOfDay();
	            if ( kTimeOfDay)
	            {
	                ApplyTimeOfDayCheckerRules(messageLogger, kTimeOfDay, contextMode);
	            }
	            const auto kWeather = typedObject->GetWeather();
	            if ( kWeather)
	            {
	                ApplyWeatherCheckerRules(messageLogger, kWeather, contextMode);
	            }
	            const auto kRoadCondition = typedObject->GetRoadCondition();
	            if ( kRoadCondition)
	            {
	                ApplyRoadConditionCheckerRules(messageLogger, kRoadCondition, contextMode);
	            }
	        }
   	        void ApplyEnvironmentActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEnvironmentAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEnvironment = typedObject->GetEnvironment();
	            if ( kEnvironment)
	            {
	                ApplyEnvironmentCheckerRules(messageLogger, kEnvironment, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	        }
   	        void ApplyEnvironmentCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEnvironmentCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyEventCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEvent).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IEvent>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kActions = typedObject->GetActions();
	            for(auto& kListItem: kActions)
	            {
	                if ( kListItem )
	                    ApplyActionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kStartTrigger = typedObject->GetStartTrigger();
	            if ( kStartTrigger)
	            {
	                ApplyTriggerCheckerRules(messageLogger, kStartTrigger, contextMode);
	            }
	        }
   	        void ApplyExternalObjectReferenceCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IExternalObjectReference).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IExternalObjectReference>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyFileCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFile).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IFile>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyFileHeaderCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFileHeader).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IFileHeader>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLicense = typedObject->GetLicense();
	            if ( kLicense)
	            {
	                ApplyLicenseCheckerRules(messageLogger, kLicense, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyFinalSpeedCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFinalSpeed).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IFinalSpeed>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAbsoluteSpeed = typedObject->GetAbsoluteSpeed();
	            if ( kAbsoluteSpeed)
	            {
	                ApplyAbsoluteSpeedCheckerRules(messageLogger, kAbsoluteSpeed, contextMode);
	            }
	            const auto kRelativeSpeedToMaster = typedObject->GetRelativeSpeedToMaster();
	            if ( kRelativeSpeedToMaster)
	            {
	                ApplyRelativeSpeedToMasterCheckerRules(messageLogger, kRelativeSpeedToMaster, contextMode);
	            }
	        }
   	        void ApplyFogCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFog).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IFog>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kBoundingBox = typedObject->GetBoundingBox();
	            if ( kBoundingBox)
	            {
	                ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
	            }
	        }
   	        void ApplyFollowTrajectoryActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IFollowTrajectoryAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrajectory = typedObject->GetTrajectory();
	            if ( kTrajectory)
	            {
	                ApplyTrajectoryCheckerRules(messageLogger, kTrajectory, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	            const auto kTimeReference = typedObject->GetTimeReference();
	            if ( kTimeReference)
	            {
	                ApplyTimeReferenceCheckerRules(messageLogger, kTimeReference, contextMode);
	            }
	            const auto kTrajectoryFollowingMode = typedObject->GetTrajectoryFollowingMode();
	            if ( kTrajectoryFollowingMode)
	            {
	                ApplyTrajectoryFollowingModeCheckerRules(messageLogger, kTrajectoryFollowingMode, contextMode);
	            }
	            const auto kTrajectoryRef = typedObject->GetTrajectoryRef();
	            if ( kTrajectoryRef)
	            {
	                ApplyTrajectoryRefCheckerRules(messageLogger, kTrajectoryRef, contextMode);
	            }
	        }
   	        void ApplyGearCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGear).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IGear>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kManualGear = typedObject->GetManualGear();
	            if ( kManualGear)
	            {
	                ApplyManualGearCheckerRules(messageLogger, kManualGear, contextMode);
	            }
	            const auto kAutomaticGear = typedObject->GetAutomaticGear();
	            if ( kAutomaticGear)
	            {
	                ApplyAutomaticGearCheckerRules(messageLogger, kAutomaticGear, contextMode);
	            }
	        }
   	        void ApplyGeoPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGeoPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyGlobalActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGlobalAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IGlobalAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEnvironmentAction = typedObject->GetEnvironmentAction();
	            if ( kEnvironmentAction)
	            {
	                ApplyEnvironmentActionCheckerRules(messageLogger, kEnvironmentAction, contextMode);
	            }
	            const auto kEntityAction = typedObject->GetEntityAction();
	            if ( kEntityAction)
	            {
	                ApplyEntityActionCheckerRules(messageLogger, kEntityAction, contextMode);
	            }
	            const auto kInfrastructureAction = typedObject->GetInfrastructureAction();
	            if ( kInfrastructureAction)
	            {
	                ApplyInfrastructureActionCheckerRules(messageLogger, kInfrastructureAction, contextMode);
	            }
	            const auto kSetMonitorAction = typedObject->GetSetMonitorAction();
	            if ( kSetMonitorAction)
	            {
	                ApplySetMonitorActionCheckerRules(messageLogger, kSetMonitorAction, contextMode);
	            }
	            const auto kParameterAction = typedObject->GetParameterAction();
	            if ( kParameterAction)
	            {
	                ApplyParameterActionCheckerRules(messageLogger, kParameterAction, contextMode);
	            }
	            const auto kTrafficAction = typedObject->GetTrafficAction();
	            if ( kTrafficAction)
	            {
	                ApplyTrafficActionCheckerRules(messageLogger, kTrafficAction, contextMode);
	            }
	            const auto kVariableAction = typedObject->GetVariableAction();
	            if ( kVariableAction)
	            {
	                ApplyVariableActionCheckerRules(messageLogger, kVariableAction, contextMode);
	            }
	        }
   	        void ApplyHistogramCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IHistogram).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IHistogram>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kBins = typedObject->GetBins();
	            for(auto& kListItem: kBins)
	            {
	                if ( kListItem )
	                    ApplyHistogramBinCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyHistogramBinCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IHistogramBin).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IHistogramBin>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyInRoutePositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInRoutePosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IInRoutePosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kFromCurrentEntity = typedObject->GetFromCurrentEntity();
	            if ( kFromCurrentEntity)
	            {
	                ApplyPositionOfCurrentEntityCheckerRules(messageLogger, kFromCurrentEntity, contextMode);
	            }
	            const auto kFromRoadCoordinates = typedObject->GetFromRoadCoordinates();
	            if ( kFromRoadCoordinates)
	            {
	                ApplyPositionInRoadCoordinatesCheckerRules(messageLogger, kFromRoadCoordinates, contextMode);
	            }
	            const auto kFromLaneCoordinates = typedObject->GetFromLaneCoordinates();
	            if ( kFromLaneCoordinates)
	            {
	                ApplyPositionInLaneCoordinatesCheckerRules(messageLogger, kFromLaneCoordinates, contextMode);
	            }
	        }
   	        void ApplyInfrastructureActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInfrastructureAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IInfrastructureAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficSignalAction = typedObject->GetTrafficSignalAction();
	            if ( kTrafficSignalAction)
	            {
	                ApplyTrafficSignalActionCheckerRules(messageLogger, kTrafficSignalAction, contextMode);
	            }
	        }
   	        void ApplyInitCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInit).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IInit>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kActions = typedObject->GetActions();
	            if ( kActions)
	            {
	                ApplyInitActionsCheckerRules(messageLogger, kActions, contextMode);
	            }
	        }
   	        void ApplyInitActionsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInitActions).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IInitActions>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kGlobalActions = typedObject->GetGlobalActions();
	            for(auto& kListItem: kGlobalActions)
	            {
	                if ( kListItem )
	                    ApplyGlobalActionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kUserDefinedActions = typedObject->GetUserDefinedActions();
	            for(auto& kListItem: kUserDefinedActions)
	            {
	                if ( kListItem )
	                    ApplyUserDefinedActionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kPrivates = typedObject->GetPrivates();
	            for(auto& kListItem: kPrivates)
	            {
	                if ( kListItem )
	                    ApplyPrivateCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyKnotCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IKnot).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IKnot>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyLaneCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILane).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILane>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyLaneChangeActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILaneChangeAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLaneChangeActionDynamics = typedObject->GetLaneChangeActionDynamics();
	            if ( kLaneChangeActionDynamics)
	            {
	                ApplyTransitionDynamicsCheckerRules(messageLogger, kLaneChangeActionDynamics, contextMode);
	            }
	            const auto kLaneChangeTarget = typedObject->GetLaneChangeTarget();
	            if ( kLaneChangeTarget)
	            {
	                ApplyLaneChangeTargetCheckerRules(messageLogger, kLaneChangeTarget, contextMode);
	            }
	        }
   	        void ApplyLaneChangeTargetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILaneChangeTarget>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRelativeTargetLane = typedObject->GetRelativeTargetLane();
	            if ( kRelativeTargetLane)
	            {
	                ApplyRelativeTargetLaneCheckerRules(messageLogger, kRelativeTargetLane, contextMode);
	            }
	            const auto kAbsoluteTargetLane = typedObject->GetAbsoluteTargetLane();
	            if ( kAbsoluteTargetLane)
	            {
	                ApplyAbsoluteTargetLaneCheckerRules(messageLogger, kAbsoluteTargetLane, contextMode);
	            }
	        }
   	        void ApplyLaneOffsetActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILaneOffsetAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLaneOffsetActionDynamics = typedObject->GetLaneOffsetActionDynamics();
	            if ( kLaneOffsetActionDynamics)
	            {
	                ApplyLaneOffsetActionDynamicsCheckerRules(messageLogger, kLaneOffsetActionDynamics, contextMode);
	            }
	            const auto kLaneOffsetTarget = typedObject->GetLaneOffsetTarget();
	            if ( kLaneOffsetTarget)
	            {
	                ApplyLaneOffsetTargetCheckerRules(messageLogger, kLaneOffsetTarget, contextMode);
	            }
	        }
   	        void ApplyLaneOffsetActionDynamicsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILaneOffsetActionDynamics>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyLaneOffsetTargetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILaneOffsetTarget>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRelativeTargetLaneOffset = typedObject->GetRelativeTargetLaneOffset();
	            if ( kRelativeTargetLaneOffset)
	            {
	                ApplyRelativeTargetLaneOffsetCheckerRules(messageLogger, kRelativeTargetLaneOffset, contextMode);
	            }
	            const auto kAbsoluteTargetLaneOffset = typedObject->GetAbsoluteTargetLaneOffset();
	            if ( kAbsoluteTargetLaneOffset)
	            {
	                ApplyAbsoluteTargetLaneOffsetCheckerRules(messageLogger, kAbsoluteTargetLaneOffset, contextMode);
	            }
	        }
   	        void ApplyLanePositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILanePosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILanePosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyLateralActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILateralAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLaneChangeAction = typedObject->GetLaneChangeAction();
	            if ( kLaneChangeAction)
	            {
	                ApplyLaneChangeActionCheckerRules(messageLogger, kLaneChangeAction, contextMode);
	            }
	            const auto kLaneOffsetAction = typedObject->GetLaneOffsetAction();
	            if ( kLaneOffsetAction)
	            {
	                ApplyLaneOffsetActionCheckerRules(messageLogger, kLaneOffsetAction, contextMode);
	            }
	            const auto kLateralDistanceAction = typedObject->GetLateralDistanceAction();
	            if ( kLateralDistanceAction)
	            {
	                ApplyLateralDistanceActionCheckerRules(messageLogger, kLateralDistanceAction, contextMode);
	            }
	        }
   	        void ApplyLateralDistanceActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILateralDistanceAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDynamicConstraints = typedObject->GetDynamicConstraints();
	            if ( kDynamicConstraints)
	            {
	                ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints, contextMode);
	            }
	        }
   	        void ApplyLicenseCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILicense).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILicense>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyLightStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILightState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILightState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kColor = typedObject->GetColor();
	            if ( kColor)
	            {
	                ApplyColorCheckerRules(messageLogger, kColor, contextMode);
	            }
	        }
   	        void ApplyLightStateActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILightStateAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILightStateAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLightType = typedObject->GetLightType();
	            if ( kLightType)
	            {
	                ApplyLightTypeCheckerRules(messageLogger, kLightType, contextMode);
	            }
	            const auto kLightState = typedObject->GetLightState();
	            if ( kLightState)
	            {
	                ApplyLightStateCheckerRules(messageLogger, kLightState, contextMode);
	            }
	        }
   	        void ApplyLightTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILightType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILightType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleLight = typedObject->GetVehicleLight();
	            if ( kVehicleLight)
	            {
	                ApplyVehicleLightCheckerRules(messageLogger, kVehicleLight, contextMode);
	            }
	            const auto kUserDefinedLight = typedObject->GetUserDefinedLight();
	            if ( kUserDefinedLight)
	            {
	                ApplyUserDefinedLightCheckerRules(messageLogger, kUserDefinedLight, contextMode);
	            }
	        }
   	        void ApplyLogNormalDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILogNormalDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILogNormalDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyLongitudinalActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILongitudinalAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSpeedAction = typedObject->GetSpeedAction();
	            if ( kSpeedAction)
	            {
	                ApplySpeedActionCheckerRules(messageLogger, kSpeedAction, contextMode);
	            }
	            const auto kLongitudinalDistanceAction = typedObject->GetLongitudinalDistanceAction();
	            if ( kLongitudinalDistanceAction)
	            {
	                ApplyLongitudinalDistanceActionCheckerRules(messageLogger, kLongitudinalDistanceAction, contextMode);
	            }
	            const auto kSpeedProfileAction = typedObject->GetSpeedProfileAction();
	            if ( kSpeedProfileAction)
	            {
	                ApplySpeedProfileActionCheckerRules(messageLogger, kSpeedProfileAction, contextMode);
	            }
	        }
   	        void ApplyLongitudinalDistanceActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ILongitudinalDistanceAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDynamicConstraints = typedObject->GetDynamicConstraints();
	            if ( kDynamicConstraints)
	            {
	                ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints, contextMode);
	            }
	        }
   	        void ApplyManeuverCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuver).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IManeuver>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kEvents = typedObject->GetEvents();
	            for(auto& kListItem: kEvents)
	            {
	                if ( kListItem )
	                    ApplyEventCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyManeuverCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IManeuverCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyManeuverGroupCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverGroup).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IManeuverGroup>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kActors = typedObject->GetActors();
	            if ( kActors)
	            {
	                ApplyActorsCheckerRules(messageLogger, kActors, contextMode);
	            }
	            const auto kCatalogReferences = typedObject->GetCatalogReferences();
	            for(auto& kListItem: kCatalogReferences)
	            {
	                if ( kListItem )
	                    ApplyCatalogReferenceCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kManeuvers = typedObject->GetManeuvers();
	            for(auto& kListItem: kManeuvers)
	            {
	                if ( kListItem )
	                    ApplyManeuverCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyManualGearCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManualGear).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IManualGear>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyMiscObjectCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObject).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IMiscObject>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kBoundingBox = typedObject->GetBoundingBox();
	            if ( kBoundingBox)
	            {
	                ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyMiscObjectCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IMiscObjectCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyModifyRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IModifyRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IModifyRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAddValue = typedObject->GetAddValue();
	            if ( kAddValue)
	            {
	                ApplyParameterAddValueRuleCheckerRules(messageLogger, kAddValue, contextMode);
	            }
	            const auto kMultiplyByValue = typedObject->GetMultiplyByValue();
	            if ( kMultiplyByValue)
	            {
	                ApplyParameterMultiplyByValueRuleCheckerRules(messageLogger, kMultiplyByValue, contextMode);
	            }
	        }
   	        void ApplyMonitorDeclarationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMonitorDeclaration).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IMonitorDeclaration>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyNoneCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(INone).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<INone>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyNormalDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(INormalDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<INormalDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyNurbsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(INurbs).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<INurbs>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kControlPoints = typedObject->GetControlPoints();
	            for(auto& kListItem: kControlPoints)
	            {
	                if ( kListItem )
	                    ApplyControlPointCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kKnots = typedObject->GetKnots();
	            for(auto& kListItem: kKnots)
	            {
	                if ( kListItem )
	                    ApplyKnotCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyObjectControllerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IObjectController).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IObjectController>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	            const auto kController = typedObject->GetController();
	            if ( kController)
	            {
	                ApplyControllerCheckerRules(messageLogger, kController, contextMode);
	            }
	        }
   	        void ApplyOffroadConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOffroadCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOffroadCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyOpenScenarioCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenario).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOpenScenario>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kFileHeader = typedObject->GetFileHeader();
	            if ( kFileHeader)
	            {
	                ApplyFileHeaderCheckerRules(messageLogger, kFileHeader, contextMode);
	            }
	            const auto kOpenScenarioCategory = typedObject->GetOpenScenarioCategory();
	            if ( kOpenScenarioCategory)
	            {
	                ApplyOpenScenarioCategoryCheckerRules(messageLogger, kOpenScenarioCategory, contextMode);
	            }
	        }
   	        void ApplyOpenScenarioCategoryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOpenScenarioCategory>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kScenarioDefinition = typedObject->GetScenarioDefinition();
	            if ( kScenarioDefinition)
	            {
	                ApplyScenarioDefinitionCheckerRules(messageLogger, kScenarioDefinition, contextMode);
	            }
	            const auto kCatalogDefinition = typedObject->GetCatalogDefinition();
	            if ( kCatalogDefinition)
	            {
	                ApplyCatalogDefinitionCheckerRules(messageLogger, kCatalogDefinition, contextMode);
	            }
	            const auto kParameterValueDistributionDefinition = typedObject->GetParameterValueDistributionDefinition();
	            if ( kParameterValueDistributionDefinition)
	            {
	                ApplyParameterValueDistributionDefinitionCheckerRules(messageLogger, kParameterValueDistributionDefinition, contextMode);
	            }
	        }
   	        void ApplyOrientationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOrientation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOrientation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyOverrideBrakeActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideBrakeAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kBrakeInput = typedObject->GetBrakeInput();
	            if ( kBrakeInput)
	            {
	                ApplyBrakeInputCheckerRules(messageLogger, kBrakeInput, contextMode);
	            }
	        }
   	        void ApplyOverrideClutchActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideClutchAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyOverrideControllerValueActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideControllerValueAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kThrottle = typedObject->GetThrottle();
	            if ( kThrottle)
	            {
	                ApplyOverrideThrottleActionCheckerRules(messageLogger, kThrottle, contextMode);
	            }
	            const auto kBrake = typedObject->GetBrake();
	            if ( kBrake)
	            {
	                ApplyOverrideBrakeActionCheckerRules(messageLogger, kBrake, contextMode);
	            }
	            const auto kClutch = typedObject->GetClutch();
	            if ( kClutch)
	            {
	                ApplyOverrideClutchActionCheckerRules(messageLogger, kClutch, contextMode);
	            }
	            const auto kParkingBrake = typedObject->GetParkingBrake();
	            if ( kParkingBrake)
	            {
	                ApplyOverrideParkingBrakeActionCheckerRules(messageLogger, kParkingBrake, contextMode);
	            }
	            const auto kSteeringWheel = typedObject->GetSteeringWheel();
	            if ( kSteeringWheel)
	            {
	                ApplyOverrideSteeringWheelActionCheckerRules(messageLogger, kSteeringWheel, contextMode);
	            }
	            const auto kGear = typedObject->GetGear();
	            if ( kGear)
	            {
	                ApplyOverrideGearActionCheckerRules(messageLogger, kGear, contextMode);
	            }
	        }
   	        void ApplyOverrideGearActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideGearAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideGearAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kGear = typedObject->GetGear();
	            if ( kGear)
	            {
	                ApplyGearCheckerRules(messageLogger, kGear, contextMode);
	            }
	        }
   	        void ApplyOverrideParkingBrakeActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideParkingBrakeAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kBrakeInput = typedObject->GetBrakeInput();
	            if ( kBrakeInput)
	            {
	                ApplyBrakeInputCheckerRules(messageLogger, kBrakeInput, contextMode);
	            }
	        }
   	        void ApplyOverrideSteeringWheelActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyOverrideThrottleActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IOverrideThrottleAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSetAction = typedObject->GetSetAction();
	            if ( kSetAction)
	            {
	                ApplyParameterSetActionCheckerRules(messageLogger, kSetAction, contextMode);
	            }
	            const auto kModifyAction = typedObject->GetModifyAction();
	            if ( kModifyAction)
	            {
	                ApplyParameterModifyActionCheckerRules(messageLogger, kModifyAction, contextMode);
	            }
	        }
   	        void ApplyParameterAddValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterAddValueRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterAssignmentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAssignment).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterAssignment>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterDeclarationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterDeclaration).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterDeclaration>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kConstraintGroups = typedObject->GetConstraintGroups();
	            for(auto& kListItem: kConstraintGroups)
	            {
	                if ( kListItem )
	                    ApplyValueConstraintGroupCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyParameterModifyActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterModifyAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterModifyAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRule = typedObject->GetRule();
	            if ( kRule)
	            {
	                ApplyModifyRuleCheckerRules(messageLogger, kRule, contextMode);
	            }
	        }
   	        void ApplyParameterMultiplyByValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterMultiplyByValueRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterSetActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterSetAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterSetAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyParameterValueDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterValueDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterValueDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kScenarioFile = typedObject->GetScenarioFile();
	            if ( kScenarioFile)
	            {
	                ApplyFileCheckerRules(messageLogger, kScenarioFile, contextMode);
	            }
	            const auto kDistributionDefinition = typedObject->GetDistributionDefinition();
	            if ( kDistributionDefinition)
	            {
	                ApplyDistributionDefinitionCheckerRules(messageLogger, kDistributionDefinition, contextMode);
	            }
	        }
   	        void ApplyParameterValueDistributionDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterValueDistributionDefinition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterValueDistributionDefinition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterValueDistribution = typedObject->GetParameterValueDistribution();
	            if ( kParameterValueDistribution)
	            {
	                ApplyParameterValueDistributionCheckerRules(messageLogger, kParameterValueDistribution, contextMode);
	            }
	        }
   	        void ApplyParameterValueSetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterValueSet).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IParameterValueSet>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterAssignments = typedObject->GetParameterAssignments();
	            for(auto& kListItem: kParameterAssignments)
	            {
	                if ( kListItem )
	                    ApplyParameterAssignmentCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPedestrianCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrian).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPedestrian>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kBoundingBox = typedObject->GetBoundingBox();
	            if ( kBoundingBox)
	            {
	                ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyPedestrianAnimationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianAnimation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPedestrianAnimation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kGestures = typedObject->GetGestures();
	            for(auto& kListItem: kGestures)
	            {
	                if ( kListItem )
	                    ApplyPedestrianGestureCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPedestrianCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPedestrianCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyPedestrianGestureCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianGesture).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPedestrianGesture>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPerformanceCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPerformance).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPerformance>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPhaseCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPhase).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPhase>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficSignalStates = typedObject->GetTrafficSignalStates();
	            for(auto& kListItem: kTrafficSignalStates)
	            {
	                if ( kListItem )
	                    ApplyTrafficSignalStateCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kTrafficSignalGroupState = typedObject->GetTrafficSignalGroupState();
	            if ( kTrafficSignalGroupState)
	            {
	                ApplyTrafficSignalGroupStateCheckerRules(messageLogger, kTrafficSignalGroupState, contextMode);
	            }
	        }
   	        void ApplyPoissonDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPoissonDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPoissonDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyPolygonCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolygon).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPolygon>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPositions = typedObject->GetPositions();
	            for(auto& kListItem: kPositions)
	            {
	                if ( kListItem )
	                    ApplyPositionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPolylineCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolyline).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPolyline>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVertices = typedObject->GetVertices();
	            for(auto& kListItem: kVertices)
	            {
	                if ( kListItem )
	                    ApplyVertexCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kWorldPosition = typedObject->GetWorldPosition();
	            if ( kWorldPosition)
	            {
	                ApplyWorldPositionCheckerRules(messageLogger, kWorldPosition, contextMode);
	            }
	            const auto kRelativeWorldPosition = typedObject->GetRelativeWorldPosition();
	            if ( kRelativeWorldPosition)
	            {
	                ApplyRelativeWorldPositionCheckerRules(messageLogger, kRelativeWorldPosition, contextMode);
	            }
	            const auto kRelativeObjectPosition = typedObject->GetRelativeObjectPosition();
	            if ( kRelativeObjectPosition)
	            {
	                ApplyRelativeObjectPositionCheckerRules(messageLogger, kRelativeObjectPosition, contextMode);
	            }
	            const auto kRoadPosition = typedObject->GetRoadPosition();
	            if ( kRoadPosition)
	            {
	                ApplyRoadPositionCheckerRules(messageLogger, kRoadPosition, contextMode);
	            }
	            const auto kRelativeRoadPosition = typedObject->GetRelativeRoadPosition();
	            if ( kRelativeRoadPosition)
	            {
	                ApplyRelativeRoadPositionCheckerRules(messageLogger, kRelativeRoadPosition, contextMode);
	            }
	            const auto kLanePosition = typedObject->GetLanePosition();
	            if ( kLanePosition)
	            {
	                ApplyLanePositionCheckerRules(messageLogger, kLanePosition, contextMode);
	            }
	            const auto kRelativeLanePosition = typedObject->GetRelativeLanePosition();
	            if ( kRelativeLanePosition)
	            {
	                ApplyRelativeLanePositionCheckerRules(messageLogger, kRelativeLanePosition, contextMode);
	            }
	            const auto kRoutePosition = typedObject->GetRoutePosition();
	            if ( kRoutePosition)
	            {
	                ApplyRoutePositionCheckerRules(messageLogger, kRoutePosition, contextMode);
	            }
	            const auto kGeoPosition = typedObject->GetGeoPosition();
	            if ( kGeoPosition)
	            {
	                ApplyGeoPositionCheckerRules(messageLogger, kGeoPosition, contextMode);
	            }
	            const auto kTrajectoryPosition = typedObject->GetTrajectoryPosition();
	            if ( kTrajectoryPosition)
	            {
	                ApplyTrajectoryPositionCheckerRules(messageLogger, kTrajectoryPosition, contextMode);
	            }
	        }
   	        void ApplyPositionInLaneCoordinatesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPositionInLaneCoordinates>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPositionInRoadCoordinatesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPositionInRoadCoordinates>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPositionOfCurrentEntityCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPositionOfCurrentEntity>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPrecipitationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrecipitation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPrecipitation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPrivateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivate).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPrivate>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPrivateActions = typedObject->GetPrivateActions();
	            for(auto& kListItem: kPrivateActions)
	            {
	                if ( kListItem )
	                    ApplyPrivateActionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPrivateActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivateAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IPrivateAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLongitudinalAction = typedObject->GetLongitudinalAction();
	            if ( kLongitudinalAction)
	            {
	                ApplyLongitudinalActionCheckerRules(messageLogger, kLongitudinalAction, contextMode);
	            }
	            const auto kLateralAction = typedObject->GetLateralAction();
	            if ( kLateralAction)
	            {
	                ApplyLateralActionCheckerRules(messageLogger, kLateralAction, contextMode);
	            }
	            const auto kVisibilityAction = typedObject->GetVisibilityAction();
	            if ( kVisibilityAction)
	            {
	                ApplyVisibilityActionCheckerRules(messageLogger, kVisibilityAction, contextMode);
	            }
	            const auto kSynchronizeAction = typedObject->GetSynchronizeAction();
	            if ( kSynchronizeAction)
	            {
	                ApplySynchronizeActionCheckerRules(messageLogger, kSynchronizeAction, contextMode);
	            }
	            const auto kActivateControllerAction = typedObject->GetActivateControllerAction();
	            if ( kActivateControllerAction)
	            {
	                ApplyActivateControllerActionCheckerRules(messageLogger, kActivateControllerAction, contextMode);
	            }
	            const auto kControllerAction = typedObject->GetControllerAction();
	            if ( kControllerAction)
	            {
	                ApplyControllerActionCheckerRules(messageLogger, kControllerAction, contextMode);
	            }
	            const auto kTeleportAction = typedObject->GetTeleportAction();
	            if ( kTeleportAction)
	            {
	                ApplyTeleportActionCheckerRules(messageLogger, kTeleportAction, contextMode);
	            }
	            const auto kRoutingAction = typedObject->GetRoutingAction();
	            if ( kRoutingAction)
	            {
	                ApplyRoutingActionCheckerRules(messageLogger, kRoutingAction, contextMode);
	            }
	            const auto kAppearanceAction = typedObject->GetAppearanceAction();
	            if ( kAppearanceAction)
	            {
	                ApplyAppearanceActionCheckerRules(messageLogger, kAppearanceAction, contextMode);
	            }
	            const auto kTrailerAction = typedObject->GetTrailerAction();
	            if ( kTrailerAction)
	            {
	                ApplyTrailerActionCheckerRules(messageLogger, kTrailerAction, contextMode);
	            }
	        }
   	        void ApplyProbabilityDistributionSetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProbabilityDistributionSet).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IProbabilityDistributionSet>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kElements = typedObject->GetElements();
	            for(auto& kListItem: kElements)
	            {
	                if ( kListItem )
	                    ApplyProbabilityDistributionSetElementCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyProbabilityDistributionSetElementCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProbabilityDistributionSetElement).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IProbabilityDistributionSetElement>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyPropertiesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperties).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IProperties>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kProperties = typedObject->GetProperties();
	            for(auto& kListItem: kProperties)
	            {
	                if ( kListItem )
	                    ApplyPropertyCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kFiles = typedObject->GetFiles();
	            for(auto& kListItem: kFiles)
	            {
	                if ( kListItem )
	                    ApplyFileCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kCustomContent = typedObject->GetCustomContent();
	            for(auto& kListItem: kCustomContent)
	            {
	                if ( kListItem )
	                    ApplyCustomContentCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyPropertyCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperty).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IProperty>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRandomRouteActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRandomRouteAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRandomRouteAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRangeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRange).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRange>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyReachPositionConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IReachPositionCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IReachPositionCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyRelativeAngleConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeAngleCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeAngleCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeClearanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeClearanceCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeClearanceCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRelativeLaneRange = typedObject->GetRelativeLaneRange();
	            for(auto& kListItem: kRelativeLaneRange)
	            {
	                if ( kListItem )
	                    ApplyRelativeLaneRangeCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kEntityRef = typedObject->GetEntityRef();
	            for(auto& kListItem: kEntityRef)
	            {
	                if ( kListItem )
	                    ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyRelativeDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeDistanceCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeLanePositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeLanePosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyRelativeLaneRangeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLaneRange).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeLaneRange>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeObjectPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeObjectPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyRelativeRoadPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeRoadPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyRelativeSpeedConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeSpeedCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeSpeedToMasterCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeSpeedToMaster>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSteadyState = typedObject->GetSteadyState();
	            if ( kSteadyState)
	            {
	                ApplySteadyStateCheckerRules(messageLogger, kSteadyState, contextMode);
	            }
	        }
   	        void ApplyRelativeTargetLaneCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeTargetLane>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeTargetLaneOffsetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeTargetLaneOffset>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeTargetSpeedCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeTargetSpeed>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyRelativeWorldPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRelativeWorldPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyRoadConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoadCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyRoadCursorCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCursor).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoadCursor>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLane = typedObject->GetLane();
	            for(auto& kListItem: kLane)
	            {
	                if ( kListItem )
	                    ApplyLaneCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyRoadNetworkCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadNetwork).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoadNetwork>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kLogicFile = typedObject->GetLogicFile();
	            if ( kLogicFile)
	            {
	                ApplyFileCheckerRules(messageLogger, kLogicFile, contextMode);
	            }
	            const auto kSceneGraphFile = typedObject->GetSceneGraphFile();
	            if ( kSceneGraphFile)
	            {
	                ApplyFileCheckerRules(messageLogger, kSceneGraphFile, contextMode);
	            }
	            const auto kTrafficSignals = typedObject->GetTrafficSignals();
	            for(auto& kListItem: kTrafficSignals)
	            {
	                if ( kListItem )
	                    ApplyTrafficSignalControllerCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kUsedArea = typedObject->GetUsedArea();
	            if ( kUsedArea)
	            {
	                ApplyUsedAreaCheckerRules(messageLogger, kUsedArea, contextMode);
	            }
	        }
   	        void ApplyRoadPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoadPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	        }
   	        void ApplyRoadRangeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadRange).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoadRange>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRoadCursor = typedObject->GetRoadCursor();
	            for(auto& kListItem: kRoadCursor)
	            {
	                if ( kListItem )
	                    ApplyRoadCursorCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyRouteCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoute).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoute>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kWaypoints = typedObject->GetWaypoints();
	            for(auto& kListItem: kWaypoints)
	            {
	                if ( kListItem )
	                    ApplyWaypointCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyRouteCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRouteCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyRoutePositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutePosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoutePosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRouteRef = typedObject->GetRouteRef();
	            if ( kRouteRef)
	            {
	                ApplyRouteRefCheckerRules(messageLogger, kRouteRef, contextMode);
	            }
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	            const auto kInRoutePosition = typedObject->GetInRoutePosition();
	            if ( kInRoutePosition)
	            {
	                ApplyInRoutePositionCheckerRules(messageLogger, kInRoutePosition, contextMode);
	            }
	        }
   	        void ApplyRouteRefCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteRef).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRouteRef>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRoute = typedObject->GetRoute();
	            if ( kRoute)
	            {
	                ApplyRouteCheckerRules(messageLogger, kRoute, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	        }
   	        void ApplyRoutingActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutingAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IRoutingAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAssignRouteAction = typedObject->GetAssignRouteAction();
	            if ( kAssignRouteAction)
	            {
	                ApplyAssignRouteActionCheckerRules(messageLogger, kAssignRouteAction, contextMode);
	            }
	            const auto kFollowTrajectoryAction = typedObject->GetFollowTrajectoryAction();
	            if ( kFollowTrajectoryAction)
	            {
	                ApplyFollowTrajectoryActionCheckerRules(messageLogger, kFollowTrajectoryAction, contextMode);
	            }
	            const auto kAcquirePositionAction = typedObject->GetAcquirePositionAction();
	            if ( kAcquirePositionAction)
	            {
	                ApplyAcquirePositionActionCheckerRules(messageLogger, kAcquirePositionAction, contextMode);
	            }
	            const auto kRandomRouteAction = typedObject->GetRandomRouteAction();
	            if ( kRandomRouteAction)
	            {
	                ApplyRandomRouteActionCheckerRules(messageLogger, kRandomRouteAction, contextMode);
	            }
	        }
   	        void ApplyScenarioDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioDefinition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IScenarioDefinition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kVariableDeclarations = typedObject->GetVariableDeclarations();
	            for(auto& kListItem: kVariableDeclarations)
	            {
	                if ( kListItem )
	                    ApplyVariableDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kMonitorDeclarations = typedObject->GetMonitorDeclarations();
	            for(auto& kListItem: kMonitorDeclarations)
	            {
	                if ( kListItem )
	                    ApplyMonitorDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kCatalogLocations = typedObject->GetCatalogLocations();
	            if ( kCatalogLocations)
	            {
	                ApplyCatalogLocationsCheckerRules(messageLogger, kCatalogLocations, contextMode);
	            }
	            const auto kRoadNetwork = typedObject->GetRoadNetwork();
	            if ( kRoadNetwork)
	            {
	                ApplyRoadNetworkCheckerRules(messageLogger, kRoadNetwork, contextMode);
	            }
	            const auto kEntities = typedObject->GetEntities();
	            if ( kEntities)
	            {
	                ApplyEntitiesCheckerRules(messageLogger, kEntities, contextMode);
	            }
	            const auto kStoryboard = typedObject->GetStoryboard();
	            if ( kStoryboard)
	            {
	                ApplyStoryboardCheckerRules(messageLogger, kStoryboard, contextMode);
	            }
	        }
   	        void ApplyScenarioObjectCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObject).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IScenarioObject>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityObject = typedObject->GetEntityObject();
	            if ( kEntityObject)
	            {
	                ApplyEntityObjectCheckerRules(messageLogger, kEntityObject, contextMode);
	            }
	            const auto kObjectController = typedObject->GetObjectController();
	            for(auto& kListItem: kObjectController)
	            {
	                if ( kListItem )
	                    ApplyObjectControllerCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyScenarioObjectTemplateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObjectTemplate).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IScenarioObjectTemplate>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntitiyObject = typedObject->GetEntitiyObject();
	            if ( kEntitiyObject)
	            {
	                ApplyEntityObjectCheckerRules(messageLogger, kEntitiyObject, contextMode);
	            }
	            const auto kObjectController = typedObject->GetObjectController();
	            for(auto& kListItem: kObjectController)
	            {
	                if ( kListItem )
	                    ApplyObjectControllerCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplySelectedEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISelectedEntities).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISelectedEntities>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityRef = typedObject->GetEntityRef();
	            for(auto& kListItem: kEntityRef)
	            {
	                if ( kListItem )
	                    ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kByType = typedObject->GetByType();
	            for(auto& kListItem: kByType)
	            {
	                if ( kListItem )
	                    ApplyByTypeCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplySensorReferenceCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISensorReference).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISensorReference>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySensorReferenceSetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISensorReferenceSet).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISensorReferenceSet>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSensorReferences = typedObject->GetSensorReferences();
	            for(auto& kListItem: kSensorReferences)
	            {
	                if ( kListItem )
	                    ApplySensorReferenceCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplySetMonitorActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISetMonitorAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISetMonitorAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyShapeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IShape).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IShape>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPolyline = typedObject->GetPolyline();
	            if ( kPolyline)
	            {
	                ApplyPolylineCheckerRules(messageLogger, kPolyline, contextMode);
	            }
	            const auto kClothoid = typedObject->GetClothoid();
	            if ( kClothoid)
	            {
	                ApplyClothoidCheckerRules(messageLogger, kClothoid, contextMode);
	            }
	            const auto kClothoidSpline = typedObject->GetClothoidSpline();
	            if ( kClothoidSpline)
	            {
	                ApplyClothoidSplineCheckerRules(messageLogger, kClothoidSpline, contextMode);
	            }
	            const auto kNurbs = typedObject->GetNurbs();
	            if ( kNurbs)
	            {
	                ApplyNurbsCheckerRules(messageLogger, kNurbs, contextMode);
	            }
	        }
   	        void ApplySimulationTimeConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISimulationTimeCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySpeedActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISpeedAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSpeedActionDynamics = typedObject->GetSpeedActionDynamics();
	            if ( kSpeedActionDynamics)
	            {
	                ApplyTransitionDynamicsCheckerRules(messageLogger, kSpeedActionDynamics, contextMode);
	            }
	            const auto kSpeedActionTarget = typedObject->GetSpeedActionTarget();
	            if ( kSpeedActionTarget)
	            {
	                ApplySpeedActionTargetCheckerRules(messageLogger, kSpeedActionTarget, contextMode);
	            }
	        }
   	        void ApplySpeedActionTargetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISpeedActionTarget>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRelativeTargetSpeed = typedObject->GetRelativeTargetSpeed();
	            if ( kRelativeTargetSpeed)
	            {
	                ApplyRelativeTargetSpeedCheckerRules(messageLogger, kRelativeTargetSpeed, contextMode);
	            }
	            const auto kAbsoluteTargetSpeed = typedObject->GetAbsoluteTargetSpeed();
	            if ( kAbsoluteTargetSpeed)
	            {
	                ApplyAbsoluteTargetSpeedCheckerRules(messageLogger, kAbsoluteTargetSpeed, contextMode);
	            }
	        }
   	        void ApplySpeedConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISpeedCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySpeedProfileActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedProfileAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISpeedProfileAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDynamicConstraints = typedObject->GetDynamicConstraints();
	            if ( kDynamicConstraints)
	            {
	                ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints, contextMode);
	            }
	            const auto kSpeedProfileEntry = typedObject->GetSpeedProfileEntry();
	            for(auto& kListItem: kSpeedProfileEntry)
	            {
	                if ( kListItem )
	                    ApplySpeedProfileEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplySpeedProfileEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedProfileEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISpeedProfileEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyStandStillConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStandStillCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStandStillCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySteadyStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISteadyState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISteadyState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTargetDistanceSteadyState = typedObject->GetTargetDistanceSteadyState();
	            if ( kTargetDistanceSteadyState)
	            {
	                ApplyTargetDistanceSteadyStateCheckerRules(messageLogger, kTargetDistanceSteadyState, contextMode);
	            }
	            const auto kTargetTimeSteadyState = typedObject->GetTargetTimeSteadyState();
	            if ( kTargetTimeSteadyState)
	            {
	                ApplyTargetTimeSteadyStateCheckerRules(messageLogger, kTargetTimeSteadyState, contextMode);
	            }
	        }
   	        void ApplyStochasticCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStochastic).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStochastic>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kStochasticDistributions = typedObject->GetStochasticDistributions();
	            for(auto& kListItem: kStochasticDistributions)
	            {
	                if ( kListItem )
	                    ApplyStochasticDistributionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyStochasticDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStochasticDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStochasticDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kStochasticDistributionType = typedObject->GetStochasticDistributionType();
	            if ( kStochasticDistributionType)
	            {
	                ApplyStochasticDistributionTypeCheckerRules(messageLogger, kStochasticDistributionType, contextMode);
	            }
	        }
   	        void ApplyStochasticDistributionTypeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStochasticDistributionType).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStochasticDistributionType>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kProbabilityDistributionSet = typedObject->GetProbabilityDistributionSet();
	            if ( kProbabilityDistributionSet)
	            {
	                ApplyProbabilityDistributionSetCheckerRules(messageLogger, kProbabilityDistributionSet, contextMode);
	            }
	            const auto kNormalDistribution = typedObject->GetNormalDistribution();
	            if ( kNormalDistribution)
	            {
	                ApplyNormalDistributionCheckerRules(messageLogger, kNormalDistribution, contextMode);
	            }
	            const auto kLogNormalDistribution = typedObject->GetLogNormalDistribution();
	            if ( kLogNormalDistribution)
	            {
	                ApplyLogNormalDistributionCheckerRules(messageLogger, kLogNormalDistribution, contextMode);
	            }
	            const auto kUniformDistribution = typedObject->GetUniformDistribution();
	            if ( kUniformDistribution)
	            {
	                ApplyUniformDistributionCheckerRules(messageLogger, kUniformDistribution, contextMode);
	            }
	            const auto kPoissonDistribution = typedObject->GetPoissonDistribution();
	            if ( kPoissonDistribution)
	            {
	                ApplyPoissonDistributionCheckerRules(messageLogger, kPoissonDistribution, contextMode);
	            }
	            const auto kHistogram = typedObject->GetHistogram();
	            if ( kHistogram)
	            {
	                ApplyHistogramCheckerRules(messageLogger, kHistogram, contextMode);
	            }
	            const auto kUserDefinedDistribution = typedObject->GetUserDefinedDistribution();
	            if ( kUserDefinedDistribution)
	            {
	                ApplyUserDefinedDistributionCheckerRules(messageLogger, kUserDefinedDistribution, contextMode);
	            }
	        }
   	        void ApplyStoryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStory).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStory>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kActs = typedObject->GetActs();
	            for(auto& kListItem: kActs)
	            {
	                if ( kListItem )
	                    ApplyActCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyStoryboardCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboard).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStoryboard>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kInit = typedObject->GetInit();
	            if ( kInit)
	            {
	                ApplyInitCheckerRules(messageLogger, kInit, contextMode);
	            }
	            const auto kStories = typedObject->GetStories();
	            for(auto& kListItem: kStories)
	            {
	                if ( kListItem )
	                    ApplyStoryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kStopTrigger = typedObject->GetStopTrigger();
	            if ( kStopTrigger)
	            {
	                ApplyTriggerCheckerRules(messageLogger, kStopTrigger, contextMode);
	            }
	        }
   	        void ApplyStoryboardElementStateConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IStoryboardElementStateCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySunCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISun).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISun>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplySynchronizeActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISynchronizeAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ISynchronizeAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTargetPositionMaster = typedObject->GetTargetPositionMaster();
	            if ( kTargetPositionMaster)
	            {
	                ApplyPositionCheckerRules(messageLogger, kTargetPositionMaster, contextMode);
	            }
	            const auto kTargetPosition = typedObject->GetTargetPosition();
	            if ( kTargetPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kTargetPosition, contextMode);
	            }
	            const auto kFinalSpeed = typedObject->GetFinalSpeed();
	            if ( kFinalSpeed)
	            {
	                ApplyFinalSpeedCheckerRules(messageLogger, kFinalSpeed, contextMode);
	            }
	        }
   	        void ApplyTargetDistanceSteadyStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITargetDistanceSteadyState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITargetDistanceSteadyState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTargetTimeSteadyStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITargetTimeSteadyState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITargetTimeSteadyState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTeleportActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITeleportAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITeleportAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyTimeHeadwayConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeHeadwayCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTimeOfDayCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDay).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeOfDay>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTimeOfDayConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeOfDayCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTimeReferenceCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeReference).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeReference>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kNone = typedObject->GetNone();
	            if ( kNone)
	            {
	                ApplyNoneCheckerRules(messageLogger, kNone, contextMode);
	            }
	            const auto kTiming = typedObject->GetTiming();
	            if ( kTiming)
	            {
	                ApplyTimingCheckerRules(messageLogger, kTiming, contextMode);
	            }
	        }
   	        void ApplyTimeToCollisionConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeToCollisionCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTimeToCollisionConditionTarget = typedObject->GetTimeToCollisionConditionTarget();
	            if ( kTimeToCollisionConditionTarget)
	            {
	                ApplyTimeToCollisionConditionTargetCheckerRules(messageLogger, kTimeToCollisionConditionTarget, contextMode);
	            }
	        }
   	        void ApplyTimeToCollisionConditionTargetCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	            const auto kEntityRef = typedObject->GetEntityRef();
	            if ( kEntityRef)
	            {
	                ApplyEntityRefCheckerRules(messageLogger, kEntityRef, contextMode);
	            }
	        }
   	        void ApplyTimingCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITiming).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITiming>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficSourceAction = typedObject->GetTrafficSourceAction();
	            if ( kTrafficSourceAction)
	            {
	                ApplyTrafficSourceActionCheckerRules(messageLogger, kTrafficSourceAction, contextMode);
	            }
	            const auto kTrafficSinkAction = typedObject->GetTrafficSinkAction();
	            if ( kTrafficSinkAction)
	            {
	                ApplyTrafficSinkActionCheckerRules(messageLogger, kTrafficSinkAction, contextMode);
	            }
	            const auto kTrafficSwarmAction = typedObject->GetTrafficSwarmAction();
	            if ( kTrafficSwarmAction)
	            {
	                ApplyTrafficSwarmActionCheckerRules(messageLogger, kTrafficSwarmAction, contextMode);
	            }
	            const auto kTrafficAreaAction = typedObject->GetTrafficAreaAction();
	            if ( kTrafficAreaAction)
	            {
	                ApplyTrafficAreaActionCheckerRules(messageLogger, kTrafficAreaAction, contextMode);
	            }
	            const auto kTrafficStopAction = typedObject->GetTrafficStopAction();
	            if ( kTrafficStopAction)
	            {
	                ApplyTrafficStopActionCheckerRules(messageLogger, kTrafficStopAction, contextMode);
	            }
	        }
   	        void ApplyTrafficAreaCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficArea).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficArea>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPolygon = typedObject->GetPolygon();
	            if ( kPolygon)
	            {
	                ApplyPolygonCheckerRules(messageLogger, kPolygon, contextMode);
	            }
	            const auto kRoadRange = typedObject->GetRoadRange();
	            for(auto& kListItem: kRoadRange)
	            {
	                if ( kListItem )
	                    ApplyRoadRangeCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyTrafficAreaActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAreaAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficAreaAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficDistribution = typedObject->GetTrafficDistribution();
	            if ( kTrafficDistribution)
	            {
	                ApplyTrafficDistributionCheckerRules(messageLogger, kTrafficDistribution, contextMode);
	            }
	            const auto kTrafficArea = typedObject->GetTrafficArea();
	            if ( kTrafficArea)
	            {
	                ApplyTrafficAreaCheckerRules(messageLogger, kTrafficArea, contextMode);
	            }
	        }
   	        void ApplyTrafficDefinitionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDefinition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficDefinition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleCategoryDistribution = typedObject->GetVehicleCategoryDistribution();
	            if ( kVehicleCategoryDistribution)
	            {
	                ApplyVehicleCategoryDistributionCheckerRules(messageLogger, kVehicleCategoryDistribution, contextMode);
	            }
	            const auto kVehicleRoleDistribution = typedObject->GetVehicleRoleDistribution();
	            if ( kVehicleRoleDistribution)
	            {
	                ApplyVehicleRoleDistributionCheckerRules(messageLogger, kVehicleRoleDistribution, contextMode);
	            }
	            const auto kControllerDistribution = typedObject->GetControllerDistribution();
	            if ( kControllerDistribution)
	            {
	                ApplyControllerDistributionCheckerRules(messageLogger, kControllerDistribution, contextMode);
	            }
	        }
   	        void ApplyTrafficDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficDistributionEntry = typedObject->GetTrafficDistributionEntry();
	            for(auto& kListItem: kTrafficDistributionEntry)
	            {
	                if ( kListItem )
	                    ApplyTrafficDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyTrafficDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDistributionEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficDistributionEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityDistribution = typedObject->GetEntityDistribution();
	            if ( kEntityDistribution)
	            {
	                ApplyEntityDistributionCheckerRules(messageLogger, kEntityDistribution, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	        }
   	        void ApplyTrafficSignalActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrafficSignalControllerAction = typedObject->GetTrafficSignalControllerAction();
	            if ( kTrafficSignalControllerAction)
	            {
	                ApplyTrafficSignalControllerActionCheckerRules(messageLogger, kTrafficSignalControllerAction, contextMode);
	            }
	            const auto kTrafficSignalStateAction = typedObject->GetTrafficSignalStateAction();
	            if ( kTrafficSignalStateAction)
	            {
	                ApplyTrafficSignalStateActionCheckerRules(messageLogger, kTrafficSignalStateAction, contextMode);
	            }
	        }
   	        void ApplyTrafficSignalConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSignalControllerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalController).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalController>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPhases = typedObject->GetPhases();
	            for(auto& kListItem: kPhases)
	            {
	                if ( kListItem )
	                    ApplyPhaseCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyTrafficSignalControllerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalControllerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSignalControllerConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalControllerCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSignalGroupStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalGroupState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalGroupState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSignalStateCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalState).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalState>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSignalStateActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalStateAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSinkActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSinkAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	            const auto kTrafficDefinition = typedObject->GetTrafficDefinition();
	            if ( kTrafficDefinition)
	            {
	                ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
	            }
	        }
   	        void ApplyTrafficSourceActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSourceAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	            const auto kTrafficDefinition = typedObject->GetTrafficDefinition();
	            if ( kTrafficDefinition)
	            {
	                ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
	            }
	            const auto kTrafficDistribution = typedObject->GetTrafficDistribution();
	            if ( kTrafficDistribution)
	            {
	                ApplyTrafficDistributionCheckerRules(messageLogger, kTrafficDistribution, contextMode);
	            }
	        }
   	        void ApplyTrafficStopActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficStopAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficStopAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrafficSwarmActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrafficSwarmAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCentralObject = typedObject->GetCentralObject();
	            if ( kCentralObject)
	            {
	                ApplyCentralSwarmObjectCheckerRules(messageLogger, kCentralObject, contextMode);
	            }
	            const auto kTrafficDefinition = typedObject->GetTrafficDefinition();
	            if ( kTrafficDefinition)
	            {
	                ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition, contextMode);
	            }
	            const auto kTrafficDistribution = typedObject->GetTrafficDistribution();
	            if ( kTrafficDistribution)
	            {
	                ApplyTrafficDistributionCheckerRules(messageLogger, kTrafficDistribution, contextMode);
	            }
	            const auto kInitialSpeedRange = typedObject->GetInitialSpeedRange();
	            if ( kInitialSpeedRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kInitialSpeedRange, contextMode);
	            }
	            const auto kDirectionOfTravelDistribution = typedObject->GetDirectionOfTravelDistribution();
	            if ( kDirectionOfTravelDistribution)
	            {
	                ApplyDirectionOfTravelDistributionCheckerRules(messageLogger, kDirectionOfTravelDistribution, contextMode);
	            }
	        }
   	        void ApplyTrailerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrailer).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrailer>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrailer = typedObject->GetTrailer();
	            if ( kTrailer)
	            {
	                ApplyScenarioObjectCheckerRules(messageLogger, kTrailer, contextMode);
	            }
	            const auto kTrailerRef = typedObject->GetTrailerRef();
	            if ( kTrailerRef)
	            {
	                ApplyEntityRefCheckerRules(messageLogger, kTrailerRef, contextMode);
	            }
	        }
   	        void ApplyTrailerActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrailerAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrailerAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kConnectTrailerAction = typedObject->GetConnectTrailerAction();
	            if ( kConnectTrailerAction)
	            {
	                ApplyConnectTrailerActionCheckerRules(messageLogger, kConnectTrailerAction, contextMode);
	            }
	            const auto kDisconnectTrailerAction = typedObject->GetDisconnectTrailerAction();
	            if ( kDisconnectTrailerAction)
	            {
	                ApplyDisconnectTrailerActionCheckerRules(messageLogger, kDisconnectTrailerAction, contextMode);
	            }
	        }
   	        void ApplyTrailerCouplerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrailerCoupler).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrailerCoupler>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrailerHitchCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrailerHitch).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrailerHitch>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrajectoryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectory).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrajectory>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kShape = typedObject->GetShape();
	            if ( kShape)
	            {
	                ApplyShapeCheckerRules(messageLogger, kShape, contextMode);
	            }
	        }
   	        void ApplyTrajectoryCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrajectoryCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyTrajectoryFollowingModeCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrajectoryFollowingMode>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTrajectoryPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrajectoryPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kOrientation = typedObject->GetOrientation();
	            if ( kOrientation)
	            {
	                ApplyOrientationCheckerRules(messageLogger, kOrientation, contextMode);
	            }
	            const auto kTrajectoryRef = typedObject->GetTrajectoryRef();
	            if ( kTrajectoryRef)
	            {
	                ApplyTrajectoryRefCheckerRules(messageLogger, kTrajectoryRef, contextMode);
	            }
	        }
   	        void ApplyTrajectoryRefCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryRef).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrajectoryRef>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kTrajectory = typedObject->GetTrajectory();
	            if ( kTrajectory)
	            {
	                ApplyTrajectoryCheckerRules(messageLogger, kTrajectory, contextMode);
	            }
	            const auto kCatalogReference = typedObject->GetCatalogReference();
	            if ( kCatalogReference)
	            {
	                ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference, contextMode);
	            }
	        }
   	        void ApplyTransitionDynamicsCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITransitionDynamics).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITransitionDynamics>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTraveledDistanceConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITraveledDistanceCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyTriggerCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrigger).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITrigger>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kConditionGroups = typedObject->GetConditionGroups();
	            for(auto& kListItem: kConditionGroups)
	            {
	                if ( kListItem )
	                    ApplyConditionGroupCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyTriggeringEntitiesCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITriggeringEntities).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<ITriggeringEntities>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kEntityRefs = typedObject->GetEntityRefs();
	            for(auto& kListItem: kEntityRefs)
	            {
	                if ( kListItem )
	                    ApplyEntityRefCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyUniformDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUniformDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUniformDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRange = typedObject->GetRange();
	            if ( kRange)
	            {
	                ApplyRangeCheckerRules(messageLogger, kRange, contextMode);
	            }
	        }
   	        void ApplyUsedAreaCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUsedArea).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUsedArea>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPositions = typedObject->GetPositions();
	            for(auto& kListItem: kPositions)
	            {
	                if ( kListItem )
	                    ApplyPositionCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyUserDefinedActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kCustomCommandAction = typedObject->GetCustomCommandAction();
	            if ( kCustomCommandAction)
	            {
	                ApplyCustomCommandActionCheckerRules(messageLogger, kCustomCommandAction, contextMode);
	            }
	        }
   	        void ApplyUserDefinedAnimationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAnimation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedAnimation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyUserDefinedComponentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedComponent).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedComponent>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyUserDefinedDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyUserDefinedLightCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedLight).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedLight>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyUserDefinedValueConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IUserDefinedValueCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyValueConstraintCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IValueConstraint).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IValueConstraint>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyValueConstraintGroupCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IValueConstraintGroup).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IValueConstraintGroup>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kConstraints = typedObject->GetConstraints();
	            for(auto& kListItem: kConstraints)
	            {
	                if ( kListItem )
	                    ApplyValueConstraintCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyValueSetDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IValueSetDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IValueSetDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterValueSets = typedObject->GetParameterValueSets();
	            for(auto& kListItem: kParameterValueSets)
	            {
	                if ( kListItem )
	                    ApplyParameterValueSetCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyVariableActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSetAction = typedObject->GetSetAction();
	            if ( kSetAction)
	            {
	                ApplyVariableSetActionCheckerRules(messageLogger, kSetAction, contextMode);
	            }
	            const auto kModifyAction = typedObject->GetModifyAction();
	            if ( kModifyAction)
	            {
	                ApplyVariableModifyActionCheckerRules(messageLogger, kModifyAction, contextMode);
	            }
	        }
   	        void ApplyVariableAddValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableAddValueRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableAddValueRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVariableConditionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableCondition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableCondition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVariableDeclarationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableDeclaration).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableDeclaration>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVariableModifyActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableModifyAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableModifyAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kRule = typedObject->GetRule();
	            if ( kRule)
	            {
	                ApplyVariableModifyRuleCheckerRules(messageLogger, kRule, contextMode);
	            }
	        }
   	        void ApplyVariableModifyRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableModifyRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableModifyRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kAddValue = typedObject->GetAddValue();
	            if ( kAddValue)
	            {
	                ApplyVariableAddValueRuleCheckerRules(messageLogger, kAddValue, contextMode);
	            }
	            const auto kMultiplyByValue = typedObject->GetMultiplyByValue();
	            if ( kMultiplyByValue)
	            {
	                ApplyVariableMultiplyByValueRuleCheckerRules(messageLogger, kMultiplyByValue, contextMode);
	            }
	        }
   	        void ApplyVariableMultiplyByValueRuleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableMultiplyByValueRule).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableMultiplyByValueRule>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVariableSetActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVariableSetAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVariableSetAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVehicleCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicle).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicle>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kParameterDeclarations = typedObject->GetParameterDeclarations();
	            for(auto& kListItem: kParameterDeclarations)
	            {
	                if ( kListItem )
	                    ApplyParameterDeclarationCheckerRules(messageLogger, kListItem, contextMode);
	            }
	            const auto kBoundingBox = typedObject->GetBoundingBox();
	            if ( kBoundingBox)
	            {
	                ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox, contextMode);
	            }
	            const auto kPerformance = typedObject->GetPerformance();
	            if ( kPerformance)
	            {
	                ApplyPerformanceCheckerRules(messageLogger, kPerformance, contextMode);
	            }
	            const auto kAxles = typedObject->GetAxles();
	            if ( kAxles)
	            {
	                ApplyAxlesCheckerRules(messageLogger, kAxles, contextMode);
	            }
	            const auto kProperties = typedObject->GetProperties();
	            if ( kProperties)
	            {
	                ApplyPropertiesCheckerRules(messageLogger, kProperties, contextMode);
	            }
	            const auto kTrailerHitch = typedObject->GetTrailerHitch();
	            if ( kTrailerHitch)
	            {
	                ApplyTrailerHitchCheckerRules(messageLogger, kTrailerHitch, contextMode);
	            }
	            const auto kTrailerCoupler = typedObject->GetTrailerCoupler();
	            if ( kTrailerCoupler)
	            {
	                ApplyTrailerCouplerCheckerRules(messageLogger, kTrailerCoupler, contextMode);
	            }
	            const auto kTrailer = typedObject->GetTrailer();
	            if ( kTrailer)
	            {
	                ApplyTrailerCheckerRules(messageLogger, kTrailer, contextMode);
	            }
	        }
   	        void ApplyVehicleCatalogLocationCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleCatalogLocation>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kDirectory = typedObject->GetDirectory();
	            if ( kDirectory)
	            {
	                ApplyDirectoryCheckerRules(messageLogger, kDirectory, contextMode);
	            }
	        }
   	        void ApplyVehicleCategoryDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleCategoryDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleCategoryDistributionEntries = typedObject->GetVehicleCategoryDistributionEntries();
	            for(auto& kListItem: kVehicleCategoryDistributionEntries)
	            {
	                if ( kListItem )
	                    ApplyVehicleCategoryDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyVehicleCategoryDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleCategoryDistributionEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVehicleComponentCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleComponent).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleComponent>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVehicleLightCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleLight).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleLight>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVehicleRoleDistributionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleRoleDistribution).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleRoleDistribution>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kVehicleRoleDistributionEntries = typedObject->GetVehicleRoleDistributionEntries();
	            for(auto& kListItem: kVehicleRoleDistributionEntries)
	            {
	                if ( kListItem )
	                    ApplyVehicleRoleDistributionEntryCheckerRules(messageLogger, kListItem, contextMode);
	            }
	        }
   	        void ApplyVehicleRoleDistributionEntryCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleRoleDistributionEntry).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVehicleRoleDistributionEntry>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyVertexCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVertex).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVertex>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyVisibilityActionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVisibilityAction).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IVisibilityAction>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSensorReferenceSet = typedObject->GetSensorReferenceSet();
	            if ( kSensorReferenceSet)
	            {
	                ApplySensorReferenceSetCheckerRules(messageLogger, kSensorReferenceSet, contextMode);
	            }
	        }
   	        void ApplyWaypointCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWaypoint).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IWaypoint>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kPosition = typedObject->GetPosition();
	            if ( kPosition)
	            {
	                ApplyPositionCheckerRules(messageLogger, kPosition, contextMode);
	            }
	        }
   	        void ApplyWeatherCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWeather).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IWeather>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            const auto kSun = typedObject->GetSun();
	            if ( kSun)
	            {
	                ApplySunCheckerRules(messageLogger, kSun, contextMode);
	            }
	            const auto kFog = typedObject->GetFog();
	            if ( kFog)
	            {
	                ApplyFogCheckerRules(messageLogger, kFog, contextMode);
	            }
	            const auto kPrecipitation = typedObject->GetPrecipitation();
	            if ( kPrecipitation)
	            {
	                ApplyPrecipitationCheckerRules(messageLogger, kPrecipitation, contextMode);
	            }
	            const auto kWind = typedObject->GetWind();
	            if ( kWind)
	            {
	                ApplyWindCheckerRules(messageLogger, kWind, contextMode);
	            }
	            const auto kDomeImage = typedObject->GetDomeImage();
	            if ( kDomeImage)
	            {
	                ApplyDomeImageCheckerRules(messageLogger, kDomeImage, contextMode);
	            }
	        }
   	        void ApplyWindCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWind).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IWind>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }
   	        void ApplyWorldPositionCheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWorldPosition).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<IWorldPosition>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	        }

        public:
            OPENSCENARIOLIB_EXP void CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAccelerationConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAcquirePositionActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActivateControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActorsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAddEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAngleConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAnimationActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAnimationFileCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAnimationStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAnimationTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAppearanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignRouteActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAutomaticGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxlesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddBoundingBoxCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddBrakeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddBrakeInputCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByEntityConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByObjectTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByValueConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogLocationsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCenterCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCentralSwarmObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddClothoidCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddClothoidSplineCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddClothoidSplineSegmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddColorCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddColorCmykCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddColorRgbCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddComponentAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConnectTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControlPointCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCustomCommandActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCustomContentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeleteEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicMultiParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicMultiParameterDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicSingleParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeterministicSingleParameterDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDimensionsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDirectionOfTravelDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDirectoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDisconnectTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistributionDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistributionRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistributionSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistributionSetElementCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDomeImageCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDynamicConstraintsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEndOfRoadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitySelectionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEventCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddExternalObjectReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileHeaderCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFinalSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFogCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFollowTrajectoryActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddGeoPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddGlobalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddHistogramCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddHistogramBinCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInRoutePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInfrastructureActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitActionsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddKnotCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLanePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralDistanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLicenseCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLightStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLightStateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLightTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLogNormalDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManualGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddModifyRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMonitorDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNoneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNormalDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNurbsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddObjectControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOffroadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCategoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOrientationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideBrakeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideClutchActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideControllerValueActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideGearActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideThrottleActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAssignmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterModifyActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterSetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterValueDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterValueDistributionDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterValueSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianGestureCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPerformanceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPhaseCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPoissonDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPolygonCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPolylineCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrecipitationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddProbabilityDistributionSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddProbabilityDistributionSetElementCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertyCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRandomRouteActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddReachPositionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeAngleConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeClearanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeLanePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeLaneRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeObjectPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeRoadPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeWorldPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadCursorCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadNetworkCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutingActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioObjectTemplateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSelectedEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSensorReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSensorReferenceSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSetMonitorActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddShapeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSimulationTimeConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedProfileActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedProfileEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStandStillConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStochasticCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStochasticDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStochasticDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSunCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSynchronizeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTargetDistanceSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTargetTimeSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTeleportActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeHeadwayConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimingCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficAreaCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficAreaActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalGroupStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSinkActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSourceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficStopActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSwarmActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrailerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrailerCouplerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrailerHitchCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTransitionDynamicsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTraveledDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggeringEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUniformDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUsedAreaCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedComponentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedLightCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedValueConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddValueConstraintCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddValueConstraintGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddValueSetDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableModifyActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableModifyRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVariableSetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleComponentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleLightCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleRoleDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleRoleDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVertexCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVisibilityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWaypointCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWeatherCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWindCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWorldPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
        };
    }
}
