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
#include "ICheckerRule.h"
#include "ILocator.h"
#include "Textmarker.h"
#include "MemLeakDetection.h"
#include <memory>


/**
 * A base class for model validation
 * @param <T> the type to be checked
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    template <class T>
    class ModelCheckerRule: public IOpenScenarioModelElement, public ICheckerRule<T>
    {
    public:
        ModelCheckerRule() = default;
        virtual  ~ModelCheckerRule() = default;

    protected:
        std::shared_ptr<Textmarker> GetTextmarker(std::shared_ptr<T> object)
        {
            auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(ILocator).name()));

            if (locator) 
            {
                return std::make_shared<Textmarker>(locator->GetStartMarker());
            }
        
            return nullptr;
        }
    };

}
