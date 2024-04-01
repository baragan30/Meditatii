#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    bool ok=true;
    if(n<=1)
        ok=false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            ok=false;
            break;
    }
    if(ok==true)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}