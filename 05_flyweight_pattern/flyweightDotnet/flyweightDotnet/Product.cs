namespace flyweightDotnet;

public class Product
{
    public string Name { get; private set; }

    // mocq
    public long[] JustAMemory = new long[1000];

    public Product(string name)
    {
        Name = name;
    }
}
