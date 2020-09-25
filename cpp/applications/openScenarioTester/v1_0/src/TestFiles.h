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
#include "TestBase.h"

class TestFiles : public TestBase
{

public:

    TestFiles(std::string& executablePath) : TestBase(executablePath) {}

    bool TestSimpleSuccess() const
    {
        try 
        {
            (void) ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc");
            return true;
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestParamsSuccess() 
    {
        try 
        {
            (void) ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChangerParams.xosc");
            return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestParamsFailure() 
    {
        try 
        {
            ClearMessageLogger();
            const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot resolve parameter 'UnknownParameter'",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(49, 17, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'wrongDouble' to a double. Number format error.",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(85, 39, kFilename)));

            return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);

        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestUnvalidXml() 
    {
        try 
        {
            ClearMessageLogger();
            const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangeExtraHalf.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "XML-Dokumentstrukturen m�ssen innerhalb derselben Entity beginnen und enden.",
                NET_ASAM_OPENSCENARIO::FATAL, NET_ASAM_OPENSCENARIO::Textmarker(30, 3, kFilename)));
            return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::FATAL, _messageLogger), ASSERT_LOCATION);
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(true, ASSERT_LOCATION);
        }
    }

    bool TestUnknownElement() 
    {
        try 
        {
            ClearMessageLogger();
            const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangeExtraUnknownElement.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Unknown element 'ScenarioObject'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(50, 4, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Unknown element 'Test'",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(76, 4, kFilename)));
            return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestWrongAttributes() 
    {
        try 
        {
            ClearMessageLogger();
            const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerWrongAttributes.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'ezert' to a double. Number format error.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(78, 58, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'TTTT' is not allowed.",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(78, 72, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'TEST' to a double. Number format error.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(80, 39, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot convert '-56' to an unsignedInteger. Value must be in [0..4294967295].", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(138, 23, kFilename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Cannot convert '-40' to an unsignedInteger. Value must be in [0..4294967295].", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(175, 69, kFilename)));

            return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestWrongEndElement() 
    {
        try 
        {
            ClearMessageLogger();
            std::string filename = _executablePath + "/" + kInputDir + "DoubleLaneChangerWrongEndElement.xosc";
            (void) ExecuteParsing(filename);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Elementtyp \"PrivateActions\" muss mit dem entsprechenden Endtag \"</PrivateActions>\" beendet werden.", NET_ASAM_OPENSCENARIO::FATAL, NET_ASAM_OPENSCENARIO::Textmarker(73, 12, filename)));
            return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::FATAL, _messageLogger), ASSERT_LOCATION);
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(true, ASSERT_LOCATION);
        }
    }

    bool TestCustomCommandAction() 
    {
        try 
        {
            ClearMessageLogger();
            const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerCustomCommandAction.xosc";
            auto openScenarioImpl = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::IOpenScenario>(ExecuteParsing(kFilename));
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
            const auto kContent = openScenarioImpl->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetInit()->GetActions()->GetUserDefinedActions()[0]->GetCustomCommandAction()->GetContent();
            res = res && Assert("\n				This is text defined  Inhalt" == kContent, ASSERT_LOCATION);
            return res;
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }

    bool TestFileNotFound() const
    {
        try 
        {
            const std::string kFilename = _executablePath + "/" + kInputDir + "FileNotFound.xosc";
            (void) ExecuteParsing(kFilename);
            return true;
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what() << std::endl;
            return Assert(false, ASSERT_LOCATION);
        }
    }
};
