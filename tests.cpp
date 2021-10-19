// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example]")
{
    REQUIRE(divisableByFive(2000, 35)==1);
    REQUIRE(divisableByFive(-25, 30)==1);
    REQUIRE(divisableByFive(20, -35)==1);
    REQUIRE(divisableByFive(0, 0)==1);
    REQUIRE(divisableByFive(13, 35)==0);
    REQUIRE(divisableByFive(0, 33)==0);
}

