#include "real.h"

class fake : public interface
{
    private:

    real * r;
    std::string log() const;

    public:

    fake(real*rl);
    fake(const fake& f);
    fake& operator=(const fake& rhs);
    ~fake();

    std::string common() const override;
};