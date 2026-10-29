#include <iostream>
#include <limits>

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!"
                  << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
}

int main() {
    std::cout << "Multiply: "
              << multiply(10, 5) << std::endl;

    std::cout << "Divide: "
              << divide(10, 5) << std::endl;

    return 0;
}
