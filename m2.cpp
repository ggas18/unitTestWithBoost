#define BOOST_TEST_MODULE Regression
#include <boost/test/included/unit_test.hpp>
 
typedef struct {
                 int c;
                 char d;
                 double e;
                 bool f;
               } Node;
 
typedef union  {
                 int c;
                 char d;
                 double e;
                 bool f;
               } Node2;
 
BOOST_AUTO_TEST_SUITE(Structure)
 
BOOST_AUTO_TEST_CASE(Test1)
{
    Node n;
    BOOST_CHECK(sizeof(n) < 12);
}
 
BOOST_AUTO_TEST_SUITE_END()
 
BOOST_AUTO_TEST_SUITE(Union)
 
BOOST_AUTO_TEST_CASE(Test1)
{
    Node2 n;
    BOOST_CHECK(sizeof(n) == sizeof(double));
}
 
BOOST_AUTO_TEST_SUITE_END()
