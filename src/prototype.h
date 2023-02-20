#pragma once

#include <string>

// When having pointer members, apply the rule of three
class prototype {
    protected:
	std::string name;
	int field;
	void *pointer_field;

    public:
	prototype();
	prototype(const prototype &);
	auto operator=(const prototype &lhs) -> prototype &;
	explicit prototype(std::string);
	virtual ~prototype();
	[[nodiscard]] virtual auto clone() const -> prototype * = 0;
	virtual auto action(int prototype_field) -> std::string;
};
