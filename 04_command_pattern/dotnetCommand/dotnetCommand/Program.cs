using dotnetCommand;

var commandsList = new Queue<ICommand>();
commandsList.Enqueue(new DoSomethingCommand());
commandsList.Enqueue(new DoSomethingElseCommand("Backend CoP"));

while (commandsList.Count > 0)
{
    var command = commandsList.Dequeue();
    command.Execute();
}