#include <iostream>
using namespace std;

void operators()
{
    // Operators
    // operators are special symbols used to perform operations on variable and values.

    // example:
    int a = 10;
    int b = 20;

    int sum = a + b;
    cout << "sum is " << sum << endl;
}

void arithmetic_operators()
{
    // arithmetic operators
    // used to perform mathematical operations.

    int num_1 = 5;
    int num_2 = 15;

    cout << num_1 + num_2 << endl; // addition
    cout << num_2 - num_1 << endl; // subtraction
    cout << num_1 * num_2 << endl; // multiplication
    cout << num_1 / num_2 << endl; // division
    cout << num_1 % num_2 << endl; // modulus
}

void relational_operators()
{
    // relational operator
    // used to compare two values

    int num_1 = 20;
    int num_2 = 30;

    cout << (num_1 == num_2) << endl; // equal to
    cout << (num_1 != num_2) << endl; // not-equal-to
    cout << (num_1 >= num_2) << endl; // greater than or equal to
    cout << (num_1 <= num_2) << endl; // less than or equal to
    cout << (num_1 > num_2) << endl;  // greater than
    cout << (num_1 < num_2) << endl;  // less than
}

void logical_operators()
{
    // logical operators
    // used to combine conditions

    int num_1 = 20;
    int num_2 = 10;

    cout << !(num_1 < num_2) << endl;                     // logical NOT
    cout << ((num_1 < num_2) || (num_1 > num_2)) << endl; // logical OR
    cout << ((num_1 > num_2) && (num_2 < num_1)) << endl; // logical AND
}

void assignment_operators()
{
    // assignment operators
    // used to assign values to variable

    int num = 1;

    num += 4;
    num -= 4;
    num *= 2;
    num /= 2;

    cout << num;
}

void unary_operators()
{
    // uniary operators
    // perform operation on single values

    // increment operator
    int num = 10;
    num++;
    cout << num << endl;

    // decrement operator
    int num_2 = 11;
    num_2--;
    cout << num_2 << endl;
}

// Main function
int main()
{
    operators();

    arithmetic_operators();

    relational_operators();

    logical_operators();

    assignment_operators();

    unary_operators();
}
