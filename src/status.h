#include "os.h"

class status
{
    protected:
    os* _op_sys;

    public:

    status(os* type);
    status(const status&);
    status& operator=(const status&);
    virtual ~status();

    virtual std::string os_name() const;
};