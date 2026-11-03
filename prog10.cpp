#include <iostream>
using namespace std;

class Media {
public:
    string title, publisher;

    virtual void read() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publisher: ";
        cin >> publisher;
    }

    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class Book : public Media {
    int pages, time;

public:
    void read() {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter reading time (hours): ";
        cin >> time;
    }

    void show() {
        cout << "\nBook Details\n";
        Media::show();
        cout << "Pages: " << pages << endl;
        cout << "Reading Time: " << time << " hours" << endl;
    }
};

class Tape : public Media {
    int time;

public:
    void read() {
        Media::read();
        cout << "Enter playing time (minutes): ";
        cin >> time;
    }

    void show() {
        cout << "\nTape Details\n";
        Media::show();
        cout << "Playing Time: " << time << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;
    Media *m;

    cout << "Enter Book Details:\n";
    m = &b;
    m->read();

    cout << "\nEnter Tape Details:\n";
    m = &t;
    m->read();

    cout << "\nLibrary Details:\n";
    m = &b;
    m->show();

    m = &t;
    m->show();

    return 0;
}