#include <iostream>
using namespace std;

class CheckPrime {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i < num; ++i)
            if (num % i == 0) return false;
        return true;
    }
};

int main() {
    CheckPrime cp;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << (cp.isPrime(number) ? "Prime" : "Not Prime") << endl;
    return 0;
}
