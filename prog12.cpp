#include <iostream>
using namespace std;

class Box {
    int length, breadth;

public:
    
    Box(int length, int breadth) {
        this->length = length;   
        this->breadth = breadth; 
    }

    
    Box& setLength(int length) {
        this->length = length;
        return *this;
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Box b1(10, 20);
    b1.display();
    b1.setLength(50).display();

    return 0;
}