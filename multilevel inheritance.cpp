#include <iostream>

using namespace std;

// Base class declaring the first number
class Base {
protected:
    int num1;

public:
    Base(int n) : num1(n) {}
};

// First derived class declaring the second number
class Derived1 : public Base {
protected:
    int num2;

public:
    Derived1(int n1, int n2) : Base(n1), num2(n2) {}
};

// Second derived class defining the sum function
class Derived2 : public Derived1 {
public:
    Derived2(int n1, int n2) : Derived1(n1, n2) {}

    void calculateSum() {
        int sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Derived2 obj(num1, num2);
    obj.calculateSum();

    return 0;
}
