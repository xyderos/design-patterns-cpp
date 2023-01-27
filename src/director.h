#include "builder.h"

class director
{
    builder *bldr;

    public:
    
    void set_builder(builder* blder);
    void build_ancient_car();
    void build_modern_car();
};