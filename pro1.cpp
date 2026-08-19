#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;

    cin >> n;

    original = n;

    if (n < 0) {
        cout << "Not a palindrome";
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}