#include <bits/stdc++.h>

using namespace std;
//vezi daca un numar este prim
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void getAllDividers(int v[], int &n, int x){
    const int rx = sqrt(x);
    n = 0;
    for(int i = 1 ; i < rx;i++ ){
        if(x / i){
           v[n++] = i;
           v[n++] = x / i; 
        }
    }
    sort(v, v + n);
}

//! divider-ul trebuie sa fie diferit de 0 si de 1
bool divide(int &x, int divider){
    if(x % divider != 0)
        return false;
    do{
        x/=divider;
    }while(x % divider == 0);
    return true;  
}
//! nu ii da numere mai mici ca 1
void getprimiDivisors(int v[], int &n, int x) {
    n = 0;
    if(divide(x,2))
        v[n++] = 2;
    for(int i = 3; i <= sqrt(x); i+=2){
        if(divide(x,i)){
            v[n++] = i;
        }
    }
    if(x != 1)
        v[n++] = x;
}

int cmmdc(int a, int b){

}
void Eratostene(bool v[], int xMAx){
    
}

int main()
{
    // int x,v[1000],n;
    // cin >> x;
    // primeDivisors(v,n,x);
    // // getAllDividers(v,n,x);
    // cout << n<<endl;
    // for(int i = 0 ; i < n; i ++){
    //     cout << v[i] << " ";
    // }
    int a = 100, b = 0;
    int v[2];
    cout << "Miau";
    v[100] = 43;
    cout <<a << "sd";
    return 0;
}