#pragma once

#include <string>

// When having pointer members, apply the rule of three
class prototype
{
    protected:
    std::string name;
    int field;
    void* pointer_field;

    public:

    prototype();
    prototype(const prototype&);
    prototype& operator=(const prototype& lhs);
    prototype(const std::string &);
    virtual ~prototype();
    virtual prototype* clone() const = 0;
    virtual std::string action(int prototype_field);
};