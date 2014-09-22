##C++ 基础语法练习

###笔记

1. 不能同时使用 const 和 static 来修饰一个成员函数，因为前者指明函数中有 const *this 指针而后者没有，矛盾。

2. 不能同时使用 virtual 和 static 来修饰一个成员函数，因前者需要 this 指针而后者没有。

3. 不能在静态成员函数内使用非静态成员变量或者调用非静态成员函数，因为缺少 this 指针。

4. 静态成员变量只能在类外部初始化，并且在外部不能再添加 static 关键字。
