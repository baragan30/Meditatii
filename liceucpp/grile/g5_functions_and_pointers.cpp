#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

bool isGreater(int x, int y){
    return x > y;
}

void function0() {
    cout << isGreater(2,3) << " "<<isGreater(2,2)<<" "<<isGreater(3,2);
}

bool isBetter(int x, int y){
    if(x % 10 != y % 10)
        return x % 10 > y % 10;
    return x > y;
}

void function1() {
    cout << isBetter(11,21) << " "<<isBetter(34,43)<<" "<<isBetter(59,48)<<'\n';
}

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;//n = n / 10;
    }
    return count;
}

void function2() {
   cout << countDigits(12345) << endl;
}
int factorial(int n) {
    int prod = 1;
    for(int i = 2; i <= n ; i ++)
        prod *= i;// prod = prod * i;
    return prod;
}
void function3() {
      cout << factorial(4) << " " << factorial(0);
}
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}



void increase1(int n){
    n++;
}

void function4() {
    int n = 10;
    increase1(n);
    cout << n;
}

void increase2(int &n){
    n++;
}

void function5() {
    int x = 10;
    increase2(x);
    cout << x;
}
void change(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}

void function6() {
    int x = 3, y = 4;
    change(x,y);
    cout << x << " "<< y;
}
int f1(int &y, int x)
 {
    y=y/10+x;
    return x+y;
 }

void function7() {
    int x=101, y=10;
    cout<< f1(x,y) << " ";
    cout<< x << " " << y << " ";
    cout<< f1(x,y);
}
void f2(int a, int &b) {
    if(a>0)
    {
        a++; b--; f2(b,a);
    }
    cout<<a<<" "<<b<<" ";
}

void function8() {
    int a=0, b=1;
    f2(b,a);
    cout<<a<<" "<<b;
}
float f3(int i,int n)
{ 
    if(i<=3*n)
        if(i%3!=0)
            return f3(i+1,n);
        else
            return i + f3(i+1,n);
    return 0;
}


void function9() {
    cout << f3(1,6);
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