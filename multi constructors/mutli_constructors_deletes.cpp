#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor:STUDENT 1 CONSTRUCTOR
    // name has empty string parameter. age parameter is 0:
    Student() : name(""), age(0)
    {
        cout << "Default constructor called\n";
        cout << "What is student 1's name: ";
        cin >> name;
    }

    // Constructor with name STUDENT2 CONSTRUCTOR:
    // Student paameter is a string. name parameter is student name, same parameters
    // age parameter is 0 still:
    Student(string studentName) : name(studentName), age(0)
    {
        cout << "Constructor with name called\n";
        cout << "Student 2's name: ";
        cin >> name;
    }

    // STUDENT 3 CONSTRUCTOR:
    // Constructor with name parameters studentname, studentage int parameter.
    // calls name age
    Student(string studentName, int studentAge) : name(studentName), age(studentAge)
    {
        cout << "Constructor with name and age called\n";
    }

    void display() const
    {
        // function displays the data 
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Dynamically allocated memory for student:
    Student* student1 = new Student("Zee", 8);
    Student* student2 = new Student("Alice", 10);   //student2 name initialized to Alice.
    Student* student3 = new Student("Benson", 9);           // student3 name is bob, age is 20.

    student1->display();
    student2->display();
    student3->display();

    delete student1;
    delete student2;
    delete student3;

    return 0;
}