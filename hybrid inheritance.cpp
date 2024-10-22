#include <iostream>

using namespace std;

// Base class A
class A {
public:
    int a;

    A(int a) {
        this->a = a;
    }

    void displayA() {
        cout << "Value of a: " << a << endl;
    }
};

// Class B inheriting from class A
class B : public A {
public:
    int b;

    B(int a, int b) : A(a) {
        this->b = b;
    }

    void displayB() {
        cout << "Value of b: " << b << endl;
    }
};

// Class C inheriting from class A
class C : public A {
public:
    int c;

    C(int a, int c) : A(a) {
        this->c = c;
    }

    void displayC() {
        cout << "Value of c: " << c << endl;
    }
};

// Class D inheriting from class A
class D : public A {
public:
    int d;

    D(int a, int d) : A(a) {
        this->d = d;
    }

    void displayD() {
        cout << "Value of d: " << d << endl;
    }
};

// Class E inheriting from class B
class E : public B {
public:
    int e;

    E(int a, int b, int e) : B(a, b) {
        this->e = e;
    }

    void displayE() {
        cout << "Value of e: " << e << endl;
    }
};

int main() {
    // Create objects of each class
    A a(10);
    B b(20, 30);
    C c(40, 50);
    D d(60, 70);
    E e(80, 90, 100);

    // Call display functions for each object
    a.displayA();
    b.displayB();
    c.displayC();
    d.displayD();
    e.displayE();

    return 0;
}
