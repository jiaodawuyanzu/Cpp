//
// Created by 29918 on 2024/2/19.
//

#ifndef CPP_COMPLEX_H
#define CPP_COMPLEX_H
#include <iostream>

using namespace std;

// 单例模式
class A {
public:
    static A& getInstance() {
        static A a;
        return a;
    }
private:
    A() = default;
    A(const A& rhs) = default;
};


class Complex {
public:
    Complex(double r, double i) : re(r), im(i) { cout << "hello" << endl; }
    Complex() = default;
private:
    double re;
    double im;
};

void ComplexTest1();

#endif //CPP_COMPLEX_H
