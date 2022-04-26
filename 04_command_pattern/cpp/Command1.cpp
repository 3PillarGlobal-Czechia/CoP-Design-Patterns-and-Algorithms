#include "Command1.h"

void Command1::execute() const {
    int output = receiver->operation(a, b);
    printf("Command1 executing, sum is: %i\n", output);

}

Command1::Command1(Receiver* receiver, int a, int b) {
    this->receiver = receiver;
    this->a = a;
    this->b = b;
}

Command1::~Command1() {
    delete receiver;
}
