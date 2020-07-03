#pragma once

#include "IOpenScenarioModelElement.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    template <class T>
    class INamedReference: public IOpenScenarioModelElement 
    {
    public:
        /**
         * The real object the reference is pointing to
         * @return resolved real object or null if not yet resolved or could not be resolved.
         */
         virtual std::shared_ptr<T> GetTargetObject()
         {
             return nullptr;
         }

        /**
         * The name that represents the real object.
         * @return the name of the target object.
         */
        virtual std::string GetNameRef()
         {
            return "";
         }

        /**
         * Setting the parent of this named reference
         * @param parent parent in the tree.
         */
        virtual void SetParent(const std::shared_ptr<IOpenScenarioModelElement> parent) {}

    };
}