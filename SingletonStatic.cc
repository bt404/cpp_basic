#include <iostream>

class SingletonStatic
{
    private:
        static const SingletonStatic *m_instance;
        SingletonStatic() {}
    public:
        static const SingletonStatic *getInstance()
        {
            return m_instance;
        }
};

const SingletonStatic *SingletonStatic::m_instance = new SingletonStatic();
