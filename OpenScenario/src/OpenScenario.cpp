#include <iostream>
#include "Enumerations.h"
#include "ErrorLevel.h"

#define stringify( name ) # name

int main()
{
    //RAC_OPENSCENARIO::CloudState temp("skyOff");
    int a = 10;

    std::cout << typeid(a).name() << std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("") <<std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("skyOff") << std::endl;
}
