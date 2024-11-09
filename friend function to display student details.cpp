#include <iostream>
using namespace std;

class Student {
    string name, department, course;
    int age;
    
    friend void displayDetails(Student s);

public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}
};

void displayDetails(Student s) {
    cout << "Name: " << s.name << "\nAge: " << s.age << "\nDepartment: " << s.department << "\nCourse: " << s.course << endl;
}

int main() {
    Student s("John", 20, "Computer Science", "C++ Programming");
    displayDetails(s);
    return 0;
}
