#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void get() {
        cin >> x;
    }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void get() {
        cin >> y;
    }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << a.x << " " << b.y;
}

int main() {
    A a;
    B b;

    cout << "Enter two numbers: ";
    a.get();
    b.get();

    cout << "After swapping: ";
    swap(a, b);

    return 0;
}
