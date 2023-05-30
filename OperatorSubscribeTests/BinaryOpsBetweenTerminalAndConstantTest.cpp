#include "streamulus.h"

#define BOOST_TEST_MODULE operator_subscribe

#include <boost/test/included/unit_test.hpp>

#include "op_subscribe_values_fixture.h"

BOOST_FIXTURE_TEST_SUITE(operator_subscribe_test, ValuesFixture)

    BOOST_AUTO_TEST_CASE(binary_operators_between_terminals) {
        RunTest(t1 << 2, v1 << 2);
        RunTest(t1 >> 2, v1 >> 2);
        RunTest(t1 * 2, v1 * 2);
        RunTest(t1 / 2, v1 / 2);
        RunTest(t1 % 2, v1 % 2);
        RunTest(t1 + 2, v1 + 2);
        RunTest(t1 - 2, v1 - 2);
        RunTest(t1 < 2, v1 < 2);
        RunTest(t1 > 2, v1 > 2);
        RunTest(t1 <= 2, v1 <= 2);
        RunTest(t1 >= 2, v1 >= 2);
        RunTest(t1 == 2, v1 == 2);
        RunTest(t1 != 2, v1 != 2);
        RunTest(t1 || 2, v1 || 2);
        RunTest(t1 && 2, v1 && 2);
        RunTest(t1 | 2, v1 | 2);
        RunTest(t1 & 2, v1 & 2);
        RunTest(t1 ^ 2, v1 ^ 2);

        RunTest(2 << t1, 2 << v1);
        RunTest(2 >> t1, 2 >> v1);
        RunTest(2 * t1, 2 * v1);
        RunTest(2 / t1, 2 / v1);
        RunTest(2 % t1, 2 % v1);
        RunTest(2 + t1, 2 + v1);
        RunTest(2 - t1, 2 - v1);
        RunTest(2 < t1, 2 < v1);
        RunTest(2 > t1, 2 > v1);
        RunTest(2 <= t1, 2 <= v1);
        RunTest(2 >= t1, 2 >= v1);
        RunTest(2 == t1, 2 == v1);
        RunTest(2 != t1, 2 != v1);
        RunTest(2 || t1, 2 || v1);
        RunTest(2 && t1, 2 && v1);
        RunTest(2 | t1, 2 | v1);
        RunTest(2 & t1, 2 & v1);
        RunTest(2 ^ t1, 2 ^ v1);
    }

BOOST_AUTO_TEST_SUITE_END()
