namespace dotnet_proxy;

public class PaymentService : IPaymentService
{
    public void Pay()
    {
        Console.WriteLine("Paymens serviec called.");
    }
}
