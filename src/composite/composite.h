#include "component.h"

#include <list>

// complex objects that might have children, delegate work to their children
class composite : public component {
    protected:
	std::list<component *> children;

    public:
	composite();
	~composite() override;

	void add(component *component) override;

	// todo memory management
	void remove(component *component) override;

	[[nodiscard]] auto is_composite() const -> bool override;

	[[nodiscard]] auto name() const -> std::string override;
};
