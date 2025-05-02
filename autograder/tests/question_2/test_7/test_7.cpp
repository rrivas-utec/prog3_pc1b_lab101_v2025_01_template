//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "compose.h"
using namespace std;

static void test_7() {
    auto neg = [](const int x) { return -x; };
    auto id = compose(neg);
    const int r = id(7); // Resultado: -7
    REQUIRE(r == -7);
}

TEST_CASE("Question #2.7") {
    execute_test("question_2_test_7.in", test_7);
}