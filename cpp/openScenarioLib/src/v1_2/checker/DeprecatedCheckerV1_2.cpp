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

#include "DeprecatedCheckerV1_2.h"

#include "PropertyTreeContext.h"


 /**
  * Checks Parameter declarations' value to be parsable (not empty value)
  */
namespace NET_ASAM_OPENSCENARIO
{
	namespace v1_2
	{
		void  GeoPositionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IGeoPosition> object)
		{
			// Do the checks
			if (object->IsSetHeight() && object->IsSetAltitude())
			{
				result.push_back("Property 'height' is deprecated and must not be used with property 'altitude'.");
			}
			if (object->IsSetLatitude() && object->IsSetLatitudeDeg())
			{
				result.push_back("Property 'latitude' is deprecated and must not be used with property 'latitudeDeg'.");
			}
			if (object->IsSetLongitude() && object->IsSetLongitudeDeg())
			{
				result.push_back("Property 'longitude' is deprecated and must not be used with property 'longitudeDeg'.");
			}
		}

		void  GeoPositionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IGeoPosition> object)
		{
			// Do the checks
			if (object->IsSetHeight() && object->IsSetAltitude())
			{
				result.push_back("Attribute 'height' is deprecated and must not be used with attribute 'altitude'.");
			}
			if (object->IsSetLatitude() && object->IsSetLatitudeDeg())
			{
				result.push_back("Attribute 'latitude' is deprecated and must not be used with attribute 'latitudeDeg'.");
			}
			if (object->IsSetLongitude() && object->IsSetLongitudeDeg())
			{
				result.push_back("Attribute 'longitude' is deprecated and must not be used with attribute 'longitudeDeg'.");
			}
		}
		void  GeoPositionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IGeoPosition> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void GeoPositionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IGeoPosition> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  OverrideBrakeActionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IOverrideBrakeAction> object)
		{
			// Do the checks
			if (object->IsSetValue() && object->GetBrakeInput()  != nullptr)
			{
				result.push_back("Property 'value' is deprecated and must not be used with property 'brakeInput'.");
			}
		}

		void  OverrideBrakeActionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IOverrideBrakeAction> object)
		{
			// Do the checks
			if (object->IsSetValue() && object->GetBrakeInput() != nullptr)
			{
				result.push_back("Attribute 'value' is deprecated and must not be used with element 'BrakePercent' or 'BrakeForce'.");
			}
		}
		void  OverrideBrakeActionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideBrakeAction> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void OverrideBrakeActionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideBrakeAction> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  OverrideGearActionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IOverrideGearAction> object)
		{
			// Do the checks
			if (object->IsSetNumber() && object->GetGear() != nullptr)
			{
				result.push_back("Property 'number' is deprecated and must not be used with property 'gear'.");
			}
		}
		void  OverrideGearActionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IOverrideGearAction> object)
		{
			// Do the checks
			if (object->IsSetNumber() && object->GetGear() != nullptr)
			{
				result.push_back("Attribute 'number' is deprecated and must not be used with attribute 'gear'.");
			}
		}
		void  OverrideGearActionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideGearAction> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void OverrideGearActionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideGearAction> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  OverrideParkingBrakeActionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IOverrideParkingBrakeAction> object)
		{
			// Do the checks
			if (object->IsSetValue() && object->GetBrakeInput() != nullptr)
			{
				result.push_back("Property 'value' is deprecated and must not be used with property 'brakeInput'.");
			}

		}
		void  OverrideParkingBrakeActionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IOverrideParkingBrakeAction> object)
		{
			// Do the checks
			if (object->IsSetValue() && object->GetBrakeInput() != nullptr)
			{
				result.push_back("Attribute 'value' is deprecated and must not be used with element 'BrakePercent' or 'BrakeForce'.");
			}

		}
		void  OverrideParkingBrakeActionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideParkingBrakeAction> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void OverrideParkingBrakeActionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IOverrideParkingBrakeAction> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  SunDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <ISun> object)
		{
			// Do the checks
						// Do the checks
			if (object->IsSetIntensity() && object->IsSetIlluminance())
			{
				result.push_back("Property 'intensity' is deprecated and must not be used with property 'illuminance'.");
			}

		}
		void  SunDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <ISun> object)
		{
			// Do the checks
						// Do the checks
			if (object->IsSetIntensity() && object->IsSetIlluminance())
			{
				result.push_back("Attribute 'intensity' is deprecated and must not be used with attribute 'illuminance'.");
			}

		}
		void  SunDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ISun> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void SunDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ISun> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  TrafficSourceActionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <ITrafficSourceAction> object)
		{
			// Do the checks
			if (object->IsSetVelocity() && object->IsSetSpeed())
			{
				result.push_back("Property 'velocity' is deprecated and must not be used with property 'speed'.");
			}
		}
		void  TrafficSourceActionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <ITrafficSourceAction> object)
		{
			// Do the checks
			if (object->IsSetVelocity() && object->IsSetSpeed())
			{
				result.push_back("Attribute 'velocity' is deprecated and must not be used with attribute 'speed'.");
			}
		}
		void  TrafficSourceActionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ITrafficSourceAction> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void TrafficSourceActionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ITrafficSourceAction> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  TrafficSwarmActionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <ITrafficSwarmAction> object)
		{
			// Do the checks
			if (object->IsSetVelocity() && object->GetInitialSpeedRange() != nullptr)
			{
				result.push_back("Property 'velocity' is deprecated and must not be used with property 'initialSpeedRange'.");
			}
		}
		void  TrafficSwarmActionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <ITrafficSwarmAction> object)
		{
			// Do the checks
			if (object->IsSetVelocity() && object->GetInitialSpeedRange() != nullptr)
			{
				result.push_back("Attribute 'velocity' is deprecated and must not be used with element 'InitialSpeedRange'.");
			}
		}
		void  TrafficSwarmActionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ITrafficSwarmAction> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void TrafficSwarmActionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <ITrafficSwarmAction> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  WeatherDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IWeather> object)
		{
			// Do the checks
			if (object->IsSetCloudState() && object->IsSetFractionalCloudCover())
			{
				result.push_back("Property 'cloudState' is deprecated and must not be used with property 'fractionalCloudCover'.");
			}
		}
		void  WeatherDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IWeather> object)
		{
			// Do the checks
			if (object->IsSetCloudState() && object->IsSetFractionalCloudCover())
			{
				result.push_back("Attribute 'cloudState' is deprecated and must not be used with attribute 'fractionalCloudCover'.");
			}
		}
		void  WeatherDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IWeather> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void WeatherDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IWeather> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  ClothoidDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IClothoid> object)
		{
			// Do the checks
			if (object->IsSetCurvatureDot() && object->IsSetCurvaturePrime())
			{
				result.push_back("Property 'curvatureDot' is deprecated and must not be used with property 'isSetCurvaturePrime'.");
			}
			
		}
		void  ClothoidDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IClothoid> object)
		{
			// Do the checks
			if (object->IsSetCurvatureDot() && object->IsSetCurvaturePrime())
			{
				result.push_back("Attribute 'curvatureDot' is deprecated and must not be used with attribute 'isSetCurvaturePrime'.");
			}

		}
		void  ClothoidDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IClothoid> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void ClothoidDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IClothoid> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  DistanceConditionDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IDistanceCondition> object)
		{
			// Do the checks
			if (object->IsSetAlongRoute() && object->IsSetCoordinateSystem())
			{
				result.push_back("Property 'alongRoute' is deprecated and must not be used with property 'coordinateSystem'.");
			}
			if (object->IsSetAlongRoute() && object->IsSetRelativeDistanceType())
			{
				result.push_back("Property 'alongRoute' is deprecated and must not be used with property 'relativeDistanceType'.");
			}
		}

		void  DistanceConditionDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IDistanceCondition> object)
		{
			// Do the checks
			if (object->IsSetAlongRoute() && object->IsSetCoordinateSystem())
			{
				result.push_back("Attribute 'alongRoute' is deprecated and must not be used with attribute 'coordinateSystem'.");
			}
			if (object->IsSetAlongRoute() && object->IsSetRelativeDistanceType())
			{
				result.push_back("Attribute 'alongRoute' is deprecated and must not be used with attribute 'relativeDistanceType'.");
			}
		}
		void  DistanceConditionDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IDistanceCondition> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void DistanceConditionDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IDistanceCondition> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}

		void  PrecipitationDeprecationChecker::Check(std::vector<std::string>& result, std::shared_ptr <IPrecipitation> object)
		{
			// Do the checks
			if (object->IsSetIntensity() && object->IsSetPrecipitationIntensity())
			{
				result.push_back("Property 'intensity' is deprecated and must not be used with property 'precipitationIntensity'.");
			}
			
		}
		void  PrecipitationDeprecationChecker::CheckFileContext(std::vector<std::string>& result, std::shared_ptr <IPrecipitation> object)
		{
			// Do the checks
			if (object->IsSetIntensity() && object->IsSetPrecipitationIntensity())
			{
				result.push_back("Attribute 'intensity' is deprecated and must not be used with attribute 'precipitationIntensity'.");
			}

		}
		void  PrecipitationDeprecationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IPrecipitation> (object);
			std::vector<std::string> result{};
			CheckFileContext(result, typedObject);
			if (!result.empty())
			{
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));
				if (locator)
				{
					for (auto it = result.begin(); it < result.end(); it++)
					{
						auto msg = FileContentMessage(*it, ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
				}
			}
		}

		void PrecipitationDeprecationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IPrecipitation> (object);
			std::vector<std::string> result{};
			Check(result, typedObject);
			if (!result.empty())
			{
				auto kContext = std::make_shared<BaseTreeContext>(typedObject);
				for (auto it = result.begin(); it < result.end(); it++)
				{
					auto msg = TreeContentMessage(*it, ERROR, kContext);
					messageLogger->LogMessage(msg);
				}
			}
		}





		DeprecatedChecker::DeprecatedChecker()
		{
			DeprecatedChecker::AddGeoPositionCheckerRule(std::make_shared <GeoPositionDeprecationChecker>());
			DeprecatedChecker::AddOverrideBrakeActionCheckerRule(std::make_shared <OverrideBrakeActionDeprecationChecker>());
			DeprecatedChecker::AddOverrideGearActionCheckerRule(std::make_shared <OverrideGearActionDeprecationChecker>());
			DeprecatedChecker::AddOverrideParkingBrakeActionCheckerRule(std::make_shared <OverrideParkingBrakeActionDeprecationChecker>());
			DeprecatedChecker::AddSunCheckerRule(std::make_shared <SunDeprecationChecker>());
			DeprecatedChecker::AddTrafficSourceActionCheckerRule(std::make_shared <TrafficSourceActionDeprecationChecker>());
			DeprecatedChecker::AddTrafficSwarmActionCheckerRule(std::make_shared <TrafficSwarmActionDeprecationChecker>());
			DeprecatedChecker::AddWeatherCheckerRule(std::make_shared <WeatherDeprecationChecker>());
			DeprecatedChecker::AddClothoidCheckerRule(std::make_shared <ClothoidDeprecationChecker>());
			DeprecatedChecker::AddDistanceConditionCheckerRule(std::make_shared <DistanceConditionDeprecationChecker>());
			DeprecatedChecker::AddPrecipitationCheckerRule(std::make_shared <PrecipitationDeprecationChecker>());
		};
	}
}