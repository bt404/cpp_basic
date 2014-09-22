#include <iostream>

class Singleton
{
    private:
        static Singleton *m_instance;
        Singleton(){}
    public:
        static Singleton *getInstance();
};

Singleton * Singleton::getInstance()
{
    if (NULL == m_instance)
    {
        Lock();
        if (NULL == m_instance)
        {
            m_instance = new Singleton();
        }
        Unlock();
    }
    return m_instance;
}
