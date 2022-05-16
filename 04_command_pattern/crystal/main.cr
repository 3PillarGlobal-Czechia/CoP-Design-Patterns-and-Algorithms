abstract class Command
    abstract def execute
end

class DoSomethingCommand < Command
    def execute
        puts "Do Something Executed"
    end
end

class DoSomethingElseCommand < Command
    def execute
        puts "Do Something Else Executed"
    end
end

# Main
firstCommand = DoSomethingCommand.new
secondCommand = DoSomethingElseCommand.new

firstCommand.execute()
secondCommand.execute()
