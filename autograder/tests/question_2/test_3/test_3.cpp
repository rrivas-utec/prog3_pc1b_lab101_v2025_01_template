//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pipeline_apply.h"
using namespace std;

static void test_3() {
    constexpr int value = 10;
    auto add5 = [](int& x) { x += 5; return x; };
    auto mul2 = [](int x) { return x * 2; };
    const int r = pipeline_apply(value, add5, mul2); // Resultado: 30
    REQUIRE(r == 30);
}

TEST_CASE("Question #2.3") {
    execute_test("question_2_test_3.in", test_3);
}