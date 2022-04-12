from interface import implements, Interface

class FormatterInterface(Interface):

    def formatDocument(self, document):
        pass


class JSONFormatter(implements(FormatterInterface)):

    def formatDocument(self, document):
        print('JSON', document)
        return document


class CSVFormatter(implements(FormatterInterface)):

    def formatDocument(self, document):
        print('CSV', document)
        return document


class XMLFormatter(implements(FormatterInterface)):

    def formatDocument(self, document):
        print('XML', document)
        return document


class ReportPrinter:
    def __init__(self, formatter):
        self.formatter = formatter

    def setFormatter(self, formatter: FormatterInterface):
        self.formatter = formatter

    def runFormatter(self, document):
        if self.formatter is None:
            return

        self.formatter.formatDocument(document)


if __name__ == '__main__':
    printer = ReportPrinter(CSVFormatter())
    printer.runFormatter('My Document')
    printer.setFormatter(XMLFormatter())
    printer.runFormatter('My Document')

