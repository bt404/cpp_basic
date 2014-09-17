#include <iostream>

using namespace std;

class A
{
};

class B
{
    public:
        B() {}
        ~B() {}
};

class C
{
    public:
        C() {}
        virtual ~C() {}
};

int main(void)
{
    std::cout << sizeof(A) << std::endl;    // 1 g++ 为每个空类型实例分配 1B 空间
    std::cout << sizeof(B) << std::endl;    // 1 构造函数和析构函数和类的实例无关
    std::cout << sizeof(C) << std::endl;    // 8 需要在实例中保存一个指向虚表的指针
    return 0;
}
