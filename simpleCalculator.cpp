#include <iostream>
#include <limits>

// Addition
double sum(double a, double b) {
    return a + b;
}

// Subtraction
double subtract(double a, double b) {
    return a - b;
}

// Multiplication
double multiply(double a, double b) {
    return a * b;
}

// Division
double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!"
                  << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
}

// Interactive menu
int main() {
    char operation;
    double a, b;
    double result;

    std::cout << "Choose operation (+, -, *, /, m): ";
    if (!(std::cin >> operation)) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    if (operation == '+') {
        result = sum(a, b);
    } else if (operation == '-') {
        result = subtract(a, b);
    } else if (operation == '*') {
        result = multiply(a, b);
    } else if (operation == '/') {
        if (b == 0.0) {
            std::cout << "Error: Division by zero!"
                      << std::endl;
            return 1;
        }
        result = divide(a, b);
    } else if (operation == 'm') {
        result = divide(sum(a, b), 2.0);
    } else {
        std::cout << "Invalid operation!"
                  << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}