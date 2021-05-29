#pragma once
#include <iostream>
#include <stdio.h>
typedef void (*fun_pointer)(void);

using namespace std;
class Test
{
public:
    Test();
    virtual void print();
    virtual void print2();
};

class TestDrived :public Test
{
public:
    TestDrived();
    virtual void print();
    virtual void print2();
    void GetVtblAddress();
    void GetFirstVtblFunctionAddress();
    void GetSecondVtblFunctionAddress();
    void CallFirstVtblFunction();
    void CallSecondVtblFunction();
private:
    fun_pointer fun;
};
