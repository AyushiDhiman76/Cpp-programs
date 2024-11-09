#include <iostream>
using namespace std;

template <typename T>
struct Student {
    T name, course, department;
    int age;
};

int main() {
    Student<string> s = {"Computer", "Physics", "Engineering", 22};
    cout << "Name: " << s.name << "\nAge: " << s.age << "\nCourse: " << s.course << "\nDepartment: " << s.department << endl;
    return 0;
}
