#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    int len = word.length();
    int isPalindrome = 1; 
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0; 
            break;            
        }
    }
    
    if (isPalindrome == 1) {
        cout << "It is a palindrome!\n";
    } else {
        cout << "It is not a palindrome.\n";
    }
    
    return 0;
}