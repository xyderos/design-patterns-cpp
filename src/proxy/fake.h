#include "real.h"

// item to go through the proxy
class fake : public interface {
    private:
	real *r;
	[[nodiscard]] auto log() const -> std::string;

    public:
	explicit fake(real *rl);
	fake(const fake &f);
	auto operator=(const fake &rhs) -> fake &;
	~fake() override;

	// usually its caching, logging, loading etc
	[[nodiscard]] auto common() const -> std::string override;
};
