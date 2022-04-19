#include <cstdio>
#include "Proxy.h"

bool isPaymentAllowed = false;

Proxy::Proxy(PaymentService *service) {
    this->service = service;
}

void Proxy::pay(int amount) const {
    if (isPaymentAllowed)
    {
        printf("Service called!!!");
        service->pay(amount);
    }
    isPaymentAllowed = !isPaymentAllowed;
}

Proxy::~Proxy() {
    delete this->service;
}
