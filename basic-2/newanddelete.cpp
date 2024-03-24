//
// Created by 29918 on 2024/3/24.
//

#include <memory>
#include <cstdlib>
#include "newanddelete.h"
#include <cstdint>

void* MyAlloc(size_t size)
{
    return malloc(size);
}

void MyFree(void* ptr)
{
    free(ptr);
}

inline void* operator new(size_t size)
{
    cout << "this is global operator new" << "szie = " << size << endl;
    return MyAlloc(size);
}

inline void* operator new[](size_t size)
{
    cout << "this is global operator new[]" << "size = " << size << endl;
    return MyAlloc(size);
}

inline void operator delete(void* ptr)
{
    cout << "this is global operator delete" << endl;
    MyFree(ptr);
}

inline void operator delete[](void* ptr)
{
    cout << "this is global operator delete[]" <<endl;
    MyFree(ptr);
}



void* Foo::operator new(size_t size)
{
    cout << "this is member opetator new" << "size = " << size << endl;
    return MyAlloc(size);
}

void* Foo::operator new[](size_t size)
{
    cout << "this is member operator new[]" << "size = " << size << endl;
    return MyAlloc(size);
}

void Foo::operator delete(void *ptr) noexcept
{
    cout << "this is member operator delete" << endl;
    MyFree(ptr);
}

void Foo::operator delete[](void *ptr) noexcept
{
    cout << "this is member operator delete[]" << endl;
    MyFree(ptr);
}

void* Foo::operator new(size_t size, void *start)
{
    cout << "this is placement new 1" << endl;
    return start;
}

void* Foo::operator new(size_t size, long extra)
{
    cout << "this is placement new 2" << endl;
    return MyAlloc(size + extra);
}

void* Foo::operator new(size_t size, long extra, char init)
{
    cout << "this is placement new 3" << endl;
    return MyAlloc(size + extra);
}

void Foo::operator delete(void *ptr, void *extra)
{
    cout << "this is placement delete 1" << endl;
    MyFree(extra);
}

void Foo::operator delete(void *ptr, long extra)
{
    cout << "this is placement delete 2" << endl;
    MyFree(ptr);
}

void Foo::operator delete(void *ptr, long extra, char init)
{
    cout << "this is placement delete 3" << endl;
    MyFree(ptr);
}

void TestNewDelete1()
{
    cout << __func__ << endl;
    cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(string) << " " << sizeof(void*) << endl;
    Foo* pf = new Foo();
    pf->testFunc();
    delete pf;

    Foo* pf1 = ::new Foo();
    pf1->testFunc();
    ::delete pf1;

    Foo* pf2 = new Foo[3]{ {1}, {2}, {3}};  // 这里的size会多8个字节，保存数组个数
    int* count = reinterpret_cast<int*>(reinterpret_cast<char*>(pf2) - 8);
    cout << "count = " << *count << endl;

    void* temp = static_cast<void*>(pf2);
    uintptr_t tepptr = reinterpret_cast<uintptr_t>(temp) - 8;
    int* count2 = reinterpret_cast<int*>(tepptr);
    cout << "count2 = " << *count2 << endl;

    for (int i = 0; i < 3; ++i) {
        cout << "id = " << pf2[i]._id << endl;
        pf2[i].testFunc();
    }
    delete[] pf2;
}

void TestPlacementNewAndDelete()
{
    cout << __func__ << endl;
    Foo start;
    Foo* p1 = new Foo();
    delete p1;

//    Foo* p2 = new(&start) Foo();
//    delete p2;

    Foo* p3 = new(100) Foo();
    delete p3;

    Foo* p4 = new(100, 'a') Foo();
    delete p4;

    Foo* p5 = new(100) Foo(1);
    delete p5;

    Foo* p6 = new(100, 'a') Foo(1);
    delete p6;

//    Foo* p7 = new(&start) Foo(1);
//    delete p7;

    Foo* p8 = new Foo(1);
    delete p8;
}