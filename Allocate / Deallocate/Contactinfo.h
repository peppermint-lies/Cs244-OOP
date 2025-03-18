// Using c string, initialize setters, getters using pointers to private:
// constructor with parameters, initialize the pointers using new operator
// destructor, an deallocate memory using delete operator.
// Return name, return phone:

#ifndef Contactinfo_h
#define Contact_info_h
#include <cstring>      // for strlen and strcpy
using namespace std;

// class Contactinfo holds:
//          private:
//              char *name;  POINTER
//              char *phone; POINTER

class Contactinfo
{
    private:
    char *name;
    char *phone;

    // SETTER:
    // Initialie the VOID SETTER name with (char *new variable) parameters:
    void initName (char *n)
    {
        // initialize pointer n to the private member name:
        name = new char [strlen(n) + 1];              
        // uses new operator

        strcpy (name, n);   // call
    }   // Allocates memeory for phone data, and initializes it with the value 
    // pointed to by the p parameter.

    // SETTER:
    // Intitialize phone to be assigned the new char *pointer parameter to
    // equal the private member phone:
    void initPhone (char *p)
    {
        phone = new char [strlen(p) + 1];          
        // uses new operator

        strcpy (phone, p);
    }   // Allocates memory for the phone data, initializes it with the value
    // pointed to by the p parameter.

    public:
    // CONSTRUCTOR:
    Contactinfo (char *n, char *p)      // parameters (name, phone) 
    {
        // initialize the name:
        initName (n);

        // Initialize the phone:
        initPhone (n);
    }

    // DESTRUCTOR:
    ~Contactinfo()
    {
        // Deallocate the memory of name and phone using delete operator:
        delete[] name;
        delete[] phone;
    }

    // GETTERS:
    // const char *pointer() for getName, returns name.

    const char *getName() const
    {
        return name;
    }

    // getter:
    // const char *pointer () for getPhone() returns phone.

    const char *getPhone() const
    {
        return phone;
    }
};
#endif