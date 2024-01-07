#include <iostream>

using namespace std;
void citire(int a[][100], int &n, int &m){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
        }
    }
}
void afisare(int a[][100], int n, int m){
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0; j < m ; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
void genmat4(){
    int n,a[100][100];
    cin >>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j ++){
            a[i][j] = (i+1) * (j+1) % 10;
        }
    }
    afisare(a,n,n);
}

int main(){
    // int a[100][100], n , m;
    // citire(a,n,m);
    // afisare(a, n -1, m-1);
    genmat4();
}