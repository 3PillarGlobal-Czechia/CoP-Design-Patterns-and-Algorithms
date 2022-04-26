namespace dotnetCommand
{
    public class DoSomethingCommand : ICommand
    {
        public void Execute()
        {
            Console.WriteLine("Do something");
        }
    }
}
