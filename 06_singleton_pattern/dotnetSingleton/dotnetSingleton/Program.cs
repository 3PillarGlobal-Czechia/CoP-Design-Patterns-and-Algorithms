using dotnetSingleton;

Console.WriteLine("Singleton Example");

var instanceA = Singleton.GetInstance();
var instanceB = Singleton.GetInstance();

var areSame  = instanceA.Equals(instanceB);
Console.WriteLine($"Instances are the same: {areSame}");
