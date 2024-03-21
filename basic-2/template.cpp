//
// Created by 29918 on 2024/3/20.
//

#include "template.h"

class Base1 {
public:
    Base1() { cout << "base1" << endl; }
public:
    int b1{2};
};

class Derived1 : public Base1 {
public:
    Derived1() { cout << "derived1" << endl; }
public:
    int d1{4};
};

class Base2 {
public:
    Base2() { cout << "base2" << endl; }
public:
    int b2{6};
};

class Derived2 : public Base2 {
public:
    Derived2() { cout << "derived2" << endl; }
public:
    int d2{8};
};

void TestMemTemplate()
{
    pairtem<Derived1, Derived2> p;
    cout << p.first.b1 << " " << p.first.d1 << endl;
    pairtem<Base1, Base2> p2(p);    // 对象切片
    cout << p2.first.b1 <<endl;
    Derived1 d1;
    Derived2 d2;
    pairtem<Derived1, Derived2> p3(d1, d2);
}
