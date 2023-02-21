#include "os.h"

// defines an interface for the controlling part of the classes
// essentially, it delegates the work from one object to another
class status {
    protected:
	os *_op_sys;

    public:
	explicit status(os *type);
	status(const status &);
	auto operator=(const status &) -> status &;
	virtual ~status();

	[[nodiscard]] virtual auto os_name() const -> std::string;
};
