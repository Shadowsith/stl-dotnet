#include "../Convert/Convert.h"
#include "lib/textformat.h"
#include <limits> 
#include <iostream>

void ToIntTest() {
    short s = 127;
    long l = 50056;
    float f = 55.44;
    double d = 23435.987343;
    const char* ch = "12345";
    std::string str = "12345";

    if ( Convert::toInt(s) == 127 
            && Convert::toInt(l) == 50056 
            && Convert::toInt(f) == 55
            && Convert::toInt(d) == 23436
            && Convert::toInt(ch) == 12345
            && Convert::toInt(str) == 12345 )
    {
        std::cout << text::green("ToIntTest: accepted") << std::endl; 
    }
    else 
    {
        std::cout << text::red("ToIntTest: denied") << std::endl;
        std::cout << Convert::toInt(f) << std::endl;
        std::cout << Convert::toInt(d) << std::endl;
    }
}

void LimitsToIntTest() {

}

int main(int argc, char *argv[])
{
    ToIntTest(); 
    return 0;
}
