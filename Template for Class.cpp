#include <iostream>
using namespace std;

template <typename T>
class Student {
    T name, course, department;
    int age;

public:
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}
    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nCourse: " << course << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student<string> s("Alice", 21, "Math", "Science");
    s.display();
    return 0;
}
