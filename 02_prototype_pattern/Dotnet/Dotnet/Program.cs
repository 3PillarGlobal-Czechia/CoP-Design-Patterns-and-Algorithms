using Dotnet;

Console.WriteLine("Hello, World! Lets Prototype.");


var person = new Person { Name = "Pepa", Address = "Kelč" };
var person2 = (Person)person.Clone();

Console.WriteLine(person.Name);

Console.WriteLine(person2.Name);