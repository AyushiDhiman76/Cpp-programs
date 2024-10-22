#include <iostream>

using namespace std;

// First base class
class Base1 {
public:
    int num1;

    Base1(int n1) {
        num1 = n1;
    }
};

// Second base class
class Base2 {
public:
    int num2;

    Base2(int n2) {
        num2 = n2;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}

    int sum() {
        return num1 + num2;
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Derived obj(num1, num2);
    int sum = obj.sum();

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
