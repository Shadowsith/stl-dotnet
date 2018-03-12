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


int Convert::toInt(char c) {
    return static_cast<int>(c);
}

int Convert::toInt(short s) {
    return static_cast<int>(s);
}

int Convert::toInt(long l) {
    try {
        int converter = static_cast<int>(l);
    }
    catch(std::exception ex){
        std::cout << "Bad conversion from long to int: ";
        std::cout << ex.what() << std::endl;
    }
}

int Convert::toInt(float f) {
    f = roundf(f);
    return static_cast<int>(f);
} 

int Convert::toInt(double d) {
    d = round(d); 
    return static_cast<int>(d);
}

int Convert::toInt(const char* cstr) {
    return std::atoi(cstr); 
}

int Convert::toInt(std::string str) {
    return std::stoi(str);
}



