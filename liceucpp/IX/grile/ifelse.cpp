#include <iostream>
#include <limits>
#include <cstdlib>  
using namespace std;



void function0() {
    int x = 5;
    if (x % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
}

void function1() {
    int y = 15;
    if (y < 10) {
        y += 5;
    } else {
        y -= 5;
    }
    cout << y;
}

void function2() {
    int a = 10, b = 20;
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
}


void function3() {
    int score = 85;
    if (score >= 90) {
        cout << "A";
    } else if (score >= 80) {
        cout << "B";
    } else if (score >= 70) {
        cout << "C";
    } else {
        cout << "F";
    }
}

void function4() {
    int year = 2023;
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 2 == 1)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

void function5() {
    int x = 5, y = 5;
    if (x++ == y--) {
        cout << x;
    } else {
        cout << y;
    }
}

void function6() {
    int x = 10, y = 10;
    if (++x == y++ && x == y) {
        cout << x;
    }else{
        cout << y;
    }
}

void function7() {
    int x = 5, y = 6, z = 2;
    if (x < y < z) {
        cout << "A";
    }else{
        cout <<"B";
    }
}

void function8() {
    int val = 5;
    if (val)
        cout << val++ << " ";
    else
        cout << val-- << " ";
    cout << val;
}

void function9() {
    int x = 5, y = 5; 
    if (x++ > y || x == ++y) {
        cout << "A";
    } else if (y++ > x) {
        cout << "B";
    } else {
        cout << "C";
    }
    cout << " - x: " << x << ", y: " << y;
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
        // system("cls");
        Function func = functions[i];
        cout << "Function " << i  << " output is";
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        func();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}