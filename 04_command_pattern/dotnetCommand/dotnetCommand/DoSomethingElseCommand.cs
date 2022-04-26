namespace dotnetCommand
{
    public class DoSomethingElseCommand : ICommand
    {
        private string param { get; set; }

        public DoSomethingElseCommand(string param)
        {
            this.param = param; 
        }
        public void Execute()
        {
            Console.WriteLine($"Do Something Else with param :{param}");
        }
    }
}
