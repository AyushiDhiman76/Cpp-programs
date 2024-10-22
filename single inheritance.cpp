#include <iostream>

using namespace std;

// Base class
class Numbers {
public:
    int num1, num2;

    // Constructor to initialize numbers
    Numbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
};

// Derived class
class Product : public Numbers {
public:
    // Function to calculate and display the product
    void calculateProduct() {
        int product = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
};

int main() {
    // Create an object of the derived class
    Product p(5, 10); // Initialize numbers with 5 and 10

    // Call the function to calculate and display the product
    p.calculateProduct();

    return 0;
}
