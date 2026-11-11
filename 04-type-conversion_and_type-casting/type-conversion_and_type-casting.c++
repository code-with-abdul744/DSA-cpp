#include <iostream>
using namespace std;

void type_conversion()
{
    // 1.Type-conversion
    // type conversion is the process of automatically or implicitly changing one data type into another data type by the compiler.

    // it also called implicit type conversion

    // example:
    int studentAge = 20;
    double newAge = studentAge;

    cout << "integer: " << studentAge << endl;
    cout << "double: " << newAge << endl;
    // int automatically converts into double.
}

void type_casting()
{
    // 2.Type-casting
    // type casting is the process of manually converting one data type into another data type by the programmer.

    // it also called explicit type conversion

    // example:
    double student_marks = 85.5;
    int converted_marks = (int)student_marks;

    cout << "original marks: " << student_marks << endl;
    cout << "converted marks: " << converted_marks << endl;
    // decimal is removed during conversion
}

// Main function
int main()
{
    type_conversion();

    type_casting();
}