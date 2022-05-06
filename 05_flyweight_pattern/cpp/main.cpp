#include <cstdio>
#include "FlyweightFactory.h"

int main() {
    auto ff = new FlyweightFactory();
    Car* cars[5];
    int i = 0;
    // Cars on lines 11 and 13 will contain a reference to the same CarType thus saving memory
    cars[i++] = new Car("James Doe", "CL234IR", ff->getCarType("Chevrolet", "Camaro2018", "pink"));
    cars[i++] = new Car("John Doe", "CL231IR", ff->getCarType("BMW", "M5", "red"));
    cars[i++] = new Car("Testing", "TAT31IR", ff->getCarType("Mercedes Benz", "C500", "red"));
    cars[i++] = new Car("Who knows anymore", "CL231BB", ff->getCarType("BMW", "M5", "red"));
    cars[i++] = new Car("John Doe", "AB15EF1", ff->getCarType("BMW", "X6", "white"));

    printf("Addresses of CarTypes (2 and 4 should be equal)\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i: 0x%p\n", i + 1, cars[i]->carType);
        delete cars[i];
    }
    delete ff;
    return 0;
}
