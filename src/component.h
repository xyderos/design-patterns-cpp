#pragma once

#include <string>

// declare operations for both simple and complex objects of a composition
class component {

    protected:
	component *parent;

    public:
	component();
	component(const component &);
	auto operator=(const component &) -> component &;
	virtual ~component();

	void set_parent(component *p);

	[[nodiscard]] auto get_parent() const -> component *;

	// altough they are part of the interface, it is better if this logic is
	// implemented in the base class, less code to maintain
	virtual void add(component *component);
	virtual void remove(component *component);

	// lets client code know if they can bear children
	[[nodiscard]] virtual auto is_composite() const -> bool;

	// some random operation, eg business logic
	[[nodiscard]] virtual auto name() const -> std::string = 0;
};
