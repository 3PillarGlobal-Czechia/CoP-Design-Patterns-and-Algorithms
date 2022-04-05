using cop_strategy_pattern;
using cop_strategy_pattern.formaters;

var keyValuePairs = new Dictionary<string, string>();
keyValuePairs.Add("key1", "test");
keyValuePairs.Add("key2", "85");

var jsonStrategy = new JsonFormater();
var csvStrategy = new CsvFormater();

var reportPrinter = new ReportPrinter(jsonStrategy);

Console.WriteLine(reportPrinter.Format(keyValuePairs));

reportPrinter.SetStrategy(csvStrategy);


Console.WriteLine(reportPrinter.Format(keyValuePairs));