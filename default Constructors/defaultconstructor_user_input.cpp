#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    public:
    string name;
    int age;

    // CONSTRUCTOR: WITH USER INPUT.
    MyClass()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // IGNORE. the newline character
    }

    // prints the data:
    void printData()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // TO ACCES THE USER INPUT TO DISPLAY THE DATA,
    // MAKE A CLASS OBJECT:
    MyClass obj;
    obj.printData();    // calls printdata() function
                        // using object and dot operator.

    return 0;
}