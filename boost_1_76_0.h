#ifndef BOOST_NO_EXCEPTIONS
#define BOOST_NO_EXCEPTIONS
#include <boost/throw_exception.hpp>
void boost::throw_exception(std::exception const &e)
{
}
void boost::throw_exception(std::exception const &e, boost::source_location const &loc)
{
}
#endif