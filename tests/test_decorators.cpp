#include "test_decorators.h"
#include "../src/component.h"
#include "../src/concrete.h"
#include "../src/either_decorator.h"
#include "../src/other_decorator.h"

void
test_decorators::decorator_should_decorate_a_component(void)
{
    component* simple = new concrete;

    std::string expected("concrete");
    
    CPPUNIT_ASSERT_EQUAL(expected, simple->message());

    delete simple;
}

void
test_decorators::decorator_should_decorate_both_components(void)
{
    component* simple = new concrete;

    component* either = new either_decorator(simple);
    std::string expected_from_either("either x concrete");

    CPPUNIT_ASSERT_EQUAL(expected_from_either, either->message());
    
    component* other = new other_decorator(simple);
    std::string expected_from_other("other x concrete");
    
    CPPUNIT_ASSERT_EQUAL(expected_from_other, other->message());
    
    delete simple;
    delete either;
    delete other;
}

void
test_decorators::decorator_should_decorate_another_decorator(void)
{
    component* simple = new concrete;

    component* either = new either_decorator(simple);
    component* other = new other_decorator(either);
    std::string expected("other x either x concrete");
    
    CPPUNIT_ASSERT_EQUAL(expected, other->message());
    
    delete simple;
    delete either;
    delete other;
}
