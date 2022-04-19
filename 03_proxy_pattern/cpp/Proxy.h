#pragma once
#include "PaymentService.h"

class Proxy : IPaymentService {
    PaymentService* service;
public:
    Proxy(PaymentService* service);
    ~Proxy();
    void pay(int amount) const override;
};
