#include <iostream>
using namespace std;

class B;
class C;

class A {
private:
    int a = 5;
    friend void display(A, B, C);
};

class B {
protected:
    int b = 10;
    friend void display(A, B, C);
};

class C {
private:
    int c = 15;
    friend void display(A, B, C);
};

void display(A objA, B objB, C objC) {
    cout << "A: " << objA.a << "\nB: " << objB.b << "\nC: " << objC.c << endl;
}

int main() {
    A a;
    B b;
    C c;
    display(a, b, c);
    return 0;
}
