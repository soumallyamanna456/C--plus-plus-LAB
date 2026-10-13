//5. Create a class Person which includes: character array name of size 64, age in numeric, character array address of size 64, and total salary in real numbers 
//(divide salary in different components, if required). Make an array of objects of class Person of size 10.   
//(a) Write inline function that obtains the youngest and eldest age of a person from a class person using arrays.  
//(b) Write a program to develop the salary slip and display result by using constructors. 
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    double basicSalary;
    double hra;
    double da;
    double totalSalary;

public:
    
    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basicSalary = 0.0;
        hra = 0.0;
        da = 0.0;
        totalSalary = 0.0;
    }

    
    Person(const char* pName, int pAge, const char* pAddress, double basic) {
        strcpy(name, pName);
        age = pAge;
        strcpy(address, pAddress);
        basicSalary = basic;
        
        
        hra = 0.20 * basicSalary;
        da = 0.50 * basicSalary;
        totalSalary = basicSalary + hra + da;
    }

    
    void inputData() {
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 64);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Address: ";
        cin.ignore();
        cin.getline(address, 64);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        
        hra = 0.20 * basicSalary;
        da = 0.50 * basicSalary;
        totalSalary = basicSalary + hra + da;
    }

    
    int getAge() const {
        return age;
    }

    
    void displaySalarySlip() const {
        cout << "\n-----------------------------\n";
        cout << "        SALARY SLIP          \n";
        cout << "-----------------------------\n";
        cout << "Name:    " << name << "\n";
        cout << "Age:     " << age << "\n";
        cout << "Address: " << address << "\n";
        cout << "-----------------------------\n";
        cout << "Basic Salary : " << basicSalary << "\n";
        cout << "HRA (20%)    : " << hra << "\n";
        cout << "DA (50%)     : " << da << "\n";
        cout << "-----------------------------\n";
        cout << "Total Salary : " << totalSalary << "\n";
        cout << "-----------------------------\n";
    }
};

// (a) Inline function to obtain the youngest and eldest age from an array of Person objects
inline void findYoungestAndEldest(const Person p[], int size) {
    if (size <= 0) return;

    int youngest = p[0].getAge();
    int eldest = p[0].getAge();

    for (int i = 1; i < size; ++i) {
        int currentAge = p[i].getAge();
        if (currentAge < youngest) {
            youngest = currentAge;
        }
        if (currentAge > eldest) {
            eldest = currentAge;
        }
    }

    cout << "\n--- Age Statistics ---\n";
    cout << "Youngest Age: " << youngest << "\n";
    cout << "Eldest Age: " << eldest << "\n";
}

int main() {
    
    const int SIZE = 10; 
    Person persons[SIZE];

    cout << "Enter details for " << SIZE << " persons:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\nPerson " << (i + 1) << ":\n";
        persons[i].inputData();
    }

    // (a) Using the inline function to find youngest and eldest age
    findYoungestAndEldest(persons, SIZE);

    // (b) Displaying the salary slip for each person using constructors/methods
    cout << "\n--- Generating Salary Slips for all persons ---\n";
    for (int i = 0; i < SIZE; ++i) {
        persons[i].displaySalarySlip();
    }

    return 0;
}