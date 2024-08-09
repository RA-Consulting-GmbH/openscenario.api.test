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
#undef ERROR
#include <vector>
#include <map>
#include "ApiClassInterfacesV1_3.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "IResourceLocator.h"
#include "IScenarioLoader.h"
#include "IScenarioLoaderFactory.h"
#include "ErrorLevel.h"
#include "ScenarioLoaderException.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        /**
         * A cache class for a catalog directory. It enables to search for a catalog element in a specific catalog.
         * If a element is found, the search returns and stops without loading further files from the directory.
         * The loaded files are stored in cache for later searches.
         * @author Andreas Hege - RA Consulting
         *
         */

        class CatalogCache
        {
        private:
            std::map<std::string, std::map<std::string, std::shared_ptr<ICatalogElement>>> _catalogElements;
            bool _isAnyCatalogToParse = false;
            std::vector<std::shared_ptr<IScenarioLoaderFactory>> _catalogFiles;
            std::shared_ptr<IResourceLocator> _resourceLocator;
            unsigned int _currentLoaderFactoryIndex = 0;
            std::shared_ptr<IParserMessageLogger> _messageLogger;

        public:
            /**
             * Constructor
             * @param resourceLocator locator for the directory to search into
             * @param messageLogger to log messages during parsing the catalogs
             */
			CatalogCache(std::shared_ptr<IResourceLocator>& resourceLocator, std::shared_ptr<IParserMessageLogger>& messageLogger);

            /**
             * Adds a catalog file in its own loader factory.
             * @param scenarioLoaderFactory the loader factory that is initialized with this file.
             */
			void AddCatalogFile(std::shared_ptr<IScenarioLoaderFactory> scenarioLoaderFactory);

            /**
             * Searches for a specific catalog element in the directory.
             * @param catalogReference the catalog reference that represents the catalog element to be searched.
             * @return the found catalog element or null if the catalog element is not faound in the directory
             */
			std::shared_ptr<ICatalogElement> ImportCatalogElement(std::shared_ptr <ICatalogReference>& catalogReference);

        private:
            /*
             * parses the next catalog in the list.
             */
			void ParseNextCatalog();


        protected:
            /**
             * Searches for a specific catalog element in the cache and returns a clone.
             * @param catalogReference the catalog reference that represents the catalog element to be searched.
             * @return the cloned catalog element or null if element is not in cache.
             */
			std::shared_ptr<ICatalogElement> GetCatalogElementInternal(std::shared_ptr <ICatalogReference> catalogReference);
        };
    }
}
