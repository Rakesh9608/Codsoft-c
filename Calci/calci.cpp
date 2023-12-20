#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the operator
    switch (operation) {
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
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0; // Exit successfully
}