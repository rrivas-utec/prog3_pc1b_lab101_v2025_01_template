//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pipeline_apply.h"
using namespace std;

static void test_4() {
    constexpr auto id = [](const int x) { return x; };
    constexpr int r = pipeline_apply(10, id, id, id);
    REQUIRE(r == 10);
}

TEST_CASE("Question #2.4") {
    execute_test("question_2_test_4.in", test_4);
}