using cop_strategy_pattern.formaters;

namespace cop_strategy_pattern;

public class ReportPrinter
{
    private IFormaterStrategy strategy { get; set; }

    public ReportPrinter(IFormaterStrategy strategy)
    {
        this.strategy = strategy;
    }

    public void SetStrategy(IFormaterStrategy strategy)
    {
        this.strategy = strategy;
    }

    public string Format(Dictionary<string, string> kvp)
    {
        return strategy.FormatData(kvp);
    }
}
