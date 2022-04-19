#pragma once
#include "PaymentService.h"
#include "Proxy.h"

class Client {
    Proxy* proxy;
public:
    Client(PaymentService* service);
    ~Client();

    void doStuff();
};

