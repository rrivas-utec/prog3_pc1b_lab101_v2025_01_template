//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pipeline_apply.h"
using namespace std;

static void test_1() {
    auto f1 = [](const int x) { return x + 1; };
    auto f2 = [](const int x) { return x * 3; };
    constexpr int r = pipeline_apply (4 , f1 , f2 ); // Resultado esperado : 15
    REQUIRE(r == 15);
}

TEST_CASE("Question #2.1") {
    execute_test("question_2_test_1.in", test_1);
}