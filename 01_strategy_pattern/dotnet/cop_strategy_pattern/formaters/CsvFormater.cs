namespace cop_strategy_pattern.formaters;

public class CsvFormater : IFormaterStrategy
{
    public string FormatData(Dictionary<string, string> kvp)
    {
        string result = "";
        foreach (var item in kvp)
        {
            result += $"{item.Key}; {item.Value};\n";
        }

        return result;
    }
}
