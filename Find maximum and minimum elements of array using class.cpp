#include <iostream>

using namespace std;

class ArrayOperations {
public:
    void findMaxMin(int arr[], int size) {
        int max = arr[0];
        int min = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        cout << "Maximum element: " << max << endl;
        cout << "Minimum element: " << min << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    ArrayOperations operations;
    operations.findMaxMin(arr, size);

    return 0;
}
