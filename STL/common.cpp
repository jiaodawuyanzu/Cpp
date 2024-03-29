//
// Created by 29918 on 2024/3/29.
//
#include "common.h"

long get_a_target_long()
{
    long target = 0;
    cout << "target (0~" << RAND_MAX << "): ";
    cin >> target;
    return target;
}

string get_a_target_string()
{
    long target = 0;
    char buf[10] = {0};
    cout << "target (0~" << RAND_MAX << "): ";
    cin >> target;
    snprintf(buf, 10, "%d", target);
    cout << buf << endl;
    return string(buf);
}

int compareLongs(const void* a, const void* b)
{
    return (*(long*)(a)) - *(long*)(b);
}

int compareStrings(const void* a, const void* b)
{
    if (*(string*)a > *(string*)b) {
        return 1;
    } else if (*(string*)a < *(string*)b) {
        return -1;
    } else {
        return 0;
    }
}