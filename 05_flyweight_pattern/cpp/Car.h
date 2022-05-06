#pragma once

class Car {
public:
    // Keeping this class inside parent can emphasize intent
    class CarType {
    public:
        const char* company;
        const char* model;
        const char* color;
        unsigned char* picture;
        CarType(const char* company, const char* model, const char* color);
        ~CarType();
    };

    const char* owner;
    const char* plate;
    CarType* carType;
    Car(const char* owner, const char* plate, Car::CarType* carType);
    // Car does NOT delete it's CarType because it might not be the only one that has a reference to it
    ~Car() = default;
};
