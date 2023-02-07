#include "component.h"

#include <list>

class composite : public component
{
    protected:
    std::list<component *> children;

    public:

    composite();
    ~composite();

    void add(component *component) override;

    void remove(component *component) override;

    bool is_composite() const override;

    std::string name() const override;
};