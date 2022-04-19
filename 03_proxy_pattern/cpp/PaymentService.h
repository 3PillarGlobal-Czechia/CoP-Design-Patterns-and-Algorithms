#pragma once
#include "IPaymentService.h"

class PaymentService : IPaymentService {
public:
    void pay(int amount) const override;
};
