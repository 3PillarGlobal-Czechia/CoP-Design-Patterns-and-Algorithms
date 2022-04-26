#pragma once

class ICommand {
public:
    virtual void execute() const = 0;
    virtual ~ICommand() = default;
};