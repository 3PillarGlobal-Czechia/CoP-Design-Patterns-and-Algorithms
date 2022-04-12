#include <cstring>
#include "ConcreteCloneable.h"

ICloneable* ConcreteCloneable::clone() const {
    return new ConcreteCloneable(*this);
}

ConcreteCloneable::ConcreteCloneable() {
    text = nullptr;
}

ConcreteCloneable::ConcreteCloneable(const ConcreteCloneable& other) {
    const size_t length = strlen(other.text);
    char* tmp[length];
    strncpy(*tmp, other.text, length);
    text = *tmp;
}
