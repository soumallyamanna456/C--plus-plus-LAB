#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    
    cout << "Initial values: x = " << x << ", y = " << y << "\n\n";

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << " (Values remain unchanged)\n";

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << " (Values are successfully swapped)\n";

    return 0;
}