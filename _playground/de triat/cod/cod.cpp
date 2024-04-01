#include <bits/stdc++.h>

using namespace std;
ifstream in("cod.in");
ofstream out("cod.out");
///1000000 -> 1000KB -> 1 MB
// 1 bool -> 1 byte
// 1 int -> 4 bytes
// 1 long long -> 8 bytes

bool prim(long long n){
    // ! Nu ai pus asta
    if(n == 2)
        return true;
    if(n %2 ==0){
        return false;
    }
    int r=0;
    for(int d = 3; d * d <= n; d += 2) {
        if(n % d == 0) {
            r = 1;
            break;
        }
    }
    if(r==1){
        return false;
    }
        return true;
}
bool compara(long long x, long long y){
    return x>y;
}

// !Evita sa transmiti vectori ca parametri
// Poti mai degraba sa ii declari globali (Consumi timp)
void celMaiMare(long long v[],long long f[], int n,int m){
    sort(v,v+n,compara);
    for(int i=0;i<m;i++){
        f[i]=v[i];
    }
}


long long sumaCifrelor(long long x){
    while(x>=10){
        x+=x%10;
        x/=10;
    }
    return x;
}
long long factorial(long long n){
    long long s=1;
    for(int i=1;i<=n;i++){
        s*=i;
        while(s%10==0){
            s/=10;
        }
        s=s%10;
    }
    return s;
}


int main()
{
    int n,m,g=0;
    in>>n;
    in>>m;
    // !Vectorii mergeau facuti int (ocupa 6 din 9 cifre fiecare numar)
    long long v[n];
    long long f[m];
    for(int i=0;i<n;i++){
        int a;
        in>>a;
        if(prim(a)){
            v[g++]=a;
        }
    }
    celMaiMare(v,f,g,m);

    cout<<factorial(2555);
    return 0;
}