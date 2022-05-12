#include "Singleton.h"

Singleton *Singleton::getInstance(const char *value) {
    if (Singleton::instance == nullptr)
    {
        Singleton::instance = new Singleton(value);
    }
    return Singleton::instance;
}

Singleton::Singleton(const char *value) {
    this->value = value;
}

void Singleton::doStuff() const {
    printf("Value is %s\n", this->value);
}

Singleton* Singleton::instance = nullptr;

