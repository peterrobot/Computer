#pragma once

template <class T>
class Singleton
{
private:
    Singleton(Singleton&) = delete;
    Singleton& operator=(Singleton&) = delete;
public:
    T& getInstance()
    {
        static T _instance;
        return T;
    }
protected:
    Singleton(){}
    ~Singleton(){}
};