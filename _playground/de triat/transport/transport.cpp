#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

ifstream in("transport.in");
ofstream out("transport.out");

int v[16000] = {2,2}, n = 2;

int saltele(int c){
    int sum = 0;
    int cnt = 1;
    for(int i=0; i<n; i++)
    {
        sum=sum+v[i];
        if(sum > c)
        {
            cnt++;
            sum=v[i];
        }
    }
    return cnt;
}

int main()
{
    int k, minim=INT_MAX;
    in >> n >> k;
    for(int i=0; i<n; i++)
    {
        in >> v[i];
    }

    int st = max_element(v, v + n)[0];
    int dr = 256000000, mj;
    while(st!=dr)
    {
       
        mj=(st+dr)/2;
        int cnt = saltele(mj);
        if(cnt<=k)
        {
            dr=mj;
            minim=mj;
        }
        else
        {
            st=mj+1;
        }
    }
    out << minim;
    return 0;
}