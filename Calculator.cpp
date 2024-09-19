#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
public:
    double calculate(double num1, double num2, char op) {
        switch (op) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return 0;
                }
                return num1 / num2;
            case '^':
                return pow(num1, num2);
            default:
                cout << "Error: Invalid operator." << endl;
                return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;

    double result = calc.calculate(num1, num2, op);

    cout << "Result: " << result << endl;

    return 0;
}
