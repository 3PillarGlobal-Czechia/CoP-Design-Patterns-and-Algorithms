#pragma once

#include <vector>
#include <cstring>

#include "Car.h"

class FlyweightFactory {
public:
    Car::CarType* getCarType(const char* company, const char* model, const char* color);
    FlyweightFactory();
    ~FlyweightFactory();
private:
    std::vector<Car::CarType*>* carTypes;
    Car::CarType* findBy(const char* company, const char* model, const char* color) const;
};
