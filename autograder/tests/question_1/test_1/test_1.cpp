//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "ui_builder.h"
using namespace std;

static void test_1() {
    ui_builder<FlatTheme> ui;
    ui.add<Button>("Aceptar");
    ui.add<TextBox>("Ingrese texto");
    ui.render(std::cout);
}

TEST_CASE("Question #1.1") {
    execute_test("question_1_test_1.in", test_1);
}