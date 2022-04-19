#include "Client.h"

Client::Client(PaymentService* service) {
    this->proxy = new Proxy(service);
}

Client::~Client() {
    delete this->proxy;
}

void Client::doStuff() {
    this->proxy->pay(10);
}
