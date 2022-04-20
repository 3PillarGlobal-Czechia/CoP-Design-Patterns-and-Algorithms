using System;
namespace dotnet_proxy;

public class Client
{
    private IPaymentService Service { get; set; }

    public Client(IPaymentService service)
    {
        Service = service;
    }

    public void DoSomeLogicThatCallsService()
    {
        Service.Pay();
    }
}
