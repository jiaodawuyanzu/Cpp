#include <iostream>
#include "basic/Complex.h"
#include "basic/Complex-test.h"
#include "basic/MyString.h"
#include "basic-2/template.h"
#include "basic-2/conversion.h"
#include "basic-2/objectModel.h"
#include "basic-2/newanddelete.h"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

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

    TestNewDelete1();
    return 0;
}

