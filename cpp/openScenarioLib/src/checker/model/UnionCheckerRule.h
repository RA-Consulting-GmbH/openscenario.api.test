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

#include "MemLeakDetection.h"
#include "ModelCheckerRule.h"

/**
 * Checks the xor constraints of all children.
 * Violation
 * <ul>
 * <li>if more than one children is not null
 * <li>if all are null and one must be present. (all have minOccur &gt; 0)
 * </ul>
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class UnionCheckerRule:  public ModelCheckerRule
    {
    public:
        UnionCheckerRule();
        virtual  ~UnionCheckerRule();

    protected:
        std::string GetTooManyMessage(std::vector<std::string>& properties);

        std::string GetTooFewMessage(std::vector<std::string>& properties);
    };

}
