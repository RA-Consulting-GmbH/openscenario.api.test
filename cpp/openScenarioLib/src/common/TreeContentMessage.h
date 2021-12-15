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
#include <memory>
#include "ContentMessage.h"
#include "ITreeContext.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A message that consists of the message itself and some meta information like the error level and
     * a tree context that enables the user to trace the message back to a tree location of the node.
     *
     */
    class TreeContentMessage: public ContentMessage
    {
    private:
        std::shared_ptr<ITreeContext> _treeContext;

    public:
        /**
         * Constructor;
         *
         * @param message the message text
         * @param errorLevel the error level of the message
         * @param treeContext the context from the tree.
         */
		OPENSCENARIOLIB_EXP TreeContentMessage(const std::string message, const ErrorLevel errorLevel, std::shared_ptr<ITreeContext> treeContext);
		


		/**
		 * The text marker that enables the user to trace the message back to a file location
		 *
		 * @return the text marker
		 */
		std::shared_ptr<ITreeContext> GetTreeContext();

    };
}
