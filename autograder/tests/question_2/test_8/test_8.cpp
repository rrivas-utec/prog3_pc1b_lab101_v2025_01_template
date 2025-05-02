//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "compose.h"
using namespace std;

static void test_8() {
    int count = 0;
    auto inc = [&count](const int x) {++count; return x + 1; };
    auto c = compose(inc, inc, inc);
    const auto r = c(5); // Resultado: 8, count == 3
    REQUIRE(r == 8);
    REQUIRE(count == 3);
}

TEST_CASE("Question #2.8") {
    execute_test("question_2_test_8.in", test_8);
}