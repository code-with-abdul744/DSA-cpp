// functions

#include <iostream>
using namespace std;

// 1. function

// A function is a reusable block of code that performs a specific task.
// You write it once and call it whenever needed, which keeps your code
// shorter, cleaner, and easier to manage.
int add(int a, int b)
{
    return a + b;
}

// 2. parameters and arguments

// Parameters: Variables listed in the function's definition.
// They act as placeholders that receive values when the function is called.
// Arguments:  The actual values you pass to the function when you call it.
int multiply(int a, int b) // a and b are parameters
{
    return a * b;
}

// 3. sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

// 4. min of two numbers

int minOfTwo(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

// 5. sum of numbers 1 to n

int sumToN(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}

// 6. factorial of n

// n! = 1 * 2 * 3 * ... * n   (0! = 1)
// long long is used because factorial grows very fast.
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// 7. nCr (binominal cofficient)

// nCr = n! / (r! * (n-r)!)
// Works only for small n (up to about 20), otherwise factorial overflows.
long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// 8. function in memory

// When a function is called, the program creates a stack frame for it
// in the call stack (a part of memory). This frame stores the function's
// parameters, local variables, and the return address (where to go back
// after the function finishes). When the function ends, its frame is
// removed (popped) from the stack, and all its local variables are destroyed.
int square(int n)
{
    int result = n * n; // n and result live in square's stack frame
    return result;
}

// 9. pass by value

// When you call a function, a copy of the argument is made and given
// to the parameter. Any changes made inside the function affect only
// the copy, and the original variable stays unchanged.
void change(int a)
{
    a = 100; // changes only the copy
    cout << "Inside change(): a = " << a << endl;
}

// 10. sum of digits

// n % 10 gives the last digit, n / 10 removes the last digit.
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10; // get last digit
        sum += digit;       // add it to sum
        n = n / 10;         // remove last digit
    }
    return sum;
}

// 11. check if the number is prime.

// A prime number is greater than 1 and divisible only by 1 and itself.
// We only need to check divisors up to sqrt(n), i.e. while i * i <= n.
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// 12. print all prime from 1 to n

void printPrimes(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

// 13. nth fibonacci number

long long fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    long long prev = 0, curr = 1;
    for (int i = 2; i <= n; i++)
    {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

// main

int main()
{
    // 1. Function
    cout << "add(3, 5) = " << add(3, 5) << endl;

    // 2. Parameters and arguments (4 and 5 are arguments)
    cout << "multiply(4, 5) = " << multiply(4, 5) << endl;

    // 3. Sum of two numbers
    cout << "sum(10, 20) = " << sum(10, 20) << endl;

    // 4. Min of two numbers
    cout << "minOfTwo(10, 20) = " << minOfTwo(10, 20) << endl;

    // 5. Sum of 1 to n
    cout << "sumToN(5) = " << sumToN(5) << endl;

    // 6. Factorial
    cout << "factorial(5) = " << factorial(5) << endl;

    // 7. nCr
    cout << "nCr(5, 2) = " << nCr(5, 2) << endl;

    // 8. Functions in memory
    int x = 5;         // x lives in main's stack frame
    int y = square(x); // square's frame is pushed, then popped after return
    cout << "square(5) = " << y << endl;

    // 9. Pass by value
    int num = 10;
    change(num);
    cout << "Outside change(): num = " << num << endl; // still 10

    // 10. Sum of digits
    cout << "sumOfDigits(1234) = " << sumOfDigits(1234) << endl;

    // 11. Prime check
    cout << "isPrime(17) = " << (isPrime(17) ? "Prime" : "Not Prime") << endl;
    cout << "isPrime(20) = " << (isPrime(20) ? "Prime" : "Not Prime") << endl;

    // 12. Primes from 1 to n
    cout << "Primes from 1 to 30: ";
    printPrimes(30);

    // 13. Nth Fibonacci
    cout << "fibonacci(10) = " << fibonacci(10) << endl;

    return 0;
}