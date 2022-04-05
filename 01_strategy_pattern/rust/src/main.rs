use std::collections::HashMap;

type Data = HashMap<String, u32>;

trait Formatter {
    fn format(&self, data: &Data, output_buffer: &mut String);
}

struct Report {
    formatter: Box<dyn Formatter>
}

impl Report {
    fn new(f: Box<dyn Formatter>) -> Self {
        Report { formatter: f }
    }

    fn set_strategy(&mut self, f: Box<dyn Formatter>) {
        self.formatter = f;
    }

    fn generate(&self, buffer: &mut String) {
        let mut data = HashMap::new();
        data.insert("age".to_string(), 25);
        data.insert("favorite_number".to_string(), 420);

        self.formatter.format(&data, buffer);
    }
}

struct PlainTextFormatter;
impl Formatter for PlainTextFormatter {
    fn format(&self, data: &Data, buffer: &mut String) {
        for (k, v) in data {
            let entry = format!("{} {}\n", k, v);
            buffer.push_str(&entry);
        }
    }
}

struct JsonFormatter;
impl Formatter for JsonFormatter {
    fn format(&self, data: &Data, buffer: &mut String) {
        buffer.push_str("[");
        for (k, v) in data {
            let entry = format!(r#"{{"{}": "{}"}},"#, k, v);
            buffer.push_str(&entry);
        }
        buffer.push_str("]");
    }
}

fn main() {
    let mut reporter = Report::new(Box::new(JsonFormatter));
    let mut output = String::new();
    reporter.generate(&mut output);

    println!("{}", output);

    let mut output = String::new();
    reporter.set_strategy(Box::new(PlainTextFormatter));
    reporter.generate(&mut output);

    println!("{}", output);
}
