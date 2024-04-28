#include <iostream>

int main() {

    std::cout << "\n0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n";
    std::cout << "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n";
    std::cout << "0000000          00000000          00000    0000000000000          00000     0000     00    00000000000          0000              0000          00000           00000\n";
    std::cout << "0000                000              000    0000000000                00     0000     00    000000000              0000000    0000000              00    000000    000\n";
    std::cout << "000     000000000000000    000000    000    000000000     00000000000000     0000     00    000000000    000000    0000000    0000000    000000    00    000000    000\n";
    std::cout << "000     000000000000000    000000    000    000000000     00000000000000     0000     00    000000000    000000    0000000    0000000    000000    00             0000\n";
    std::cout << "000     000000000000000              000    000000000     00000000000000     0000     00    000000000              0000000    0000000    000000    00    000000    000\n";
    std::cout << "0000                000    000000    000           000               000              00           00    000000    0000000    0000000              00    000000    000\n";
    std::cout << "0000000          000000    000000    000           0000000         00000              00           00    000000    0000000    000000000          0000    000000    000\n";
    std::cout << "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n";
    std::cout << "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n\n";

    // declare variables
    bool continue_app = true;
    char exit, operation;
    double num1, num2, result;

    // run program while continue_app is true
    while(continue_app) {
        // get user inputs
        std::cout << "Please enter the first number: ";
        std::cin >> num1;
        std::cout << "Please enter the arithmetic operator (+, -, *, /):";
        std::cin >> operation;
        std::cout << "Please enter the second number: ";
        std::cin >> num2;

        // perform calculation, depending on operation
        switch(operation) {
            case '+':
            result = num1 + num2;
            break;
            case '-':
            result = num1 - num2;
            break;
            case '*':
            result = num1 * num2;
            break;
            case '/':
            if(num2 == 0) {
                std::cout << "Error: Division by zero is not possible\n";
                continue;
            }
            result = num1 / num2;
            break;
            default:
                std::cout << "Error Invalid operator\n";
                continue;
        }

        // display results
        std::cout << "Result: " << result << "\n";

        // ask if user wants to continue
        std::cout << "Would you like to continue (y/n): ";
        std::cin >> exit;

        // if user enters 'n', exit loop by setting continue_app to false
        if(exit == 'n') {
            continue_app = false;
        }
    }

    return 0;
}