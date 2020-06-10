#pragma once

#include "IOpenScenarioModelElement.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ICheckerRule.h"

namespace RAC_OPENSCENARIO
{

    /**
     * An abstract implementation of ICheckerRule to check ranges of object's properties.
     *
     */
    template <class T>
    class RangeCheckerRule: public IOpenScenarioModelElement, public ICheckerRule<T> 
    {
    public:

        RangeCheckerRule() = default;

        /**
         * Logging a range error violation
         * @param object The object that is tested.
         * @param messageLogger to log the message if violation is detected
         * @param propertyName name of the property that is checked
         * @param propertyValue the actual value of the property that was evaluated
         * @param operatorString operator that was evaluated
         * @param comparedValue the value the actual value is compared to.
         * @param attributeKey the attribute key that is used to locate the violation.
         */
        void LogMessage(std::shared_ptr<IOpenScenarioModelElement> object, IParserMessageLogger& messageLogger, std::string propertyName, std::string propertyValue, std::string operatorString, std::string comparedValue, std::string attributeKey) const
        {

            auto locator = std::dynamic_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

            if (locator)
            {
                auto textmarker = locator->GetStartMarkerOfProperty(attributeKey);
                auto msg = GetMessage(propertyName, propertyValue, operatorString, comparedValue);
                FileContentMessage fcm(msg, ERROR, textmarker);
                messageLogger.LogMessage( fcm );
            }
        }

        /**
         * Logging a Range error message.
         * @param propertyName name of the property
         * @param propertyValue the actual value of the property that was evaluated
         * @param operatorString operator that was evaluated
         * @param comparedValue the value the actual value is compared to.
         * @return the message
         */
    private:
        static std::string GetMessage(std::string& propertyName, std::string& propertyValue, std::string& operatorString, std::string& comparedValue) 
        {
            return "Range error: Rule (" + propertyName + operatorString + comparedValue + ") is violated (value: " + propertyValue + ")";
        }
    };

}