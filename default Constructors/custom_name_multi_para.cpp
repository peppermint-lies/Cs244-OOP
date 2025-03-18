#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
    string name;
    int studentId;

    public:
    student(string name, int studentId) : name(name), studentId(studentId) {}

    void display() const
    {
        cout << "\nName: " << name << endl;
        cout << "Student ID: " << studentId << endl;
    }
};

int main()
{
    // to do user input, 
    string name;
    int studentId;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student ID: ";
    cin >> studentId;

    student s(name, studentId);
    s.display();

    return 0;
}