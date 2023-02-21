#pragma once

#include "notification.h"
#include "visitor.h"

// implement several methids of the same process which can work with all the
// components
class another_visitor : public visitor {

    public:
	void visit_a_component(const a_component *element) override;
	void visit_another_component(const another_component *element) override;
};
