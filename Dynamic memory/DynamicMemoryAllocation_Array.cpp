// Program stores GPA of n number of students entered by the user:
#include<iostream>
using namespace std;

int main()
{
    int num; // Holds number of students enetered by the user.

    cout << "Enter the total number of students: ";
    cin >> num;
    float *ptr;

    // memory Allocation of num number of floats:
    // using new opeartor:
    ptr = new float[num];

    cout << "Enter the GPA of students: " << endl;

    // for loop iterates through the num students, add studen num to increment 
    // and then creates a pointer parameter added to student as a user input:

    for (int i = 0; i < num; ++i)
    {
        cout << "Student: " << i + 1 << ": ";
        cin >> *(ptr + i); // Pointer added to student.
    }

    // Display the GPA, using a for loop that iterates through each student
    // to display their GPA:

    for (int i =0; i < num; ++i)
    {
        cout << "Student: " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released:
    delete[] ptr;
    ptr = nullptr; // deallocates pointer to a null. No value.
    return 0;
}