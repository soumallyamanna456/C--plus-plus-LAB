#include <iostream>
using namespace std;

template <class T, int SIZE>
class Stack {
    T arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(T val) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!\n";
            return;
        }
        cout << "Popped: " << arr[top--] << "\n";
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    
    cout << "--- Integer Stack ---\n";
    Stack<int, 3> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.display();
    intStack.pop();
    intStack.display();
    cout << "\n--- Character Stack ---\n";
    Stack<char, 3> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.display();

    return 0;
}