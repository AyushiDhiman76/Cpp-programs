#include <iostream>
#include <unordered_set>

using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        if (seen.count(arr[i])) {
            cout << arr[i] << " ";
        } else {
            seen.insert(arr[i]);
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 20, 40, 10, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
