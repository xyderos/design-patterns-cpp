#include "another_wannabe_prototype.h"
#include "prototype_factory.h"
#include "wannabe_prototype.h"

prototype_factory::prototype_factory()
    : prototypes_({
	  { type::original_wannabe,
	      new wannabe_prototype("wannabe_prototype", 3) },
	  { type::another_wannabe,
	      new another_wannabe_prototype("another_wannabe_prototype", 4) },
      })
{
}

prototype_factory::~prototype_factory()
{
	delete prototypes_[type::another_wannabe];
	delete prototypes_[type::original_wannabe];
}

auto
prototype_factory::make_prototype(type t) -> prototype *
{
	return prototypes_[t]->clone();
}
