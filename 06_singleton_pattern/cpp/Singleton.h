#pragma once

#include <cstdio>

class Singleton {
public:
    static Singleton* getInstance(const char* value);
    void doStuff() const;
protected:
    explicit Singleton(const char* value);
    virtual ~Singleton() = default;
    static Singleton* instance;
    const char* value;
};
