#include <iostream>
#include <limits>
#include <cstdlib>  
using namespace std;

void function0() {
    int n = 5;
    while (n--) {
        cout << n << " ";
    }
}

void function1() {
    int x = 3;
    while (x < 10) {
        cout << x << " ";
        x += 2;
    } 
}

void function2() {
    int y = 20;
    while (y >= 10) {
        cout << y << " ";
        y -= 2;
    }
    cout << y;
}

void function3() {
    int a = 1, sum = 0; 
    while (a <= 10) {
        sum += a; 
        a++; 
    }
    cout << sum;
}

void function4() {
    int n = 6, factorial = 1;
    int temp = n;

    while (temp > 1) {
        factorial *= temp;
        temp--;
    }
    cout << n << "! = " << factorial;
}

void function5() {
    int num = 12345, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed: " << reversed;
}

void function6() {
    int count = 0;
    while (count < 3) {
        cout << "Hello ";
        count++;
    }
}

void function7() {
    int x = 0;
    while (x < 5) {
        if (x % 2 == 0)
            cout << x << " is even. ";
        else
            cout << x << " is odd. ";
        x++;
    }
}

void function8() {
    int value = 64;
    int result = 0;
    while (value >= 2) {
        value /= 2;
        result++;
    }
    cout << "Log base 2: " << result;
}

void function9() {
    int n = 4, row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col++;
        }
        cout << "\n";
        row++;
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