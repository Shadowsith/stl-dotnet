#ifndef REGEX_H
#define REGEX_H

#include <string>
#include <regex>
#include <vector>

class Regex {

    public: 
        static std::string getFirstMatch(std::string &str, std::regex &pattern);
        static std::string getFirstMatch(std::string &str, std::string &pattern);
        static const char* getFirstMatch(const char* &cstr, const char* &pattern);; 

        static int getIndexOfFirstMatch(std::string &str, std::regex &pattern);
        static int getIndexOfFirstMatch(std::string &str, std::string &pattern);
        static int getIndexOfFirstMatch(const char* &cstr, const char* &pattern);

        static std::string getLastMatch(std::string &str, std::regex &pattern);
        static std::string getLastMatch(std::string &str, std::string &pattern);
        static const char* getLastMatch(const char* &cstr, const char* &pattern); 

        static int getIndexOfLastMatch(std::string &str, std::regex &pattern);
        static int getIndexOfLastMatch(std::string &str, std::string &pattern);
        static int getIndexOfLastMatch(const char* &cstr, const char* &pattern);

        static std::vector<std::string> getAllMatches(std::string &str, std::regex &pattern);
        static std::vector<std::string> getAllMatches(std::string &str, std::string &pattern);
        static std::vector<const char*> getAllMatches(const char* &cstr, const char* &pattern);
};


#endif
