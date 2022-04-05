using Newtonsoft.Json;

namespace cop_strategy_pattern.formaters;

internal class JsonFormater : IFormaterStrategy
{
    public string FormatData(Dictionary<string, string> kvp)
    {
        return JsonConvert.SerializeObject(kvp);
    }
}
