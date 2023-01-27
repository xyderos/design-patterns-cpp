#include "test_prototype_factory.h"
#include "../src/prototype_factory.h"
#include "../src/prototype.h"

void
test_prototype_factory::
    test_prototype_factory_should_create_a_deep_copy_upon_cloning(void)
{
	prototype_factory* pf = new prototype_factory();
	
	prototype* p1 = pf->make_prototype(type::original_wannabe);
	std::string r1 = p1->action(5);

	prototype* p2 = pf->make_prototype(type::original_wannabe);
	std::string r2 = p2->action(6);

	CPPUNIT_ASSERT(r1 != r2);

	delete p1;
	delete p2;
	delete pf;
}

void
test_prototype_factory::
    test_prototype_factory_should_clone_subclass_sucessfully(void)
{
	prototype_factory* pf = new prototype_factory();
	prototype* p = pf->make_prototype(type::original_wannabe);

	std::string expected_result = "wannabe_prototype x 5";

	CPPUNIT_ASSERT_EQUAL(expected_result, p->action(5));

	delete p;
	delete pf;
}
