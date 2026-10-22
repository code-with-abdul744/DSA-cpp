#include <iostream>
using namespace std;

// operators
// operators are special symbols used to perform operations on variables and values in a program.

// arithmetic operators
void arithmetic()
{
    int a = 10;
    int b = 50;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
}

// relational operators
void relational()
{
    int a = 10;
    int b = 20;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
}

// logical operators
void logical()
{
    int a = 10;
    int b = 20;

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    // cout << (a ! b) << endl;
}

// assignment operators
void assignment()
{
    int a = 10;
    int b = 20;

    cout << (a += b) << endl;
    cout << (a -= b) << endl;
    cout << (a *= b) << endl;
    cout << (a /= b) << endl;
}

// increment decrement operators
void inc_dec()
{
    int a = 5;

    cout << a++ << endl;
    cout << a-- << endl;
}

// MAIN
int main()
{

    // arithmetic operators
    arithmetic();

    // relational operators
    relational();

    // logical operators
    logical();

    // assignment operators
    assignment();

    // increment decrement operators
    inc_dec();

    return 0;
}