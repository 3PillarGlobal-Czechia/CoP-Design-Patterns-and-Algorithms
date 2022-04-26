#pragma once
#include "ICommand.h"
#include "Receiver.h"
#include <cstdio>

class Command1 : public ICommand {
public:
    void execute() const override;
    Command1(Receiver*, int, int);
    ~Command1() override;
private:
    Receiver* receiver;
    int a, b;
};
