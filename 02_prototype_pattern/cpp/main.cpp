#include <iostream>
#include "ConcreteCloneable.h"

int main() {
    ConcreteCloneable* c1 = new ConcreteCloneable();
    c1->text = "test";

    ConcreteCloneable* c2 = (ConcreteCloneable*)c1->clone();
    c2->text = "changed";

    printf("%s\n", c1->text);
    printf("%s\n", c2->text);

    delete c1;
    delete c2;
    return 0;
}
