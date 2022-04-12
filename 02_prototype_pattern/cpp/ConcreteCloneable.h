#include "ICloneable.h"

class ConcreteCloneable : ICloneable {
public:
    const char* text;
    ICloneable* clone() const override;
    ConcreteCloneable();
    ConcreteCloneable(const ConcreteCloneable& other);
};
