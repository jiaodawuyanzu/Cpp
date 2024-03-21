//
// Created by 29918 on 2024/3/21.
//

#include "objectModel.h"

void OBJA::vfunc1()
{
    cout << "obja vfunc1" << endl;
}

void OBJA::vfunc2()
{
    cout << "obja vfunc2" << endl;
}

void OBJB::vfunc1()
{
    cout << "objb vfunc1" << endl;
}

void OBJC::vfunc1()
{
    cout << " objc vfunc1" << endl;
}

typedef void(*Func)();
void TestObjectModel1()
{
    OBJA *a = new OBJA();
    void* vptr = *(void**)a;
    Func func = (Func)(*((void**)vptr + 1));
    cout << "obja vptr addr = " << static_cast<void*>((*((void**)vptr))) << endl;
    func();

    OBJA* a1 = new OBJB();

}

void TestObjectModel2()
{
    CmyDoc mydoc;
    mydoc.onFileOpen();
}