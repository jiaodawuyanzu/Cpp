//
// Created by 29918 on 2024/3/24.
//

#ifndef CPP_NEWANDDELETE_H
#define CPP_NEWANDDELETE_H
#include <iostream>
#include <string>
using namespace std;

/*
 *  new 三部曲
 *  1、执行operator new重载开辟内存
 *  2、指针转换
 *  3、执行构造函数
 *
 *  delete 二部曲
 *  1、执行析构函数
 *  2、执行operator delete重载 释放内存*/

class Foo {
public:
    Foo() : _id(0) { cout << "default ctor.this" << "id = " << _id << endl; }
    Foo(int id) : _id(id) { cout << "ctor.this" << "id = " << _id << endl; }

    void testFunc() { cout << "this is testfunc" << endl; }
    virtual ~Foo() { cout << "virtual dtor.this" << endl; }

    static void* operator new(size_t size);
    static void* operator new[](size_t size);
    static void operator delete(void* ptr) noexcept;
    static void operator delete[](void* ptr) noexcept;
public:
    int _id;
    long _data;
    string _str;
};

void TestNewDelete1();
#endif //CPP_NEWANDDELETE_H
