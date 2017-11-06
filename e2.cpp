#define BOOST_TEST_MODULE enumtest
#include <boost/test/included/unit_test.hpp>
 
BOOST_AUTO_TEST_SUITE (enum_test) 
 
BOOST_AUTO_TEST_CASE (test1)
{
  typedef enum {red = 8, blue, green = 1, yellow, black } color;
  color c = green;
  BOOST_WARN(sizeof(green) > sizeof(char));
  BOOST_CHECK(c == 2); 
  BOOST_REQUIRE(yellow > red); 
  BOOST_CHECK(black != 4);
}
 
BOOST_AUTO_TEST_SUITE_END( )
