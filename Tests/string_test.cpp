#include <iostream>
#include <string>
#include "./lib/textformat.h"
#include "../String/String.h"

void EqualTest(){
    std::string str1 = "hello";
    std::string str2 = "hello";
    if(String::compare(str1, str2)) 
        std::cout << text::green("EqualTest: accepted") << std::endl;
    else
        std::cout << text::red("EqualTest: denied") << std::endl;
}

void NotEqualTest() {
    std::string str1 = "hello";
    std::string str2 = "hella";
    if(!String::compare(str1, str2)) 
        std::cout << text::green("NotEqualTest: accepted") << std::endl;
    else
        std::cout << text::red("NotEqualTest: denied") << std::endl;
}

void EmptyTest() {
    std::string str;
    if(String::isEmpty(str))
        std::cout << text::green("EmptyTest: accepted") << std::endl;
    else
        std::cout << text::red("EmptyTest: denied") << std::endl;
}

void NotEmptyTest() {
    std::string str = "1";
    if(!String::isEmpty(str))
        std::cout << text::green("NotEmptyTest: accepted") << std::endl;
    else
        std::cout << text::red("NotEmptyTest: denied") << std::endl;
}

void UpperTest() {
    std::string str1 = "hello";
    std::string str2 = "HELLO";
    str1 = String::toUpper(str1);
    if(String::compare(str1,str2))
        std::cout << text::green("UpperTest: accepted") << std::endl;
    else
        std::cout << text::green("UpperTest: accpeted") << std::endl;
}

void LowerTest() {
    std::string str1 = "HELLO";
    std::string str2 = "hello";
    str1 = String::toLower(str1);
    if(String::compare(str1,str2))
        std::cout << text::green("LowerTest: accepted") << std::endl;
    else
        std::cout << text::green("LowerTest: accpeted") << std::endl;
}


int main(int argc, char *argv[])
{
    EqualTest(); 
    NotEqualTest();
    EmptyTest();
    NotEmptyTest();
    UpperTest();
    LowerTest();

    return 0;
}
