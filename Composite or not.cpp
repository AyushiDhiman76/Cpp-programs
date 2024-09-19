#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a composite number." << endl;}
         else {
        int count = 0;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }
        if (count == 1) {
            cout << num << " is a composite number." << endl;
        } else {
           cout << num << " is not a composite number." << endl;
        }
    }
}
