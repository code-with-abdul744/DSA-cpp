#include <iostream>
using namespace std;

void variable()
{

    // variable
    // a variable is a named memory location used to store data values in a program.
    // the values stored in a variable can be changed during the execution of program.

    int age = 20;
    string name = "jack";
    char grade = 'A';

    cout << age << endl
         << name << endl
         << grade;
}

// datatype
void datatype()
{

    // a datatype is a classification that specifies the type of data a  variable can store.

    // common data types
    int age = 20;
    float price = 99.2f;
    double unit = 22.3444;
    char ch = 'A';
    bool is_student = true;
    string name = "jack";

    cout << age << " " << price << " " << unit << " " << ch << " " << is_student << " " << name << " ";
}

// MAIN
int main()
{

    // variable
    variable();

    // datatype
    datatype();

    return 0;
}