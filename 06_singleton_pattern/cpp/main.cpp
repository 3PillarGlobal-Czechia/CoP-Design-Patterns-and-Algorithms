#include "Singleton.h"

int main() {
    Singleton* s1 = Singleton::getInstance("Test1");
    s1->doStuff();
    Singleton* s2 = Singleton::getInstance("Test2");
    s2->doStuff(); // Will also print Test1
    return 0;
}
