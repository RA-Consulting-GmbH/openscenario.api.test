#pragma once
#include "IndexedElement.h"
#include "ICatalogReferenceProvider.h"
#include <vector>
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
     * A Parser Context that allows a parser to store dynamic information durign the parsing process.
     * A paser context is handed through the hirarchical parser concept and is especially used for parsing
     * XSD groups.
    */

    class ParserContext: public ICatalogReferenceProvider
    {
    private:
        std::shared_ptr<IndexedElement> _lastElementParsed;
        std::vector<std::shared_ptr<ICatalogReference>> _catalogReferences;

    public:
        /**
         * The last element that has been parsed
         * @return the lasz indexed element that has been parsed
         */
        std::shared_ptr<IndexedElement> GetLastElementParsed() const
        {
            return _lastElementParsed;
        }

        /**
         * Sets the last element that has been parsed
         * @param lastElementParsed the last element that has been parsed
         */
        void SetLastElementParsed(const std::shared_ptr<IndexedElement>& lastElementParsed)
        {
            _lastElementParsed = lastElementParsed;
        }

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
