#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify num1 + num2 / num3", "verification of cal1") {
	REQUIRE(operator_precedence_1 (1, 40, 20) == 3 );
}

TEST_CASE("Verify (num1 + num2) / num3", "verification of cal2") {
	REQUIRE(operator_precedence_2(1, 2, 3) == 1);
}

TEST_CASE("Verify Test Configuration num1 / num2 * num3", "verification of cal3") {
	REQUIRE(operator_precedence_3 (10, 2, 3)== 15);
}

TEST_CASE("Verify Test (num1 / num2) * num3", "verification of cal4") {
	REQUIRE(operator_precedence_4(10, 2, 3) == 15);
}
