#pragma once

#include <string>

// declare operations for both simple and complex objects of a composition
class composite_component {

    protected:
	composite_component *parent;

    public:
	composite_component();
	composite_component(const composite_component &);
	auto operator=(const composite_component &) -> composite_component &;
	virtual ~composite_component();

	void set_parent(composite_component *p);

	[[nodiscard]] auto get_parent() const -> composite_component *;

	// altough they are part of the interface, it is better if this logic is
	// implemented in the base class, less code to maintain
	virtual void add(composite_component *component);
	virtual void remove(composite_component *component);

	// lets client code know if they can bear children
	[[nodiscard]] virtual auto is_composite() const -> bool;

	// some random operation, eg business logic
	[[nodiscard]] virtual auto name() const -> std::string = 0;
};
