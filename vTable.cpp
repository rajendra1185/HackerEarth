#include "vTable.h"

Test::Test()
{
    cout << "Test()." << endl;
}
void Test::print()
{
    cout << "Test::Virtual void print()." << endl;
}
void Test::print2()
{
    cout << "Test::virtual void print2()." << endl;
}

TestDrived::TestDrived()
{
    cout << "TestDrived()." << endl;
}
void TestDrived::print()
{
    cout << "TestDrived::virtual void print from der()." << endl;
}
void TestDrived::print2()
{
    cout << "TestDrived::virtual void print2 from der()." << endl;
}
void TestDrived::GetVtblAddress()
{
    cout << "vtbl address:" << (int*)this << endl;
}
void TestDrived::GetFirstVtblFunctionAddress()
{
    cout << "First vbtl function address:" << (int*)*(int*)this + 0 << endl;
}
void TestDrived::GetSecondVtblFunctionAddress()
{
    cout << "Second vbtl function address:" << (int*)*(int*)this + 1 << endl;
}
void TestDrived::CallFirstVtblFunction()
{
    fun = (fun_pointer) * ((int*)*(int*)this + 0);
    cout << "CallFirstVbtlFunction:" << endl;
    fun();
}
void TestDrived::CallSecondVtblFunction()
{
    fun = (fun_pointer) * ((int*)*(int*)this + 1);
    cout << "CallSecondVbtlFunction:" << endl;
    fun();
}