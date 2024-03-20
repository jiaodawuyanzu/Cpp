#include <iostream>
#include "basic/Complex.h"
#include "basic/Complex-test.h"
#include "basic/MyString.h"
#include "basic-2/conversion.h"
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Base {
public:
    Base(int aa, int bb) : a (aa), b(bb) {
        cout << "aa bb ctor base " << endl;
    }

    Base() {
        cout << "base null ctor" << endl;
    }
public:
    int a;
    int b;
};

class Device : public Base {
public:
    Device() {
        cout << "device ctor" << endl;
    }

    Device(int a, int b, int c, int d) : c(c), d(d), Base(a, b) {
        cout << "device abdc ctor" << endl;
    }
public:
    int c;
    int d;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    ComplexTesttMain();
    string s("hello");
    cout << s << endl;

    complex *cc = new complex[3];

    Mystring::StringTest();

    TestConvertion();
    Base a1;
    cout << a1.a << a1.b << endl;
    Base a2(1,2);
    cout << a2.a << a2.b << endl;
    Device d1;
    Device d2(1,2,3,4);
    return 0;
}

