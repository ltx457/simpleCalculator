#include <iostream>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    std::cout << "Sum: " << sum(10, 5) << std::endl;
    std::cout << "Subtract: " << subtract(10, 5) << std::endl;

    return 0;
}