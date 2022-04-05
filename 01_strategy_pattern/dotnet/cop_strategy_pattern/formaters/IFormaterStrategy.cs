namespace cop_strategy_pattern.formaters;

public interface IFormaterStrategy
{
    public string FormatData(Dictionary<string, string> kvp);
}
