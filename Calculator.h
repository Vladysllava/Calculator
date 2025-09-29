#pragma once
#include "CalculatorException.h"

class Calculator {
public:
    int calculate(char op, int first, int second);

    int calculate(const char* op, const int* first, const int* second);

    int& processFirstBy(int& first, int by, char op);
};