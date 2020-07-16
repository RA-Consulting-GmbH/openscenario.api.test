#pragma once
#include "TestBase.h"
#include <cassert>


class TestFiles : public TestBase
{

public:

    void TestSimpleSuccess() const
    {
        try 
        {
            (void) ExecuteParsing(kInputDir + "DoubleLaneChanger.xosc");
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what() << std::endl;
        }
    }

    void TestParamsSuccess() 
    {
        try 
        {
            (void) ExecuteParsing(kInputDir + "DoubleLaneChangerParams.xosc");
            assert(!HasErrors(_messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what() << std::endl;
        }
    }

    void TestParamsFailure() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            const std::string kFilename = kInputDir + "DoubleLaneChangerParamsError.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot resolve parameter 'UnknownParameter'",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(35, 17, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'wrongDouble' to a double. Number format error.",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(71, 39, kFilename)));

            assert(AssertMessages(messages, RAC_OPENSCENARIO::ERROR, _messageLogger));

        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what() << std::endl;
        }
    }

    void TestUnvalidXml() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            const std::string kFilename = kInputDir + "DoubleLaneChangeExtraHalf.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "XML-Dokumentstrukturen müssen innerhalb derselben Entity beginnen und enden.",
                RAC_OPENSCENARIO::FATAL, RAC_OPENSCENARIO::Textmarker(30, 3, kFilename)));
            assert(AssertMessages(messages, RAC_OPENSCENARIO::FATAL, _messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            //Assertions.assertTrue( e.getCause() instanceof XMLParseException);
            std::cout << e.what() << std::endl;
        }
    }

    void TestUnknownElement() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            const std::string kFilename = kInputDir + "DoubleLaneChangeExtraUnknownElement.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Unknown element 'ScenarioObject'", RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(33, 4, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage("Unknown element 'Test'",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(59, 4, kFilename)));
            assert(AssertMessages(messages, RAC_OPENSCENARIO::ERROR, _messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            //Assertions.assertTrue(e.getCause() instanceof XMLParseException);
            std::cout << e.what() << std::endl;

        }
    }

    void TestWrongAttributes() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            const std::string kFilename = kInputDir + "DoubleLaneChangerWrongAttributes.xosc";
            (void) ExecuteParsing(kFilename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'ezert' to a double. Number format error.", RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(61, 58, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage("Value 'TTTT' is not allowed.",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(61, 72, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot convert 'TEST' to a double. Number format error.", RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(63, 39, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot convert '-56' to an unsignedInteger. Value must be in [0..4294967295].", RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(121, 23, kFilename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Cannot convert '-40' to an unsignedInteger. Value must be in [0..4294967295].", RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(158, 69, kFilename)));
            assert(AssertMessages(messages, RAC_OPENSCENARIO::ERROR, _messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            //Assertions.assertTrue(e.getCause() instanceof XMLParseException);
            std::cout << e.what() << std::endl;
        }
    }

    void TestWrongEndElement() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            std::string filename = kInputDir + "DoubleLaneChangerWrongEndElement.xosc";
            (void) ExecuteParsing(filename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Elementtyp \"PrivateActions\" muss mit dem entsprechenden Endtag \"</PrivateActions>\" beendet werden.", RAC_OPENSCENARIO::FATAL, RAC_OPENSCENARIO::Textmarker(73, 12, filename)));
            assert(AssertMessages(messages, RAC_OPENSCENARIO::FATAL, _messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            //Assertions.assertTrue(e.getCause() instanceof XMLParseException);
            std::cout << e.what() << std::endl;
        }
    }

    void TestCustomCommandAction() 
    {
        try 
        {
            _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            const std::string kFilename = kInputDir + "DoubleLaneChangerCustomCommandAction.xosc";
            auto openScenarioImpl = ExecuteParsing(kFilename);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;
            assert(AssertMessages(messages, RAC_OPENSCENARIO::ERROR, _messageLogger));
            const auto kContent = openScenarioImpl->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetInit()->GetActions()->GetUserDefinedActions()[0]->GetCustomCommandAction()->GetContent();
            assert("\n				This is text defined  Inhalt" == kContent);
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException e) 
        {
            //Assertions.assertTrue(e.getCause() instanceof XMLParseException);
            std::cout << e.what() << std::endl;
        }
    }

    void TestFileNotFound() const
    {
        try 
        {
            const std::string kFilename = kInputDir + "FileNotFound.xosc";
            (void) ExecuteParsing(kFilename);

        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            //Assertions.assertTrue(e.getCause() instanceof FileNotFoundException);
            std::cout << e.what() << std::endl;
        }
    }
};
