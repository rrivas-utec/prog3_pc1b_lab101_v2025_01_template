//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "ui_builder.h"
using namespace std;

static void test_4() {
    ui_builder<FlatTheme> ui;
    ui.render(std::cout);
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}