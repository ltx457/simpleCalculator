#include <iostream>
#include <limits>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
}
double mean(double a, double b) {
    return divide(sum(a, b), 2.0);
}
int main() {
    std::cout << "Sum: " << sum(10, 5) << std::endl;
    std::cout << "Subtract: " << subtract(10, 5) << std::endl;
    std::cout << "Multiply: " << multiply(10, 5) << std::endl;
    std::cout << "Divide: " << divide(10, 5) << std::endl;
    std::cout << "Mean: " << mean(10, 20) << std::endl;
    return 0;
}