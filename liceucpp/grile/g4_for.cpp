#include <iostream>
#include <limits>
#include <cstdlib>  
using namespace std;


void function0() {
    int j = 1;
    while(j <= 5){
        cout << j << " ";
        j++;
    }

    cout << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
}

void function1() {
    for (int j = 2; j <= 10; j += 2) {
        cout << j << " ";
    }
}

void function2() {
    int n = 5, factorial = 1;
    for (int k = 1; k <= n; k++) {
        factorial *= k;
    }
    cout << n << "! = " << factorial;
}

void function3() {
    for (int i = 1; i <= 3; i++) {// i = 2
        int j = 1;
        for (; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void function4() {
    for (int l = 9; l >= 1; l -= 2) {
        cout << l << " ";
    }
}

void function5() {
    int sum = 0;
    for (int m = 1; m <= 4; m++) {
        sum += m * m;
    }
    cout << "Sum of squares: " << sum;
}

void function6() {
    for (int n = 10; n > 0; n -= 2) {
        cout << n << " ";
    }
}

void function7() {
    for (int o = 1; o <= 5; o++) {
        if (o % 2 == 0) {
            continue; 
        }
        cout << o << " ";
    }
}

void function8() {
    for (int p = 1; p <= 5; p++) {
        for (int q = p; q <= 5; q++) {
            if (q == 3) {
                break; 
            }
            cout << q << " ";
        }
        cout << endl;
    }
}

void function9() {
    int rows = 4;
    for (int r = 1; r <= rows; r++) {
        for (int space = 1; space <= rows - r; space++) {
            cout << "  ";
        }
        for (int s = r; s >= 1; s--) {
            cout << s << " ";
        }
        for (int t = 2; t <= r; t++) {
            cout << t << " ";
        }
        cout << endl;
    }
}


int main(){
    using Function = void (*)();
    const int NR_FUNCTIONS = 10;
    Function functions[NR_FUNCTIONS] = {
        function0,
        function1,
        function2,
        function3,
        function4,
        function5,
        function6,
        function7,
        function8,
        function9,
    };
    for(int i = 0; i < NR_FUNCTIONS; i ++){
        system("cls");
        Function func = functions[i];
        cout << "Function " << i  << " output is";
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        func();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}