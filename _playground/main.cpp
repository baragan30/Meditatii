#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[100], n = 0, x = 100, i;
    for(i = 1; i < sqrt(x); i ++){
        if(x % i == 0){
            v[n] = i;
            n++;
            v[n] = x/i;
            n++;
        }
    }
    if(i*i == x){
        v[n] = i;
        n++;
    }

    for(int i = 0 ; i < n ; i ++){
        cout << v[i] << " ";
    }
}