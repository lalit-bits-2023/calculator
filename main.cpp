#include <iostream>
#include "scientific_calculator.h"

void showMenu() {
    std::cout << "Scientific Calculator Menu:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Sine\n";
    std::cout << "6. Cosine\n";
    std::cout << "7. Tangent\n";
    std::cout << "8. Power\n";
    std::cout << "9. Logarithm\n";
    std::cout << "10. Exponential\n";
    std::cout << "11. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                try {
                    std::cout << "Result: " << divide(num1, num2) << std::endl;
                } catch (const std::invalid_argument& e) {
                    std::cerr << e.what() << std::endl;
                }
                break;
            case 5:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << sine(num1) << std::endl;
                break;
            case 6:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << cosine(num1) << std::endl;
                break;
            case 7:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << tangent(num1) << std::endl;
                break;
            case 8:
                std::cout << "Enter base and exponent: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << power(num1, num2) << std::endl;
                break;
            case 9:
                std::cout << "Enter a positive number: ";
                std::cin >> num1;
                try {
                    std::cout << "Result: " << logarithm(num1) << std::endl;
                } catch (const std::invalid_argument& e) {
                    std::cerr << e.what() << std::endl;
                }
                break;
            case 10:
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << exponential(num1) << std::endl;
                break;
            case 11:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 11);

    return 0;
}
