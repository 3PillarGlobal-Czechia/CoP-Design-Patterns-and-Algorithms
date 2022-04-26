#pragma once
#include <queue>
#include "ICommand.h"

class Invoker {
public:
    void setCommand(ICommand*);
    void executeCommand();
    Invoker();
    ~Invoker();
private:
    std::queue<ICommand*>* queue;
};
