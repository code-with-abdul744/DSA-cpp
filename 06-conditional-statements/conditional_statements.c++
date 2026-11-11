#include <iostream>
using namespace std;

void conditional_statement()
{
    // conditional statements
    // conditional statements are used to make decisions in a program. they executes different blocks of code depending on whether a condition is true or false.

    // example:
    int num = 20;
    if (num >= 18)
    {
        cout << "num is greater than 18";
    }
}

void if_statement()
{
    // if-statement()
    // executes a block of code only when the given condition is true.

    int age = 20;

    if (age > 18)
    {
        cout << "Adult";
    }
}

void if_else_statement()
{
    // if-else-statement()
    // executes one block if the condition is true and another block if it is false.

    int num;

    cout << "enter num : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }
}

void else_if_statement()
{
    // else-if-statement()
    // used when we need to check multiple conditions one by one.

    int student_marks;

    cout << "enter marks: ";
    cin >> student_marks;

    if (student_marks >= 90)
    {
        cout << "Grade A";
    }
    else if (student_marks >= 75)
    {
        cout << "Grade B";
    }
    else if (student_marks >= 50)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Fail";
    }
}

void ternary_operator()
{
    // ternary operator
    // used as replacement of if-else statement

    int num;
    cout << "enter num: ";
    cin >> num;

    string result = (num > 0) ? "positive number" : "negative number";
    cout << result;
}

// Main function
int main()
{

    conditional_statement();

    if_statement();

    if_else_statement();

    else_if_statement();

    ternary_operator();
}