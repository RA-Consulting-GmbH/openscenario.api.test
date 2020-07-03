#pragma once

#include "IParserMessageLogger.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    class CheckerRule
    {
    public:
        virtual  ~CheckerRule() = default;
    };

    /**
     * This represents a rule that can be applied to any model object instance.
     * It implements the command pattern. The rule is added to the type and applyRule
     * is executed when the object has been filled.
     *
     */
    template <class T>
    class ICheckerRule: public CheckerRule
    {
    public:
        ICheckerRule() = default;
        virtual  ~ICheckerRule() = default;
        virtual void ApplyRule(IParserMessageLogger& messageLogger, std::shared_ptr<T> object) {}
    };

}