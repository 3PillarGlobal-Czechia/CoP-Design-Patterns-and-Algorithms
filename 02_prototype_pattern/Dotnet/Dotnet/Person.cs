namespace Dotnet;

internal class Person : IPrototype
{
    public string? Name { get; set; }
    public string? Address { get; set; }

    public IPrototype Clone()
    {
        return new Person
        {
            Name = Name,
            Address = Address
        };
    }
}