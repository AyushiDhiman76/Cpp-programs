#include <iostream>

using namespace std;

class NaturalNumbersSum {
public:
    NaturalNumbersSum() {
        sum = 0;
    }

    int calculateSum(int n) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

private:
    int sum;
};

int main() {
    NaturalNumbersSum obj;
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int result = obj.calculateSum(n);
    cout << "The sum of first " << n << " natural numbers is: " << result << endl;

    return 0;
}
