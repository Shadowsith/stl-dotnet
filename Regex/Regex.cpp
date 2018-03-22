#include <string>
#include <regex>
#include <vector>
#include "Regex.h"
#include <iostream>

bool Regex::isMatch(std::string &str, std::regex &pattern) {
    return std::regex_match(str, pattern); 
}

bool Regex::isMatch(std::string &str, std::string &pattern) {
    std::regex re(pattern);
    return std::regex_match(str, re); 
}

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

int Regex::getIndexOfFirstMatch(std::string &str, std::regex &pattern) {
    std::string firstMatch = Regex::getFirstMatch(str, pattern); 
    return str.find(firstMatch); 
}

int Regex::getIndexOfFirstMatch(std::string &str, std::string &pattern) {
    std::string firstMatch = Regex::getFirstMatch(str,pattern);
    return str.find(firstMatch); 
}

std::string Regex::replaceFirstMatch(std::string &str, std::regex &pattern, std::string replacement) {
    std::string firstMatch = Regex::getFirstMatch(str, pattern);
    std::size_t pos = str.find(firstMatch);
    if(pos != std::string::npos){
        str.replace(pos, firstMatch.length(), replacement);
    }
    return str;
}

std::string Regex::replaceFirstMatch(std::string &str, std::string &pattern, std::string replacement) {
    std::string firstMatch = Regex::getFirstMatch(str, pattern);
    std::size_t pos = str.find(firstMatch);
    if(pos != std::string::npos){
        str.replace(pos, firstMatch.length(), replacement);
    }
    return str;
}


std::string Regex::getLastMatch(std::string &str, std::regex &pattern) {
    std::sregex_iterator iter(str.begin(), str.end(), pattern); 
    std::sregex_iterator end; 
    std::string str_match = "";

    while ( iter != end ) {
        str_match = (*iter).str(); 
        iter++; 
    }
    return str_match; 
}

std::string Regex::getLastMatch(std::string &str, std::string &pattern) {
    std::regex re(pattern);
    std::sregex_iterator iter(str.begin(), str.end(), re); 
    std::sregex_iterator end; 
    std::string str_match = "";

    while (iter != end) {
        str_match = (*iter).str(); 
        iter++;
    }
    return str_match; 
}

int Regex::getIndexOfLastMatch(std::string &str, std::regex &pattern) {
    std::string lastMatch = Regex::getLastMatch(str, pattern); 
    return str.rfind(lastMatch); 
}

int Regex::getIndexOfLastMatch(std::string &str, std::string &pattern) {
    std::string lastMatch = Regex::getLastMatch(str, pattern); 
    return str.rfind(lastMatch); 
}

std::string Regex::replaceLastMatch(std::string &str, std::regex &pattern, std::string replacement) {
    std::string lastMatch = Regex::getLastMatch(str, pattern); 
    std::size_t pos = str.rfind(lastMatch);
    if(pos != std::string::npos){
        str.replace(pos, lastMatch.length(), replacement);
    }
    return str;
}

std::string Regex::replaceLastMatch(std::string &str, std::string &pattern, std::string replacement) {
    std::string lastMatch = Regex::getLastMatch(str, pattern); 
    std::size_t pos = str.rfind(lastMatch);
    if(pos != std::string::npos){
        str.replace(pos, lastMatch.length(), replacement);
    }
    return str;
}

std::vector<std::string> Regex::getAllMatches(std::string &str, std::regex &pattern) {
    std::vector<std::string> matches; 
    std::sregex_iterator iter(str.begin(), str.end(), pattern); 
    std::sregex_iterator end; 

    while (iter != end) {
        matches.push_back((*iter).str());
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
        matches.push_back((*iter).str());
        iter++; 
    }
    return matches; 
}

std::vector<int> Regex::getIndicesOfAllMatches(std::string &str, std::regex &pattern) {
    std::vector<std::string> matches = Regex::getAllMatches(str, pattern); 
    std::vector<int> indices; 

    if ( matches.size() > 0 ) {
        std::size_t pos = str.find(matches[0]);
        while(pos != std::string::npos)
        {
            indices.push_back(pos);
            pos = str.find(matches[0],pos+1);
        }
    }
    return indices; 
}


std::vector<int> Regex::getIndicesOfAllMatches(std::string &str, std::string &pattern) {
    std::vector<std::string> matches = Regex::getAllMatches(str, pattern); 
    std::vector<int> indices; 

    if ( matches.size() > 0 ) {
        std::size_t pos = str.find(matches[0]);
        while(pos != std::string::npos)
        {
            indices.push_back(pos);
            pos = str.find(matches[0],pos+1);
        }
    }
    return indices; 
}

int main(int argc, char *argv[])
{
    std::string str1 = "{0} {1} {2}";
    std::regex re("\\{[0-9]\\}");
    std::string pattern = "\\{[0-9]\\}"; 
    std::vector<std::string> vec = Regex::getAllMatches(str1, pattern);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
    return 0;
}
