//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "ui_builder.h"
using namespace std;

static void test_3() {
    ui_builder<FlatTheme> ui;
    ui.add<Button>("OK");
    ui.add<Button>("Cancelar");
    ui.add<Button>("Salir");
    ui.render(std::cout);
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}