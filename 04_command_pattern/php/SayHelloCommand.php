<?php

declare(strict_types=1);

namespace DesignPatternsCommand;

class SayHelloCommand  implements CommandInterface {

    public function __construct(private Receiver $output)
    {
    }

    public function execute()
    {
        $this->output->write('Hello World');
    }
}
 