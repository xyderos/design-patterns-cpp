#pragma once

#include "command.h"

class client {
    private:
	command *on_start;
	command *on_finish;

    public:
	client(const client &) = default;
	client(client &&) = delete;
	auto operator=(const client &) -> client & = default;
	auto operator=(client &&) -> client & = delete;
	client(command *on_start, command *on_finish);
	~client();

	void set_start(command *command);
	void set_finish(command *command);
	auto do_something() -> std::string;
};
