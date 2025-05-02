//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "ui_builder.h"
using namespace std;

static void test_5() {
    ui_builder<DarkTheme> ui;
    ui.add<TextBox>("Usuario: \\root@localhost");
    ui.render(std::cout);
}

TEST_CASE("Question #1.5") {
    execute_test("question_1_test_5.in", test_5);
}