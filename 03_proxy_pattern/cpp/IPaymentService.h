#pragma once

class IPaymentService {
public:
    virtual void pay(int amount) const = 0;
};
