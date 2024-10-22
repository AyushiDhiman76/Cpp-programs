#include <iostream>

using namespace std;

class Array {
public:
    int arr[5];

    // Default constructor
    Array() {
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    // Copy constructor
    Array(const Array& other) {
        for (int i = 0; i < 5; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Function to display the sum of all positive numbers
    int sumPositive() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};

int main() {
    Array original;

    // Input elements into the array
    cout << "Enter 5 elements for the array: ";
    for (int i = 0; i < 5; i++) {
        cin >> original.arr[i];
    }

    // Create a copy of the array using the copy constructor
    Array copy(original);

    // Display the sum of positive numbers in the copy
    cout << "Sum of positive numbers in the copied array: " << copy.sumPositive() << endl;

    return 0;
}
