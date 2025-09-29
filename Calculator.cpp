#include "Calculator.h"

int Calculator::calculate(char op, int first, int second) {
    switch (op) {
    case '+': return first + second;
    case '-': return first - second;
    case '*': return first * second;
    case '/':
        if (second == 0) {
            throw DivideByZeroException();
        }
        return first / second;
    default:
        throw InvalidOperatorException();
    }
}

int Calculator::calculate(const char* op, const int* first, const int* second) {
    if (op && first && second) {
        return calculate(*op, *first, *second);
    }
    throw CalculatorException(); // null pointer
}

int& Calculator::processFirstBy(int& first, int by, char op) {
    first = calculate(op, first, by);
    return first;
}