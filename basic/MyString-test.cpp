//
// Created by 29918 on 2024/3/1.
//
#include "MyString.h"
#include <iostream>

namespace Mystring {
    int StringTest() {
        String s1("hello");
        String s2("world");

        String s3(s2);
        cout << s3 << endl;

        s3 = s1;
        cout << s3 << endl;
        cout << s2 << endl;
        cout << s1 << endl;
        return 0;
    }
}