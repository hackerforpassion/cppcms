# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef CPPCMS_BOOST_PREPROCESSOR_ARITHMETIC_SUB_HPP
# define CPPCMS_BOOST_PREPROCESSOR_ARITHMETIC_SUB_HPP
#
# include <cppcms_boost/preprocessor/arithmetic/dec.hpp>
# include <cppcms_boost/preprocessor/config/config.hpp>
# include <cppcms_boost/preprocessor/control/while.hpp>
# include <cppcms_boost/preprocessor/tuple/elem.hpp>
#
# /* BOOST_PP_SUB */
#
# if ~CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_EDG()
#    define CPPCMS_BOOST_PP_SUB(x, y) CPPCMS_BOOST_PP_TUPLE_ELEM(2, 0, CPPCMS_BOOST_PP_WHILE(CPPCMS_BOOST_PP_SUB_P, CPPCMS_BOOST_PP_SUB_O, (x, y)))
# else
#    define CPPCMS_BOOST_PP_SUB(x, y) CPPCMS_BOOST_PP_SUB_I(x, y)
#    define CPPCMS_BOOST_PP_SUB_I(x, y) CPPCMS_BOOST_PP_TUPLE_ELEM(2, 0, CPPCMS_BOOST_PP_WHILE(CPPCMS_BOOST_PP_SUB_P, CPPCMS_BOOST_PP_SUB_O, (x, y)))
# endif
#
# define CPPCMS_BOOST_PP_SUB_P(d, xy) CPPCMS_BOOST_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_MWCC()
#    define CPPCMS_BOOST_PP_SUB_O(d, xy) CPPCMS_BOOST_PP_SUB_O_I xy
# else
#    define CPPCMS_BOOST_PP_SUB_O(d, xy) CPPCMS_BOOST_PP_SUB_O_I(CPPCMS_BOOST_PP_TUPLE_ELEM(2, 0, xy), CPPCMS_BOOST_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define CPPCMS_BOOST_PP_SUB_O_I(x, y) (CPPCMS_BOOST_PP_DEC(x), CPPCMS_BOOST_PP_DEC(y))
#
# /* BOOST_PP_SUB_D */
#
# if ~CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_EDG()
#    define CPPCMS_BOOST_PP_SUB_D(d, x, y) CPPCMS_BOOST_PP_TUPLE_ELEM(2, 0, CPPCMS_BOOST_PP_WHILE_ ## d(CPPCMS_BOOST_PP_SUB_P, CPPCMS_BOOST_PP_SUB_O, (x, y)))
# else
#    define CPPCMS_BOOST_PP_SUB_D(d, x, y) CPPCMS_BOOST_PP_SUB_D_I(d, x, y)
#    define CPPCMS_BOOST_PP_SUB_D_I(d, x, y) CPPCMS_BOOST_PP_TUPLE_ELEM(2, 0, CPPCMS_BOOST_PP_WHILE_ ## d(CPPCMS_BOOST_PP_SUB_P, CPPCMS_BOOST_PP_SUB_O, (x, y)))
# endif
#
# endif
