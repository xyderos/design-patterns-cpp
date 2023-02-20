#pragma once

#include <string>

class abstract {

    protected:
	// bad way to test the implementation
	static int modify_me_;
	void an_operation() const;
	void another_operation() const;
	void yet_one_more_operation() const;
	virtual void something_required() const = 0;
	virtual void this_is_also_required() const = 0;
	virtual void a_hook() const;
	virtual void another_hook() const;

    public:
	void process() const;
	[[nodiscard]] auto get_result() const -> int;
};
