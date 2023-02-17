#pragma once

class context;

class state {

    protected:
	context *ctx {};

    public:
	virtual ~state();

	void set_context(context *c);

	virtual void handle_an_action() = 0;
	virtual void handle_another_action() = 0;
};
