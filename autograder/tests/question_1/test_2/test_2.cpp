//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "ui_builder.h"
using namespace std;

static void test_2() {
    ui_builder<DarkTheme> ui;
    ui.add<Button>("");
    ui.render(std::cout);
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}