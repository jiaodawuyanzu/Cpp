#include <iostream>
#include "basic/Complex.h"
#include "basic/Complex-test.h"
#include "basic/MyString.h"
#include "basic-2/conversion.h"
#include <string>
#include <sstream>
#include <vector>
using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    ComplexTesttMain();
    string s("hello");
    cout << s << endl;

    complex *cc = new complex[3];

    Mystring::StringTest();

    TestConvertion();

    return 0;
}

