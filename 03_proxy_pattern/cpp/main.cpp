#include <iostream>
#include "PaymentService.h"
#include "Client.h"

int main() {
    PaymentService* service = new PaymentService();
    Client* client = new Client(service);

    client->doStuff();
    client->doStuff();

    delete client;
    return 0;
}
