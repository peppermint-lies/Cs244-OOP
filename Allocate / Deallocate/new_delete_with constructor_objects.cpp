// Program dynamically allocatesand gets  students age and name:
#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int age;

    public:
    // Constructor for age.
    Student() : age(12) {}

    void get_age()
    {
        cout << "Student's age: "<< age << endl;
    }
};

int main()
{
    Student obj;
    // Dynamically delasres Student object:
    Student* pointer = new Student();

    // Call get_age() function:
    pointer->get_age();

    // Pointer memory is released/deallocated:
    delete pointer;
    return 0;
}