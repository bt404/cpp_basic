#include <iostream>
using namespace std;

class A
{
    virtual void func();
};

class B: public virtual A
{
    virtual void foo();
};

class C: public A
{
    virtual void foo();
};

int main(void)
{
    std::cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C) << std::endl;
    return 0;
}
