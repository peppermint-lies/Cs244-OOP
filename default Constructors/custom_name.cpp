#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    string name;

    public:
    int studentid;

    // Default Constructor with 2 parameters: string, int:
    student(string n, int a)
    {
        name = n;
        studentid = a;
    }

    void display() const
    {
        cout << "Display the students name and id:\n";
        cout << "Name: " << name << " Studentid: " << studentid << "\n" << endl;
    }
};

int main()
{
    student* obj = new student("jay", 123);
    obj->display();

    delete obj;
    return 0;
}
