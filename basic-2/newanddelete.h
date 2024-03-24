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

class Bad{};
class Foo {
public:
    Foo() : _id(0) { cout << "default ctor.this" << "id = " << _id << endl; }
    Foo(int id) : _id(id) { cout << "ctor.this" << "id = " << _id << endl; /* throw Bad(); */ }

    void testFunc() { cout << "this is testfunc" << endl; }
    virtual ~Foo() { cout << "virtual dtor.this" << endl; }

    /* 一般的new和delete的重载 */
    static void* operator new(size_t size);
    static void* operator new[](size_t size);
    static void operator delete(void* ptr) noexcept;
    static void operator delete[](void* ptr) noexcept;

    /* placement new and delete */
    static void* operator new(size_t size, void* start);
    static void* operator new(size_t size, long extra);
    static void* operator new(size_t size, long extra, char init);

    static void operator delete(void*, void*);
    static void operator delete(void*, long);
    static void operator delete(void*, long, char);
public:
    int _id;
    long _data;
    string _str;
};

void TestNewDelete1();
void TestPlacementNewAndDelete();
#endif //CPP_NEWANDDELETE_H
