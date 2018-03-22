#ifndef REGEX_H
#define REGEX_H

#include <string>
#include <regex>
#include <vector>

class Regex {

    public: 
        static bool isMatch(std::string &str, std::regex &pattern); 
        static bool isMatch(std::string &str, std::string &pattern); 

        static std::string getFirstMatch(std::string &str, std::regex &pattern);
        static std::string getFirstMatch(std::string &str, std::string &pattern);

        static int getIndexOfFirstMatch(std::string &str, std::regex &pattern);
        static int getIndexOfFirstMatch(std::string &str, std::string &pattern);

        static std::string replaceFirstMatch(std::string &str, std::regex &pattern, std::string replacement);
        static std::string replaceFirstMatch(std::string &str, std::string &pattern, std::string replacement);

        static std::string getLastMatch(std::string &str, std::regex &pattern);
        static std::string getLastMatch(std::string &str, std::string &pattern);

        static int getIndexOfLastMatch(std::string &str, std::regex &pattern);
        static int getIndexOfLastMatch(std::string &str, std::string &pattern);

        static std::string replaceLastMatch(std::string &str, std::regex &pattern, std::string replacement);
        static std::string replaceLastMatch(std::string &str, std::string &pattern, std::string replacement);

        static std::vector<std::string> getAllMatches(std::string &str, std::regex &pattern);
        static std::vector<std::string> getAllMatches(std::string &str, std::string &pattern);

        static std::vector<int> getIndicesOfAllMatches(std::string &str, std::regex &pattern);
        static std::vector<int> getIndicesOfAllMatches(std::string &str, std::string &pattern);

        static std::string replaceAllMatches(std::string &str, std::regex &pattern, std::string replacement);
        static std::string replaceAllMatches(std::string &str, std::string &pattern, std::string replacement);

};


#endif
