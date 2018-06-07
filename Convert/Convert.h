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

        static long toLong(char c);
        static long toLong(short s);
        static long toLong(int i);
        static long toLong(float f);
        static long toLong(double d);
        static long toLong(const char* cstr); 
        static long toLong(std::string str);

        static float toFloat(char c);
        static float toFloat(short s);
        static float toFloat(int i);
        static float toFloat(long l);
        static float toFloat(double d);
        static float toFloat(const char* cstr); 
        static float toFloat(std::string str);

        static double toDouble(char c);
        static double toDouble(short s);
        static double toDouble(int i);
        static double toDouble(long l);
        static double toDouble(float f);
        static double toDouble(const char* cstr); 
        static double toDouble(std::string str);

        static const char* toCString(char c);
        static const char* toCString(short s);
        static const char* toCString(int i);
        static const char* toCString(long l);
        static const char* toCString(float f);
        static const char* toCString(double d);
        static const char* toCString(std::string str);

        static std::string toString(char c);
        static std::string toString(short s);
        static std::string toString(int i);
        static std::string toString(unsigned int ui);
        static std::string toString(long l);
        static std::string toString(unsigned long ul);
        static std::string toString(long long ll);
        static std::string toString(unsigned long long ull);
        static std::string toString(float f);
        static std::string toString(double d);
        static std::string toString(long double ld);
        static std::string toString(const char* cstr); 
};

#endif


