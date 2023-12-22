#include <bits/stdc++.h>

using namespace std;
ifstream in("abx.in"); 
ofstream out("abx.out");
long long x, m;
bool ciur[100000000];

inline long long bestSolution(long long sol1, long long sol2, long long x){
    long long res1 = abs(x - sol1);
    long long res2 = abs(x - sol2);
    if(res1 < res2)
        return sol1;
    if(res1 > res2)
        return sol2;
    if(sol1 < sol2)
        return sol1;
    return sol2;
}
/*
    17
*/
long long calc_putere(long long x)
{
    long long sol = 1;
    long long put = 1;
    for(int i = 2; i <= x; i ++)
        ciur[i] = 0;
    
    for(int i=2; i<=sqrt(x); i++)
    {
        if (ciur[i]==1) {
            continue;
        }
        put= i;
        
        for(int j=1; put < x / i; j++)
        {
            put=put*i;
            ciur[put]=1;
        }
       sol = bestSolution(sol, put, x);
       if(put <= m / i)
        sol = bestSolution(sol, put * i, x);
    }
    return sol;
    
}
int main()
{
    int n;
    in >> n >> m;
    for(int i=0; i<n; i++)
    {
        in >> x;
        out << calc_putere(x) << endl; 
    }
    return 0;
}