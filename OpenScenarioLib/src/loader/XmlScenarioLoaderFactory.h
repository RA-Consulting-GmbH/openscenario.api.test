#pragma once
#include "IScenarioLoaderFactory.h"
#include "XmlScenarioLoader.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
     * Factory for a XML loader
     */
    class XmlScenarioLoaderFactory: public IScenarioLoaderFactory
    {

    private:
        std::string _filename;

    public:
        /**
         * Constructor
         * @param filename for the created loader
         */
        XmlScenarioLoaderFactory(std::string& filename) : _filename(filename) {}

        std::shared_ptr<IScenarioLoader> CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator) override
        {
            return std::make_shared<XmlScenarioLoader>(_filename, resourceLocator);
        }

    };

}
