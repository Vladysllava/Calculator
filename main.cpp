#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calculator;

    int first1 = 0;
    int second1 = 0;
    char op1 = 0;

    std::cout << "Enter first number: ";
    std::cin >> first1;
    std::cout << "Enter second number: ";
    std::cin >> second1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op1;

    try {
        // Виклик через calculate
        int result = calculator.calculate(&op1, &first1, &second1);
        std::cout << "Result (calculate) = " << result << std::endl;

        // Виклик processFirstBy
        int res = calculator.processFirstBy(first1, second1, op1);
        std::cout << "Modified first1 = " << first1 << std::endl;
        std::cout << "Result (processFirstBy) = " << res << std::endl;
    }
    catch (const DivideByZeroException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const InvalidOperatorException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const CalculatorException& e) {
        std::cerr << "General calculator exception: " << e.what() << std::endl;
    }

    return 0;
}