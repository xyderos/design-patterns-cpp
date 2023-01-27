#include "builder.h"

// execute the steps needed in order to build the desirted object
// although this part is optional, it is good as a wrapped for business logic and further abstraction 
class director
{
    builder *bldr;

    public:
    
    void set_builder(builder* blder);
    void build_ancient_car();
    void build_modern_car();
};