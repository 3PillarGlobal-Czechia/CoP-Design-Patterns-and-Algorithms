using flyweightDotnet;

var productNames = new List<string>() { "Onion", "Apple", "Carrot", "Milk", "Butter", "Bread" };
var list = new List<Order>();
var portfolio = new Portfolio();


for(int i = 0; i < 1000000; i++)
{ 
    // Pick name of the project
    var productName = productNames[i % 6];

    // Naive creation of a new product
    //var product = new Product(productName);

    // Flyweight create with factory method
    var product = portfolio.lookup(productName);

    list.Add(new Order(i, product));
}

Console.WriteLine("Done");