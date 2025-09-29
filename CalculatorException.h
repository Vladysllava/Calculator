#pragma once
#include <exception>

// Базове виключення
class CalculatorException : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "Calculator error!";
    }
};

// Виключення: ділення на 0
class DivideByZeroException : public CalculatorException {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero!";
    }
};

// Виключення: недопустимий оператор
class InvalidOperatorException : public CalculatorException {
public:
    const char* what() const noexcept override {
        return "Error: Invalid operator!";
    }
};