/*
    https://infoarena.ro/problema/abx
    - ridicare la putere
    - cautare binara
*/

#include <bits/stdc++.h>
using namespace std;

ifstream in("abx.in");
ofstream out("abx.out");

using ll = long long;
ll m, sqrtm;

ll power(ll x, int exp){
    if(x == 0)
        return 0;
    ll put = 1;
    for(int i = 1; i<= exp; i ++){
        if(put > m / x)
            return LLONG_MAX;
        put *= x;
    }
    return put;
}

inline ll selectBest(ll x, ll sol1, ll sol2){
    ll var1 = abs(sol1 - x);
    ll var2 = abs(sol2 - x);
    if(var1 < var2)
        return sol1;
    if(var2 < var1)
        return sol2;
    return min(sol1, sol2);

}
//112 2
//121 100

//112 3
//64 125
ll solve(ll x, ll exp){
    ll sol = 1;
    ll baza = 2;
    ll solcp, sol2;
    
    sol2 = power(2,exp);
    for(baza = 2; sol2<=x ;baza++){
        sol2 = power(baza,exp);
        cout << baza << " " << sol2 << endl;
    }
    sol = selectBest(x,sol,sol2);
    sol2 = power(baza - 1, exp);
    sol = selectBest(x,sol,sol2);
    return sol;
}

ll solve(ll x){
    ll sol = 1;
    for(int exp = 2; exp <= 64; exp++){
        ll sol2 = solve(x,exp);
        sol = selectBest(x,sol,sol2);
        if(sol == x)
            break;
    }
    return sol;
    
}

int main(){  
    int n;
    ll x;
   // cout << "fewdhsvsd" << " ";
    // in >> n>> m;
    // //cout << m;
    // sqrtm = sqrt(m);
    // for(int i = 0 ; i < n ; i ++){
    //     in >> x;
    //     out << solve(x) << "\n";
    // }
    m = 10000000;
    sqrtm = sqrt(m);
    cout <<"\n" << solve(976321,2);
    return 0;
}