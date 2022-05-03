namespace flyweightDotnet;

public class Portfolio
{
	private Dictionary<string, Product> products = new Dictionary<string, Product>();

	public Product lookup(string productName)
	{
		if (!products.ContainsKey(productName))
			products.Add(productName, new Product(productName));

		return products.GetValueOrDefault(productName) ?? throw new Exception("Project not found.");
	}

	public int TotalProductsMade()
	{
		return products.Count();
	}
}
