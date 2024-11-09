#include <iostream>
using namespace std;

class Number {
public:
    void checkPrime(int num) {
        if (num < 2) {
            cout << num << " is not a prime number." << endl;
            return;
        }
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                cout << num << " is not a prime number." << endl;
                return;
            }
        }
        cout << num << " is a prime number." << endl;
    }
};

int main() {
    Number number;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    number.checkPrime(num);
    return 0;
}
