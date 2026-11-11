#include <iostream>
using namespace std;

void data_type()
{
    // Data-types
    // A data type specifies the type of data a variable can store, such as numbers, decimal values, characters, or text.

    int studentAge = 20;                // integer data type - storage occupied 4-byte
    float studentMarks = 85.5f;         // float data type - storage occupied 4-byte
    double studentPercentage = 89.5678; // double data type - storage occupied 8-byte
    char studentGrade = 'A';            // character type - storage occupied 1-byte
    bool studentPass = true;            // boolean data type - storage occupied 1-byte
    string studentName = "Shayan";      // string data type - storage occupied ( ascii values )

    cout << "Name: " << studentName << endl;
    cout << "Age: " << studentAge << endl;
    cout << "Marks: " << studentMarks << endl;
    cout << "Percentage: " << studentPercentage << endl;
    cout << "Grade: " << studentGrade << endl;
    cout << "Pass: " << studentPass << endl;
}

// Main function
int main()
{
    data_type();
}