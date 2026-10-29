#include <iostream>
using namespace std;

// nested loops
// a nested loop is a loop that is placed inside another loop.

// patterns 

// pattern 1
void pattern_1(){

    int n = 4;

    for(int i = 0; i <= n-1; i++){
        for(int j = 1; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }

}

// pattern 2
void pattern_2(){

    int n = 4;

    for (int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-1; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }

}

// pattern 3
void pattern_3(){

    int n = 4;

    for(int i = 0; i <= n-1; i++){
        char ch = 'A';
        for(int j = 0; j <= n-1; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

}

// pattern 4
void pattern_4(){

    int n = 4;
    int num = 1;

    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

}

// pattern 5
void pattern_5(){

    int n = 4;
    char ch = 'A';

    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-1; j++){
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }

}

// pattern 6
void pattern_6(){

    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }

}

// pattern 7
void pattern_7(){

    int n = 4;

    for(int i = 0; i<n; i++){
        for(int j = 0; j < i+1; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }

}

// pattern 8
void pattern_8(){

    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++){
        for(int j = 0; j<i+1; j++){
            cout << (char)(ch+i) << " ";
        }
        cout << endl;
    }

}

// pattern 9
void pattern_9(){

    int n = 4;
    // int num = 1;

    for(int i = 0; i<n; i++){
        for(int j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

// pattern 10
void pattern_10(){

    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

}

// pattern 11
void pattern_11(){
    
    int n = 4;
    int num = 1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j < i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// pattern 12
void pattern_12(){

    int n = 4;
    char ch = 'A';

    for(int i = 0; i<n; i++){
        for(int j = 0 ; j < i+1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

}

// pattern 13
void pattern_13(){

    int n = 4;
    char ch = 'A';

    for(int i = 0; i<n; i++){
        for(int j = i+1; j > 0; j--){
            cout << (char) (ch+j - 1) << " ";
        }
        cout << endl;
    }

}

// pattern 14
void pattern_14(){

    int n =4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }

        for(int j = 0; j<n-i; j++){
            cout << (i + 1);
        }
        cout << endl;
    }
}

// pattern 15
void pattern_15(){

    int n = 4;
    char ch = 'A';

    for(int i = 0; i < n; i++){
        
        for( int j = 0; j < i; j++){
            cout << " ";
        }

        
        for(int j = 0; j < n-1; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// MAIN
int main ()

{

    // pattern 1
    pattern_1();

    // pattern 2
    pattern_2();

    // pattern 3
    pattern_3();

    // pattern 4
    pattern_4();

    // pattern 5
    pattern_5();

    // pattern 6
    pattern_6();

    // pattern 7
    pattern_7();

    // pattern 8
    pattern_8();

    // pattern 9
    pattern_9();

    // pattern 10
    pattern_10();

    // pattern 11
    pattern_11();

    // pattern 12
    pattern_12();

    // pattern 13
    pattern_13();

    // pattern 14
    pattern_14();

    // pattern 15
    pattern_15();

    return 0;
}