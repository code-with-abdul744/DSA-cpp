#include <iostream>
using namespace std;

// conditional ststements
// conditional statements are statements in c++ that are used to make decisions based on a condition.

// 1-if statement
void if_statement()
{
    int age = 20;

    if (age >= 18)
    {
        cout << "adult";
    }
}

// 2-else statement
void else_statement()
{
    int age = 2;

    if (age >= 18)
    {
        cout << "adult";
    }
    else
    {
        cout << "not adult";
    }
}

// 3-else if statement
void else_if_statement()
{
    int age;

    cout << "enter age : ";
    cin >> age;

    if (age < 18)
    {
        cout << "not adult";
    }
    else if (age < 60)
    {
        cout << "adult";
    }
    else
    {
        cout << "senior cetizen";
    }
}

// 4-ternary operator
void ternary_operator()
{
    int num;
    
    cout << "enter num : ";
    cin >> num;

    string result = (num % 2 == 0) ? "even" : "odd";
    cout << num << " is " << result;

}

// MAIN
int main()
{
    // 1-if statement
    // if_statement();

    // 2-else statement
    // else_statement();

    // 3-else if statement
    // else_if_statement();

    // 4-ternary operator
    // ternary_operator();

    return 0;
}