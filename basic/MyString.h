//
// Created by 29918 on 2024/2/28.
//

#ifndef CPP_MYSTRING_H
#define CPP_MYSTRING_H
#include <cstring>

class String {
    String(const char* str = 0);
    String(const Sting& str);
    String& operator = (const String& str);
    ~String();
    char * getString() const {return mData;};
private:
    char* mData;
};


inline String::String(const char* str = 0)
{
    if (str) {
        mData = new char[strlen(str) + 1];
        strcpy(mData, str);
    } else {
        mData = new char[1];
        *mData = '\0';
    }
}

inline String::~String()
{
    delete[] mData;
}


#endif //CPP_MYSTRING_H
