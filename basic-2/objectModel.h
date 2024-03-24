//
// Created by 29918 on 2024/3/21.
//

#ifndef CPP_OBJECTMODEL_H
#define CPP_OBJECTMODEL_H

#include <iostream>

using namespace std;

class OBJA {
public:
    virtual void vfunc1();
    virtual void vfunc2();
    void funca1();
    void funca2();
private:
    int m_data1;
    int m_data2;
};

class OBJB : public OBJA {
public:
    virtual void vfunc1() override;
    void funcb1();
    void funcb2();
private:
    int m_data3;
};

class OBJC : public OBJB {
public:
    virtual void vfunc1() override;
    void funcc1();
    void funcc2();
private:
    int m_date4;
};


// template method 传入的this指针，根据对象来动态绑定
class Cdocument {
public:
    void onFileOpen() {
        cout << "on file open" << endl;
    }
    virtual void serialize() = 0;
};

class CmyDoc : public Cdocument {
    virtual void serialize()  override{
        cout << "cmydoc" << endl;
    }
};

void TestObjectModel1();
void TestObjectModel2();
#endif //CPP_OBJECTMODEL_H
