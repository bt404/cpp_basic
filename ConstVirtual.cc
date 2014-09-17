#include <string>
#include <iostream>
using namespace std;
using std::string;

class A
{
    public:
        // static 不能和 virtual 同时使用，并且不能在 static 成员函数中使用非 static 成员变量。
        // static virtual void setName(string newName) { name = newName; }
        static void doNothing() {} // static 成员函数可以在类内定义
        //static void doNothing() { chat(); }     静态成员函数不能调用非静态成员函数
        void chat() {}
    private:
        // static int test = 0;   静态成员变量必须在类外初始化，且在外部初始化时不可再添加 static 关键字。
        static int test;
        string name;
};
int A::test = 0;

int main(void)
{
    A *obj = new A();
    A::doNothing();
    obj -> doNothing(); // 可以使用类名或者变量来调用静态成员函数
    return 0;
}
