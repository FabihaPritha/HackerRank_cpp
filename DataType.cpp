#include <iostream>
#include <iomanip>  // For setting precision

int main() {
    int integer_value;
    long long_value;
    char char_value;
    float float_value;
    double double_value;

    // Read the input values
    std::cin >> integer_value >> long_value >> char_value >> float_value >> double_value;

    // Print each value with the specified format
    std::cout << integer_value << std::endl;
    std::cout << long_value << std::endl;
    std::cout << char_value << std::endl;
    std::cout << std::fixed << std::setprecision(3) << float_value << std::endl;
    std::cout << std::fixed << std::setprecision(9) << double_value << std::endl;

    return 0;
}




