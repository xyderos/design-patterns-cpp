#include "component.h"

#include <list>

// complex objects that might have children, delegate work to their children
class composite : public composite_component {
    protected:
	std::list<composite_component *> children;

    public:
	composite();
	~composite() override;

	void add(composite_component *component) override;

	// todo memory management
	void remove(composite_component *component) override;

	[[nodiscard]] auto is_composite() const -> bool override;

	[[nodiscard]] auto name() const -> std::string override;
};
