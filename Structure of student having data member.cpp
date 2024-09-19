#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNo;
    int age;
};

int main() {
    Student student1;

    student1.name = "Alice";
    student1.rollNo = 123;
    student1.age = 20;

    cout << "Student Name: " << student1.name << endl;
    cout << "Roll No: " << student1.rollNo << endl;
    cout << "Age: " << student1.age << endl;

    return 0;
}
