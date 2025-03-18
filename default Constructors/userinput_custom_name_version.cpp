#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
    string name;
    int studentId;

    // Default constructor with user input
    Student() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student ID: ";
        cin >> studentId;

        // Consume the newline character left in the input buffer
        cin.ignore();
    }

    // Function to display student information
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << studentId << endl;
    }
};

int main()
{
    Student student1; // Create a Student object, constructor is called
    cout << "\nStudent Information:\n";
    student1.display();

    return 0;
}