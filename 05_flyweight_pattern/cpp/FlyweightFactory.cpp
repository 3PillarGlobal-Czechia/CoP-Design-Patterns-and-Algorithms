#include "FlyweightFactory.h"

Car::CarType *FlyweightFactory::getCarType(const char* company, const char* model, const char* color) {
    auto carType = this->findBy(company, model, color);
    if (carType == nullptr)
    {
        carType = new Car::CarType(company, model, color);
        this->carTypes->push_back(carType);
    }
    return carType;
}

// no LINQ :(
Car::CarType *FlyweightFactory::findBy(const char* company, const char* model, const char* color) const {
    for (const auto carType : *this->carTypes)
    {
        if (strcmp(carType->company, company) == 0
            && strcmp(carType->model, model) == 0
            && strcmp(carType->color, color) == 0)
        {
            return carType;
        }
    }
    return nullptr;
}

FlyweightFactory::FlyweightFactory() {
    this->carTypes = new std::vector<Car::CarType*>();
}

FlyweightFactory::~FlyweightFactory() {
    for (auto p : *this->carTypes)
    {
        delete p;
    }
    delete this->carTypes;
}
