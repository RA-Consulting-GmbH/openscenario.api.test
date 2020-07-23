#pragma once
#include "ParserContext.h"
#include "ICatalogReferenceProvider.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
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
            void AddCatalogReference(const std::shared_ptr<ICatalogReference> catalogReference)
            {
                _catalogReferences.push_back(catalogReference);
            }

            std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() override
            {
                return _catalogReferences;
            }

        };
    }
}
