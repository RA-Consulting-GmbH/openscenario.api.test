#pragma once
#include "ApiClassInterfaces.h"
#include "MemLeakDetection.h"
#include <vector>

namespace RAC_OPENSCENARIO
{
    class ICatalogReferenceProvider
    {
    public:
        ICatalogReferenceProvider() = default;
        virtual ~ICatalogReferenceProvider() = default;
        /**
         * Provides a list with all catalog references from a scenario a file.
         * @return the list with the catalog references
         */
        virtual std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences()
        {
            return {};
        }
    };
}