#include <iostream>

using namespace std;

class Calculator {
public:
    // Constructor for integers
    Calculator(int a, int b) {
        intSum = a + b;
        cout << "Sum of two integers: " << intSum << endl;
    }

    // Constructor for floats
    Calculator(float a, float b) {
        floatSum = a + b;
        cout << "Sum of two floats: " << floatSum << endl;
    }

    // Constructor for characters
    Calculator(char a, char b) {
        int char1 = a;
        int char2 = b;
        intSum = char1 + char2;
        cout << "Sum of two characters (ASCII values): " << intSum << endl;
    }

private:
    int intSum;
    float floatSum;
};

int main() {
    // Create objects with different data types
    Calculator calc1(10, 20);
    Calculator calc2(3.14, 5.67);
    Calculator calc3('A', 'B');

    return 0;
}
