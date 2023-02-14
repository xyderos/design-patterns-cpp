#pragma once

#include "command.h"

class client 
{
    private:
    command *on_start;
    command *on_finish;
    
    public:
    ~client();

    void set_start(command *command);
    void set_finish(command *command);
    std::string do_something();
};