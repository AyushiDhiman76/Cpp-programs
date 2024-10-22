#include <iostream>

using namespace std;

// Base class
class Numbers {
public:
    int num1, num2;

    Numbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
};

// First derived class
class DisplayNum1 : public Numbers {
public:
    DisplayNum1(int n1, int n2) : Numbers(n1, n2) {}

    void displayFirstNumber() {
        cout << "First number: " << num1 << endl;
    }
};

// Second derived class
class DisplayNum2 : public Numbers {
public:
    DisplayNum2(int n1, int n2) : Numbers(n1, n2) {}

    void displaySecondNumber() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create objects of derived classes
    DisplayNum1 obj1(num1, num2);
    DisplayNum2 obj2(num1, num2);

    // Call functions to display numbers
    obj1.displayFirstNumber();
    obj2.displaySecondNumber();

    return 0;
}
