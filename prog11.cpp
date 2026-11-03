#include <iostream>
using namespace std;

class Student {
protected:
    int id;
};

class Test : virtual public Student {
protected:
    int testMarks;
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
};

class Result : public Test, public Sports {
public:
    void setData(int studentId, int tMarks, int sMarks) {
        id = studentId;
        testMarks = tMarks;
        sportsMarks = sMarks;
    }

    void display() {
        int total = testMarks + sportsMarks;
        cout << "Student ID: " << id << endl;
        cout << "Total Mark: " << total << endl;
    }
};

int main() {
    Result obj;
    obj.setData(101, 85, 12);
    obj.display();
    return 0;
}