# include <iostream>
using namespace std;

// loops
// a loop in c++ is a control structure use to repeatedly execute a block of code as long as 
// a specified condition is satisfied.

// 1-for loop 
void for_loop()
{
    int n = 5;

    for(int i = 0; i <=n-1; i++){
        cout << i << " ";
    }

}

// 2-while loop
void while_loop()
{
    int i = 1;
    int n = 10;

    while(i <= n){
        cout << i << " ";
        i++;
    }

}

// 3-do while loop
void do_while_loop()
{
    int i = 1;

    do{
        cout << i << endl;
        i++;
    } while (i <= 5);

}

// 4-break statement
void break_statement()
{
    for (int i =1; i <= 5; i++){
        if(i == 4){
            cout << "4 found" << endl;
            break;
        }

        cout << i << " ";
    }
}

// 5-continue statement
void continue_statement()
{
    for (int i =1; i <= 5; i++){
        if(i == 4){
            continue;
        }

        cout << i << " ";
    }

}

// 6-sum of numbers from 1 to n.
void sum_of_n()
{
    int sum = 0;
    int n;

    cout << "enter num : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum = sum+i;
    }

    cout << sum;

}

// MAIN
int main ()
{
    // 1-for loop 
    for_loop();

    // 2-while loop
    while_loop();

    // 3-do while loop
    do_while_loop();

    // 4-break statement
    break_statement();

    // 5-continue statement
    continue_statement();
    
    // 6-sum of numbers from 1 to n.
    sum_of_n();
}