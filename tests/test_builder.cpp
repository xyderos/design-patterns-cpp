#include "../src/director.h"
#include "../src/builder.h"
#include "../src/volvo_builder.h"
#include "test_builder.h"

void test_builder::test_builder_should_produce_ancient_car(void)
{
	director *d = new director();
	builder *builder = new volvo_builder();
	d->set_builder(builder);

	d->build_ancient_car();

	car* volvo = builder->get_car();

	std::string expected_engine = "very fast";
	std::string expected_chassis = "pretty lightweight";
	std::string expected_firmware = std::string();

	CPPUNIT_ASSERT_EQUAL(expected_engine, volvo->engine);
	CPPUNIT_ASSERT_EQUAL(expected_chassis, volvo->chassis);
	CPPUNIT_ASSERT_EQUAL(expected_firmware, volvo->firmware);
	
	delete volvo;
	delete builder;
	delete d;
}

void test_builder::test_builder_should_produce_modern_car(void)
{
	director *d = new director();
	builder *builder = new volvo_builder();
	d->set_builder(builder);

	d->build_modern_car();
	car* volvo = builder->get_car();

	std::string expected_engine = "very fast";
	std::string expected_chassis = "pretty lightweight";
	std::string expected_firmware = "v1.0.0";

	CPPUNIT_ASSERT_EQUAL(expected_engine, volvo->engine);
	CPPUNIT_ASSERT_EQUAL(expected_chassis, volvo->chassis);
	CPPUNIT_ASSERT_EQUAL(expected_firmware, volvo->firmware);

	delete volvo;
	delete builder;
	delete d;
}

void test_builder::test_builder_should_produce_custom_car(void)
{
	director *d = new director();
	builder *builder = new volvo_builder();
	d->set_builder(builder);

	builder->make_chassis();

	car* volvo = builder->get_car();

	std::string expected_engine = "";
	std::string expected_chassis = "pretty lightweight";
	std::string expected_firmware = "";

	CPPUNIT_ASSERT_EQUAL(expected_engine, volvo->engine);
	CPPUNIT_ASSERT_EQUAL(expected_chassis, volvo->chassis);
	CPPUNIT_ASSERT_EQUAL(expected_firmware, volvo->firmware);
	
	delete volvo;
	delete builder;
	delete d;
}