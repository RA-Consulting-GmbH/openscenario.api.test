#pragma once
#include "IndexedElement.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A Parser Context that allows a parser to store dynamic information during the parsing process. A
     * parser context is handed through the hierarchical parser concept and is especially used for
     * parsing XSD groups.
     */

    class ParserContext
    {
    private:
        std::shared_ptr<IndexedElement> _lastElementParsed;

    public:
        virtual ~ParserContext() = default;
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

    };

}
