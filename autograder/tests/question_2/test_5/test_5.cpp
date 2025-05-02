//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "compose.h"
using namespace std;

static void test_5() {
    auto f = [](const int x) { return x * 2; };
    auto g = [](const int x) { return x + 3; };
    auto composed = compose(f, g);
    const int r = composed(5); // Resultado: 16
    REQUIRE(r == 16);
}

TEST_CASE("Question #2.5") {
    execute_test("question_2_test_5.in", test_5);
}