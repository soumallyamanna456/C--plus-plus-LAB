#include<iostream>
#include<cstring>
using namespace std;

class Student{
public:
    string name;
    int roll;
    void getstudent(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the Roll no.: ";
        cin>>roll;
    }
    void displaystudent(){
        cout<</n" Name of the student is "<< name <<" and Roll no. is "<< roll <<endl;
    }
};

class Exam: public Student{
public:
    int marks[6];
    void getMarks(){
        getstudent();
        for(int i = 0; i < 6 ; ++i){
            cout<<"Enter the Marks for subject "<<(i+1)<<": ";
            cin>>marks[i];
        }
    }
    void displayMarks(){
        displaystudent();
        cout<<"Marks obtained:"<<endl;
        for(int i = 0; i < 6; ++i){
            cout<<"Subject "<< (i+1)<<": "<<marks[i]<<endl;
        }
    }
};

class Result: public Exam{
public:
    int total;
    void calResult(){
        getMarks();
        total= 0;
        for(int i = 0; i < 6; ++i){
            total += marks[i];
        }
    }
    void displayResult(){
        displayMarks();
        cout<<"Total Marks: "<<total<<"/600"<<endl;
        cout<<"Percentage: "<<(total/6.0)<<"%"<<endl;
    }
};

int main(){
    Result r;
    r.calResult();
    cout<<"\n--Student Result--";
    r.displayResult();
    return 0;
}

