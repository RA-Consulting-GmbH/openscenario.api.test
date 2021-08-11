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
#include "ITreeMessageLogger.h"
#include "MemLeakDetection.h"
#include <memory>

namespace NET_ASAM_OPENSCENARIO
{
    class CheckerRule
    {
    public:
		CheckerRule() = default;
        virtual  ~CheckerRule() = default;
    };

    /**
     * This represents a rule that can be applied to any model object instance.
     * It implements the command pattern. The rule is added to the type and applyRule
     * is executed when the object has been filled.
     *
     */
    template <class T>
    class ICheckerRule: public CheckerRule
    {
    public:
        ICheckerRule() = default;
        virtual  ~ICheckerRule() = default;
		virtual void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<T> object) = 0;
			virtual void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<T> object) = 0;
    };

}
