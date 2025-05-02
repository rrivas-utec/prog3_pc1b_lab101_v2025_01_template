//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "compose.h"
using namespace std;

static void test_6() {
    auto to_str = [](const int x) { return std::to_string(x); };
    auto parens = [](const std::string& s) { return "(" + s + ")"; };
    auto bang = [](const std::string& s) { return s + "!"; };
    auto exclaim = compose(bang, parens, to_str);
    const std::string r = exclaim(42); // Resultado: "(42)!"
    REQUIRE(r == "(42)!");
}

TEST_CASE("Question #2.6") {
    execute_test("question_2_test_6.in", test_6);
}