#include <iostream>
#include "basic/Complex.h"
#include "basic/Complex-test.h"
#include "basic/MyString.h"
#include "basic-2/template.h"
#include "basic-2/conversion.h"
#include "basic-2/objectModel.h"
#include "basic-2/newanddelete.h"
#include "STL/common.h"
#include "STL/arraytest.h"
#include "STL/vectortest.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <deque>
//#include <bits/stdc++.h>
//#include <bits/stl_tree.h>
#include <set>
#include <map>


using std::multiset;
using namespace std;

class A {
public:
    class B {
    public:
        int b;
    };
public:
    int a;
};

class MyComparator {
public:
    MyComparator() { cout << "ctor 11111" << endl;}
    MyComparator(const MyComparator&) {
        std::cout << "Copy Constructor\n";
    }

    MyComparator(MyComparator&&) noexcept {
        std::cout << "Move Constructor\n";
    }
    ~MyComparator() {cout << "dtor 11111" << endl;}
    bool operator()(int a, int b) {
        return a > b;  // 降序比较
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
//    ComplexTesttMain();
//    string s("hello");
//    cout << s << endl;
//
//    complex *cc = new complex[3];
//
//    Mystring::StringTest();
//
//    TestConvertion();
//    TestMemTemplate();
//    TestVariadic();
//    TestObjectModel1();
//    TestObjectModel2();

//    TestNewDelete1();
//    TestPlacementNewAndDelete();
//    cout << sizeof(A) << " " << sizeof(A::B) << endl;
//    get_a_target_string();
//    arrayTest::test_array();
//    long value = 10000000;
//    long& vv = value;
//    vectortest::vector_test(value);
//    cout << sizeof(list<int>) << endl;
//    cout << sizeof(list<bool>) << endl;

//    deque<int> dd {1,2,3,4,5};
//    cout << dd[4] << endl;

    vector<int> temp = {1,2,5,4,87,44};
    sort(temp.begin(), temp.end(), MyComparator());
    typedef MyComparator cc;
    return 0;
}

