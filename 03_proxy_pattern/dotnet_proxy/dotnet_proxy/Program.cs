using dotnet_proxy;

Console.WriteLine("Hello, World!");

var service = new PaymentService();
var proxy = new PaymentServiceProxy(service);

var client = new Client(proxy);

client.DoSomeLogicThatCallsService();
