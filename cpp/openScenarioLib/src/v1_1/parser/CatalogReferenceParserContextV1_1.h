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
#include "ParserContext.h"
#include "ICatalogReferenceProviderV1_1.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
         * Specific parser for version 1.0
         */

        class CatalogReferenceParserContext : public ParserContext, public ICatalogReferenceProvider
        {
        private:
            std::vector<std::shared_ptr<ICatalogReference>> _catalogReferences;

        public:

            /**
             * Adds a found catalog reference. At the end of the parsing process any
             * catalog reference is in the list as a preparation for the next step to resolve the
             * catalog references.
             * @param catalogReference a catalog reference to be added.
             */
			void AddCatalogReference(const std::shared_ptr<ICatalogReference> catalogReference);

			std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() override;

        };
    }
}
