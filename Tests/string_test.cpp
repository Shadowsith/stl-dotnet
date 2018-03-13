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

void FormatTest() {
    std::string first_name = "Jolly";
    std::string last_name = "Rogers";
    std::string job = "Pirate";

    std::vector<std::string> sList;
    sList.push_back(first_name);
    sList.push_back(last_name);
    sList.push_back(job);
    sList.push_back("Hohoho");
    sList.push_back("and a bottel full rum");
    
    std::string format1 = String::format("{0} is his first name", first_name);
    std::string format2 = String::format("{0}'s last name is {1}", first_name, last_name); 
    std::string format3 = String::format("{0} {1} is a {2}.", first_name, last_name, job); 
    std::string format4 = String::format("{0} {1} is a {2}. {3} {4}.", sList);

    if ( String::compare(format1, "Jolly is his first name") 
            && String::compare(format2, "Jolly's last name is Rogers")
            && String::compare(format3, "Jolly Rogers is a Pirate.")
            && String::compare(format4, "Jolly Rogers is a Pirate. Hohoho and a bottel full rum."))
    {
        std::cout << text::green("FormatTest: accepted") << std::endl;
    }
    else {
        std::cout << text::red("FormatTest: denied") << std::endl;
        std::cout << format1 << std::endl;
        std::cout << format2 << std::endl;
        std::cout << format3 << std::endl;
        std::cout << format4 << std::endl;
    }


}


int main(int argc, char *argv[])
{
    EqualTest(); 
    NotEqualTest();
    EmptyTest();
    NotEmptyTest();
    UpperTest();
    LowerTest();
    FormatTest(); 

    return 0;
}
