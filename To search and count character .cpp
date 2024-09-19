#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str, char c) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char c;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to count: ";
    cin >> c;

    int count = countCharacter(str, c);

    cout << "The character '" << c << "' appears " << count << " times in the string." << endl;

    return 0;
}
