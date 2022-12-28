#include <iostream>

using namespace std;

int main()
{
    int studentId;
    string studentName;
    bool graduated;

    cout << "Student ID: ";
    cin >> studentId;
    cout << "Student Name: ";
    cin >> studentName;
    cout << "Graduated: ";
    cin >> graduated;
    cout << "Done" << endl;
    cout << "Student ID = " << studentId << endl;
    cout << "Student Name = " << studentName << endl;
    cout << "Graduated = " << graduated << endl;
    return 0;
}