#include <string>
#include <regex>
#include <vector>
#include "Regex.h"

std::string Regex::getFirstMatch(std::string &str, std::regex &pattern) {
    std::smatch match;
    std::string str_match = ""; 
    if ( std::regex_search(str,match,pattern) ){
        for (auto x:match)
            str_match = x; 
    }
    return str_match; 
}

std::string Regex::getFirstMatch(std::string &str, std::string &pattern) {
    std::smatch match;
    std::string str_match = "";
    std::regex re(pattern); 
    if ( std::regex_search(str,match,re) ){
        for (auto x:match)
            str_match = x; 
    }
    return str_match; 
}

const char* Regex::getFirstMatch(const char* &cstr, const char* &pattern) {
    std::smatch match;
    std::string str(cstr);
    std::string str_match = "";
    std::regex re(pattern); 
    if ( std::regex_search(str,match,re) ){
        for (auto x:match)
            str_match = x; 
    }
    const char* cstr_match = str_match.c_str(); 
    return cstr_match; 
}
