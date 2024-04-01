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
#include <string>
#include <sstream>
#include <vector>

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
    get_a_target_string();
    arrayTest::test_array();
    long value = 10000000;
    long& vv = value;
    vectortest::vector_test(value);
    return 0;
}

