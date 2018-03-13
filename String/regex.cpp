#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::string str("1231");
    std::string str1 = "Hallo {0} ich bin {1} {2} {32}";
    std::regex r("\\{[0-9]{1,3}\\}");

    std::sregex_iterator iter(str1.begin(), str1.end(), r);
    std::sregex_iterator end;

    int matches = 0;
    while ( iter != end ) {
        for (int i = 0; i < iter->size(); i++) {
            std::cout << (*iter)[i]  << std::endl;
        }
        iter++; 
        matches++; 
    }
    std::cout << "Matches: " << matches << std::endl;

    return 0;
}
