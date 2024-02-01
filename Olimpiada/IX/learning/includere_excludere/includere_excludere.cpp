//https://www.infoarena.ro/problema/pinex
#include <bits/stdc++.h>

using namespace std;

ifstream in("pinex.in");
ofstream out("pinex.out");
const int MAX_DIVIDERS = 20;

bool divide(long long &x, long long divide){
    if(x % divide != 0)
        return false;
    do{
        x /= divide;
    }while(x % divide == 0);
    return true;
}

void descompunere(long long v[], int &n, long long x){
    n = 0;
    for(long long d = 2; d <= sqrt(x); d++){
        if(divide(x,d))
            v[n++] = d;
    }
    if(x != 1)
        v[n++] = x;
}
void display(long long v[], int n){
    for(int i = 0 ; i <n; i++)
        cout << v[i] << ' ';
    cout << '\n';
}
long long getSol(long long A, long long v[], int n){
    long long ans = 0;
    int full = (1<<n) - 1;
    for(int sets = 1 ; sets <= full ; sets++)
    {
        // cout << (bitset<5>)sets<<endl;
        short int nrOfSets = 0;
        long long sum = A;
        for(int j = 0 ; j < n ; j++)
        {
            int mask = (1<<j);
            if(sets & mask)
            {
                nrOfSets++;
                sum /= v[j];
            }
        }

        if(nrOfSets % 2 == 1) ans += sum;
        else ans -= sum;
    }
    return ans;
}
int main()
{  
    long long v[MAX_DIVIDERS], A = 10,B = 5;
    int n, m;
    in >> m;

    for(int i = 0 ; i < m ; i ++){
        in >> A >> B;
        descompunere(v,n,B);
        // display(v,n);
        out <<A - getSol(A,v,n) << '\n';   
    }
    return 0;
}