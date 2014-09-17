class A
{
    public:
        //static char * getName() const;    不能同时使用 const 和 static 声明一个成员函数
};

int main(void)
{
    A *obj = new A();
    return 0;
}
