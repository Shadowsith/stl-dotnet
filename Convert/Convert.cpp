#include <iostream>
#include <exception> 
#include <string>
#include <regex> 
#include <cstdlib>
#include <cmath>  
#include <limits>
#include "Convert.h"

bool Convert::toBool(short s) {
    if (s == 1) {
        return true;
    }
    else {
        return false; 
    }
}

bool Convert::toBool(int i) {
    if (i == 1) {
        return true;
    }
    if ( i == 0 ) {
        return false;
    }
}

bool Convert::toBool(long l) {
    if (l == 1) {
        return true;
    }
    if ( l == 0 ) {
        return false; 
    }
}

bool Convert::toBool(char c) {
    if ( c == '0' || c == 'f' || c == 'F' ) {
        return false;
    }
    if ( c == '1' || c == 't' || c == 'T' ) {
        return true; 
    }
}

bool Convert::toBool(const char* cstr) {
    if ( cstr == "0" || cstr == "false" || cstr == "FALSE" ) {
        return false;
    }
    if ( cstr == "1" || cstr == "true" || cstr == "TRUE" ) {
        return true; 
    }
}

bool Convert::toBool(std::string str) {
    if ( str == "0" || str == "false" || str == "FALSE" ) {
        return false;
    }
    if ( str == "1" || str == "true" || str == "TRUE" ) {
        return true; 
    }
}

// to integer
int Convert::toInt(char c) {
    return static_cast<int>(c);
}

int Convert::toInt(short s) {
    return static_cast<int>(s);
}

int Convert::toInt(long l) {
    try {
        int converter = static_cast<int>(l);
        return converter; 
    }
    catch(std::exception ex) {
        std::cout << "Bad conversion from long to int: ";
        std::cout << ex.what() << std::endl;
    }
}

int Convert::toInt(float f) {
    return static_cast<int>(f);
} 

int Convert::toInt(double d) {
    return static_cast<int>(d);
}

int Convert::toInt(const char* cstr) {
    return std::atoi(cstr); 
}

int Convert::toInt(std::string str) {
    return std::stoi(str);
}

// to long integer
long Convert::toLong(char c) {
    return static_cast<long>(c);
}

long Convert::toLong(short s) {
    return static_cast<long>(s);
}

long Convert::toLong(int i) {
    return static_cast<long>(i);
}

long Convert::toLong(float f) {
    return static_cast<long>(f);
} 

long Convert::toLong(double d) {
    return static_cast<long>(d);
}

long Convert::toLong(const char* cstr) {
    return std::atol(cstr); 
}

long Convert::toLong(std::string str) {
    return std::stol(str);
}



// to String
std::string Convert::toString(char c) {
    std::string str(1, c);
    return str;
}

std::string Convert::toString(short s) {
    return std::to_string(s);    
}

std::string Convert::toString(int i) {
    return std::to_string(i);    
}

std::string Convert::toString(unsigned int ui) {
    return std::to_string(ui);    
}

std::string Convert::toString(long d) {
    return std::to_string(d);
}

std::string Convert::toString(unsigned long ul) {
    return std::to_string(ul);
}

std::string Convert::toString(long long ll) {
    return std::to_string(ll);
}

std::string Convert::toString(unsigned long long ull) {
    return std::to_string(ull);
}

std::string Convert::toString(float f) {
    return std::to_string(f);
}

std::string Convert::toString(double d) {
    return std::to_string(d);
}

std::string Convert::toString(const char* cstr) {
    std::string str(cstr);
    return str;
}
