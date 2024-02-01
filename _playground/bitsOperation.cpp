#include <bits/stdc++.h>
using namespace std;
void test1(){
    int p = 1 << 5;
    cout << (bitset<5>)p << " " <<(bitset<5>) (p-1);
}

void test2(){
    int p = 0b101101;
    for(int i = 0 ; i <6; i ++ ){
        if(p & (1 << i)){
            cout << i<<" ";
        }
    }
}

int main(){
    test2();
}