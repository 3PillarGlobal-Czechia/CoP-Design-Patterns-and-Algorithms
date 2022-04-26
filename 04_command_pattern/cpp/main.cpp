#include "Receiver.h"
#include "Command1.h"
#include "Command2.h"
#include "Invoker.h"

int main() {
    Invoker* invoker = new Invoker();
    ICommand* cmd1 = new Command2();
    ICommand* cmd2 = new Command1(new Receiver(), 10, 5);
    ICommand* cmd3 = new Command2();
    invoker->setCommand(cmd1);
    invoker->setCommand(cmd2);
    invoker->executeCommand();
    invoker->setCommand(cmd3);
    invoker->executeCommand();
    invoker->executeCommand();

    delete invoker;
    return 0;
}
