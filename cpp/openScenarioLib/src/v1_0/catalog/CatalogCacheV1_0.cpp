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


#include "CatalogCacheV1_0.h"

#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
		CatalogCache::CatalogCache(std::shared_ptr<IResourceLocator>& resourceLocator, std::shared_ptr<IParserMessageLogger>& messageLogger) : _resourceLocator(resourceLocator), _messageLogger(messageLogger) {}

        void CatalogCache::AddCatalogFile(std::shared_ptr<IScenarioLoaderFactory> scenarioLoaderFactory)
        {
            _catalogFiles.push_back(scenarioLoaderFactory);
            _isAnyCatalogToParse = true;
        }

        std::shared_ptr<ICatalogElement> CatalogCache::ImportCatalogElement(std::shared_ptr <ICatalogReference>& catalogReference)
        {
            std::shared_ptr<ICatalogElement> catalogElement = nullptr;
            while (catalogElement == nullptr)
            {
                catalogElement = GetCatalogElementInternal(catalogReference);
                if (catalogElement != nullptr || !_isAnyCatalogToParse) {
                    break;
                }
                else {
                    ParseNextCatalog();
                }
            }
            return catalogElement;
        }

        void CatalogCache::ParseNextCatalog()
        {
            if (_currentLoaderFactoryIndex >= _catalogFiles.size())
            {
                _isAnyCatalogToParse = false;
                return;
            }
            else
            {
                // Parse Catalog
                auto scenarioLoaderFactory = _catalogFiles[_currentLoaderFactoryIndex++];
                auto loader = scenarioLoaderFactory->CreateLoader(_resourceLocator);
                std::shared_ptr<IOpenScenario> openScenario = nullptr;
                bool isSuccessfullyParsed = true;

                //auto messageLogger = std::make_shared<MessageLoggerDecorator>(_messageLogger);
                try
                {
                    openScenario = std::static_pointer_cast<IOpenScenario>(loader->Load(_messageLogger)->GetAdapter(typeid(IOpenScenario).name()));
                }
                catch (ScenarioLoaderException& e)
                {
                    (void)e;
                    // Ignore
                    isSuccessfullyParsed = false;
                }
                if (isSuccessfullyParsed && _messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(ERROR).empty())
                {
                    auto catalogDefinition = openScenario->GetOpenScenarioCategory()->GetCatalogDefinition();
                    if (catalogDefinition)
                    {
                        auto catalog = catalogDefinition->GetCatalog();
                        if (catalog)
                        {
                            // Does Controller already exists
                            const auto kCatalogName = catalog->GetName();

                            auto catalogMap = _catalogElements[kCatalogName];

                            auto controllers = catalog->GetControllers();
                            if (!controllers.empty())
                            {
                                for (auto&& controller : controllers)
                                {
                                    auto name = controller->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, controller));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto vehicles = catalog->GetVehicles();
                            if (!vehicles.empty())
                            {
                                for (auto&& vehicle : vehicles)
                                {
                                    auto name = vehicle->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, vehicle));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto miscObjects = catalog->GetMiscObjects();
                            if (!miscObjects.empty())
                            {
                                for (auto&& miscObject : miscObjects)
                                {
                                    auto name = miscObject->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, miscObject));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto routes = catalog->GetRoutes();
                            if (!routes.empty())
                            {
                                for (auto&& route : routes)
                                {
                                    auto name = route->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, route));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto environments = catalog->GetEnvironments();
                            if (!environments.empty())
                            {
                                for (auto&& environment : environments)
                                {
                                    auto name = environment->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, environment));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto pedestrians = catalog->GetPedestrians();
                            if (!pedestrians.empty())
                            {
                                for (auto&& pedestrian : pedestrians)
                                {
                                    auto name = pedestrian->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, pedestrian));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto trajectories = catalog->GetTrajectories();
                            if (!trajectories.empty())
                            {
                                for (auto&& trajectory : trajectories)
                                {
                                    auto name = trajectory->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, trajectory));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }

                            auto maneuvers = catalog->GetManeuvers();
                            if (!maneuvers.empty())
                            {
                                for (auto&& maneuver : maneuvers)
                                {
                                    auto name = maneuver->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, maneuver));
                                }
                                _catalogElements[kCatalogName] = catalogMap;
                            }
                        }

                    }
                }
            }

        }

        std::shared_ptr<ICatalogElement> CatalogCache::GetCatalogElementInternal(std::shared_ptr <ICatalogReference> catalogReference)
        {
            auto catalog = _catalogElements[catalogReference->GetCatalogName()];
            if (!catalog.empty())
            {
                auto catalogElement = catalog[catalogReference->GetEntryName()];

                if (catalogElement)
                {
                    // Clone it for import
                    return std::dynamic_pointer_cast<ICatalogElement>(std::dynamic_pointer_cast<BaseImpl>(catalogElement)->Clone());
                }

            }
            return nullptr;
        }

        };
}
