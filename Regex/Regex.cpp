#include <string>
#include <regex>
#include <vector>
#include "Regex.h"
#include <iostream>

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

int Regex::getIndexOfFirstMatch(std::string &str, std::regex &pattern) {
    int index = -1;
    std::smatch match;
    std::string str_match = ""; 
    if ( std::regex_search(str,match,pattern) ){
        for (auto x:match)
            str_match = x; 
        index = str.find(str_match); 
    }
}

int Regex::getIndexOfFirstMatch(std::string &str, std::string &pattern) {
    int index = -1;
    std::smatch match;
    std::string str_match = "";
    std::regex re(pattern); 
    if ( std::regex_search(str,match,re) ){
        for (auto x:match)
            str_match = x; 
        index = str.find(str_match); 
    }
    return index; 
}

int Regex::getIndexOfFirstMatch(const char* &cstr, const char* &pattern) {
    int index = -1;
    std::smatch match;
    std::string str(cstr);
    std::string str_match = "";
    std::regex re(pattern); 
    if ( std::regex_search(str,match,re) ){
        for (auto x:match)
            str_match = x; 
        index = str.find(str_match); 
    }
    return index;
}

std::vector<std::string> Regex::getAllMatches(std::string &str, std::regex &pattern) {
    std::vector<std::string> matches; 
    std::sregex_iterator iter(str.begin(), str.end(), pattern); 
    std::sregex_iterator end; 

    while (iter != end) {
        for (int i = 0; i < iter->size(); i++) {
            matches.push_back((*iter)[i]);
        }
        iter++; 
    }
    return matches; 
}

std::vector<std::string> Regex::getAllMatches(std::string &str, std::string &pattern) {
    std::vector<std::string> matches; 
    std::regex re(pattern);
    std::sregex_iterator iter(str.begin(), str.end(), re); 
    std::sregex_iterator end; 

    while (iter != end) {
        for (int i = 0; i < iter->size(); i++) {
            matches.push_back((*iter)[i]);
        }
        iter++; 
    }
    return matches; 
}

std::vector<const char*> Regex::getAllMatches(const char* &cstr, const char* &pattern) {
    std::vector<const char*> matches; 
    std::regex re(pattern);
    std::string str(cstr);
    std::sregex_iterator iter(str.begin(), str.end(), re); 
    std::sregex_iterator end; 

    while (iter != end) {
        for (int i = 0; i < iter->size(); i++) {
            str = (*iter)[i];
            matches.push_back(str.c_str());
        }
        iter++; 
    }
    return matches; 
}

std::vector<int> Regex::getIndicesOfAllMatches(std::string &str, std::regex &pattern) {
    std::vector<std::string> matches; 
    std::vector<int> indices; 
    std::sregex_iterator iter(str.begin(), str.end(), pattern); 
    std::sregex_iterator end; 

    while (iter != end) {
        for (int i = 0; i < iter->size(); i++) {
            matches.push_back((*iter)[i]);
        }
        iter++; 
    }
    for (int i = 0; i < matches.size(); i++) {
        
    }
}

int main(int argc, char *argv[])
{
    const char* str1 = "hallo";
    const char* str2 = "a";
    std::cout << Regex::getFirstMatch(str1, str2) << std::endl;
    return 0;
}
