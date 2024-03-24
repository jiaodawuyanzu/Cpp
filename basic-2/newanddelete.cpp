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