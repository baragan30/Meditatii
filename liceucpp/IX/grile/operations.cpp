#include <iostream>
#include <limits>
#include <cstdlib>  
using namespace std;

void function0(){
    int x = 1, y = 2;
    x = y;        
    y = x;     
    cout << x << " " << y; 
}

void function1(){
    int x = 1, y = 2, z;
    z = x; 
    x = y; 
    y = z;
    cout << x << " "<< y << " " << z; 
}

void function2(){
    int x = 2, y = 3;
    x = x + y;
    y = y - x;
    cout<< x << " " << y;
}

void function3(){
    int x = 2, y = 3;
    int xCopy = x;
    x = x + y;
    y = xCopy - y;
    cout<< x << " " << y;
}

void function4(){
    int x = 1, y = 2;
    x = x + y;
    y = x - y;   
    x = x - y;  
    cout << x << " " << y;// 2 1
}

void function5(){
    // Nu face calculele te rog!
    int x = 1946791, y = 2746437;
    x = x + y;              
    y = x - y;                
    x = x - y;                 
    cout << x << " " << y;
}

void function6() {
    int x = 173, y = 221;
    x = x * y;
    y = x / y;
    x = x / y;
    cout << x << " " << y << endl; 
}

void function7() {
    int x = 4, y = 8;
    y = y % x;
    x = x - y;
    cout << x << " " << y << endl; 
}

void function8() {
    int x = 2, y = 3, z = 4;
    z = x + y + z;   
    y = z - (x + y);
    x = z - (x + y);
    cout << x << " " << y << " " << z << endl;
}

void function9() {
    int x = 23, y = 5;
    int quotient = x / y;    
    int remainder = x % y;
    
    x = quotient + y * remainder;  
    y = (remainder + quotient) / 2;
    
    cout << x << " " << y << endl;
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