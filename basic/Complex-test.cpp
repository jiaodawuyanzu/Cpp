//
// Created by 29918 on 2024/2/22.
//
#include <iostream>
#include "Complex.h"
#include "Complex-test.h"

using namespace std;

ostream&
operator << (ostream& os, const complex& x)
{
    return os << '(' << real (x) << ',' << imag (x) << ')';
}

int ComplexTesttMain()
{
    complex c1(2, 1);
    complex c2(4, 0);

    cout << c1 << endl;
    cout << c2 << endl;

    cout << c1+c2 << endl;
    cout << c1-c2 << endl;
    cout << c1*c2 << endl;
    cout << c1 / 2 << endl;

    cout << conj(c1) << endl;
    cout << norm(c1) << endl;
    cout << polar(10,4) << endl;

    cout << (c1 += c2) << endl;

    cout << (c1 == c2) << endl;
    cout << (c1 != c2) << endl;
    cout << +c2 << endl;
    cout << -c2 << endl;

    cout << (c2 - 2) << endl;
    cout << (5 + c2) << endl;

    return 0;
}
