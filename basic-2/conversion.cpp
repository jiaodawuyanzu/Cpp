//
// Created by 29918 on 2024/3/18.
//

#include <iostream>
#include "conversion.h"
using namespace std;

void TestConvertion()
{
    Fraction f(3, 5);
    double out = 4 + f;
    cout << "out = " << out << endl;
    cout << double(f) << endl;
    cout << (f + 9) << endl;
}