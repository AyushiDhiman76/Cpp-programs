#include <iostream>

using namespace std;

class NumberSwapper {
public:
    int num1, num2;

    NumberSwapper(int a, int b) {
        num1 = a;
        num2 = b;
        swapNumbers();
    }

    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void displayNumbers() {
        cout << "Swapped numbers: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    NumberSwapper swapper(x, y);
    swapper.displayNumbers();

    return 0;
}
