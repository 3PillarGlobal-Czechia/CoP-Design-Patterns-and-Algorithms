namespace flyweightDotnet;

public class Order
{
	public int OrderNumber { get; private set; }
	public Product Product { get; private set; }

	public Order(int orderNumber, Product product)
	{
		OrderNumber = orderNumber;
		Product = product;
	}

	void ProcessOrder()
	{
		Console.WriteLine("Ordering " + Product.Name + " for order number " + OrderNumber);
	}
}