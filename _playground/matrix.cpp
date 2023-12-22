#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[25][25];
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            a[i][j] = i * j %  10;
        }
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
}