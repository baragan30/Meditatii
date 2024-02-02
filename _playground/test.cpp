#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){ 
    char str1[] = "apple, orange, banana";
    char str2[] = "red, green, yellow";

    char *p = strtok(str1, " ,");
    cout <<p<<"\n";
    p = strtok(NULL, " ,");
    cout <<p<<"\n";
    p = strtok(str2, " ,");
    cout <<p<<"\n";
    p = strtok(NULL, " ,");
    cout <<p<<"\n";
}