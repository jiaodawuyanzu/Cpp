//
// Created by 29918 on 2024/3/20.
//

#ifndef CPP_TEMPLATE_H
#define CPP_TEMPLATE_H
#include <iostream>
using namespace std;
/* 1、clss template*/
template<class T>
class complextem {
public:
    complextem(T r = 0, T i = 0) : re(r), im(i) {

    }
    complextem& operator+(const complextem& rhs);
    T real() { return re; }
    T imag() { return im; }
private:
    T re;
    T im;
};

/* 2、函数模板 */
template<class T>
inline const T& mintem(T& a, T& b)
{
    return a < b ? a : b;
}

class stone {
public:
    stone() = default;
    bool operator<(const stone& rhs) {
        return _weight < rhs._weight;
    }

private:
    int _w;
    int _h;
    int _weight;
};

/* 3、成员模板 */
template <class T1, class T2>
class pairtem {
public:
    pairtem() : first(T1()), second(T2()) { cout << "default ctor" << endl; }

    pairtem(const T1& a, const T2& b) : first(a), second(b) { cout << "by value ctor" << endl; }

    template<class U1, class U2>
    pairtem(const pairtem<U1, U2>& p) : first(p.first), second(p.second) { cout << "mem template ctor" << endl; }
public:
    T1 first;
    T2 second;
};

void TestMemTemplate();
#endif //CPP_TEMPLATE_H
