class Reporter {
    constructor(formatter) {
        this.set_formatter(formatter);
    }

    set_formatter(formatter) {
        this.formatter = formatter;
    }

    generate(data) {
        console.log(this.formatter.format(data));
    }
}

class JsonFormatter {
    format(data) {
        return JSON.stringify(data);
    }
}

let r = new Reporter(new JsonFormatter());
r.generate({ someVal: 32, someStr: "Hello!" });
