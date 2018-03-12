#ifndef CONVERT_H
#define CONVERT_H

#include <string>

class Convert {

    public:

        static bool toBool(short s);
        static bool toBool(int i);
        static bool toBool(long l); 
        static bool toBool(char c);
        static bool toBool(const char* cstr);
        static bool toBool(std::string str);

        static int toInt(char c);
        static int toInt(short s);
        static int toInt(long l);
        static int toInt(float f);
        static int toInt(double d);
        static int toInt(const char* cstr); 
        static int toInt(std::string str);

};

#endif


