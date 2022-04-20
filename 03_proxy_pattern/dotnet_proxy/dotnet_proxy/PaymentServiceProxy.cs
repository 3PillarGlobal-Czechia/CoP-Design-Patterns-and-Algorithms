namespace dotnet_proxy;

public class PaymentServiceProxy : IPaymentService
{
    private IPaymentService service { get; set; }
    public PaymentServiceProxy(IPaymentService paymentService)
    {
        service = paymentService;
    }
    public void Pay()
    {
        // Log event implement cache or do anything else
        Console.WriteLine("Called Pay from Proxy");

        service.Pay();
    }
}
