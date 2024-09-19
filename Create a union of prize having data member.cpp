#include <iostream>

using namespace std;

union Prize {
    int amount;
    float accuracy;
};

int main() {
    Prize prize;

    // Assign value to the amount member
    prize.amount = 1000;
    cout << "Prize Amount: " << prize.amount << endl;

    // Assign value to the accuracy member
    prize.accuracy = 98.5f;
    cout << "Prize Accuracy: " << prize.accuracy << endl;

    return 0;
}
