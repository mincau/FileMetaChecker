#define BOOST_TEST_MODULE qc_report

#include <boost/test/unit_test.hpp>

#include <Report.hpp>
#include <Number/Number.hpp>

using namespace boost::unit_test;
using namespace report_generator;

namespace ben = basic_element::number_element;

boost::shared_ptr<common::formatters::Formatter> formatter( common::formatters::Formatter::get() );
boost::shared_ptr<common::Color>                 color( common::Color::get() );

BOOST_AUTO_TEST_SUITE( report_test_suite01 )

BOOST_AUTO_TEST_CASE( report_init )
{
	formatter->init_logging();
	color->enable();
}

BOOST_AUTO_TEST_SUITE_END()

#include "reportTests.hpp"
#include "reportNodeTests.hpp"
