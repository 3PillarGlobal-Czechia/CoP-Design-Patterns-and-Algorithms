#pragma once
#include "ICommand.h"
#include <cstdio>

class Command2 : public ICommand {
public:
    void execute() const override;
};
