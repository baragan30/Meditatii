#include <bits/stdc++.h>

using namespace std;
ifstream in("pinex.in");
ofstream out("pinex.out");

//! divider-ul trebuie sa fie diferit de 0 si de 1
bool divide(long long &x, int divider){
    if(x % divider != 0)
        return false;
    do{
        x/=divider;
    }while(x % divider == 0);
    return true;  
}
//! nu ii da numere mai mici ca 1
void getprimiDivisors(long long v[], int &n, long long x) {
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

void getPrimesCard(long long dividers[], int n, long long A){
    int full = (1 << n) - 1;
    //divisors = 2 3 5
    //50 / v[0]/v[1]
    long long ans =0;
    for(int i = 1; i <= full; i++){
        //i = 0b011
        long long sum = A;
        int nr=0;
        for(int j = 0; j < n ; j ++){
            if(i & (1 << j)){
                sum/= dividers[j];
                nr++;
            }
        }
        if(nr % 2 == 0){
            ans = ans - sum;
        }else{
            ans = ans + sum;
        }
    }
    out <<A- ans<<"\n";
}

void solve(long long A, long long B){
    //B <= 10 ^ 12;
    int n;
    long long dividers[12];
    getprimiDivisors(dividers,n,B);
    getPrimesCard(dividers,n,A);


}

int main(){
   int n;
   long long A,B;
   in >> n;
   for(int i = 1; i <= n ; i ++){
        in >> A >> B;
        solve(A,B);
   }
}