#include <iostream>
using namespace std;

class B;
class C;

class A {
private:
    int a = 10;
    friend class FriendClass;
};

class B {
protected:
    int b = 20;
    friend class FriendClass;
};

class C {
private:
    int c = 30;
    friend class FriendClass;
};

class FriendClass {
public:
    void display(A objA, B objB, C objC) {
        cout << "A: " << objA.a << "\nB: " << objB.b << "\nC: " << objC.c << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    FriendClass fc;
    fc.display(a, b, c);
    return 0;
}
