//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pipeline_apply.h"
using namespace std;

static void test_2() {
  const int result = pipeline_apply(3,
  [](const int x) { return x * 2; },
  [](const int x) { return x + 5; });
  REQUIRE(result == 11);
}

TEST_CASE("Question #2.2") {
    execute_test("question_2_test_2.in", test_2);
}