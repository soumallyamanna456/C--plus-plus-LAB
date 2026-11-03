#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {
    ofstream sample("textfile.txt");
    sample << "that person is going to town to meet other person";
    sample.close();
    ifstream file("textfile.txt");
    if (!file.is_open()) {
        cout << "Error: Could not open the file!" << endl;
        return 1;
    }
    file.seekg(0, ios::end);
    long fileLength = file.tellg();
    file.seekg(0, ios::beg);    
    map<string, int> wordCount;
    string word;
    while (file >> word) {
        wordCount[word]++;
    }
    file.close();
    cout << "--- File Analysis ---" << endl;
    cout << "File Length: " << fileLength << " characters" << endl;
    cout << "\nWord Occurrences:" << endl;

    for (const auto& pair : wordCount) {
        cout << "\"" << pair.first << "\": " << pair.second << " time(s)" << endl;
    }
    return 0;
}