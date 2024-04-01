//
// Created by 29918 on 2024/3/29.
//

#ifndef CPP_COMMON_H
#define CPP_COMMON_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const long ASIZE  =   500000L;
long get_a_target_long();
string get_a_target_string();
int compareLongs(const void* a, const void* b);
int compareStrings(const void* a, const void* b);

#endif //CPP_COMMON_H
