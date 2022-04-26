#include "Invoker.h"

Invoker::Invoker() {
    this->queue = new std::queue<ICommand*>();
}

Invoker::~Invoker() {
    delete queue;
}

void Invoker::setCommand(ICommand* command) {
    queue->push(command);
}

void Invoker::executeCommand() {
    ICommand* cmd = queue->front();
    queue->pop();
    cmd->execute();
    delete cmd;
}
