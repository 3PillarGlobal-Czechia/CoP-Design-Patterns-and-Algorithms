#include "Car.h"

Car::CarType::CarType(const char* company, const char* model, const char* color) {
    this->company = company;
    this->model = model;
    this->color = color;
    this->picture = new unsigned char[1024];
}

Car::CarType::~CarType() {
    delete[] picture;
}

Car::Car(const char* owner, const char* plate, Car::CarType* carType) {
    this->owner = owner;
    this->plate = plate;
    this->carType = carType;
}
