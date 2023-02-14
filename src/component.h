#pragma once

#include <string>

class component {

    protected:
	component *parent;

    public:
	component();
	component(const component &);
	component &operator=(const component &);
	virtual ~component();

	void set_parent(component *p);

	component *get_parent() const;

	virtual void add(component *component);
	virtual void remove(component *component);

	virtual bool is_composite() const;

	virtual std::string name() const = 0;
};