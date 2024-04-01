#include <iostream>
#include <fstream>
#include <cmath>
#include <queue>

using namespace std;
ifstream f("galeti2.in");
ofstream g("galeti2.out");
long long n,e,c;
vector <int>q;
void citire(){
f>>n>>e;
}
void en()
{
    for(int i=n;i>n-c;i--)g<<i<<" "<<(i-1)<<'\n';
    n=n-c-1;
    q.push_back(n+1);
}
void afisare()
{
    for(int i=2;i<=n;i++)
    {
        g<<i<<" "<<1<<'\n';
    }
    for(int i=q.size()-1;i>=0;i--)g<<q[i]<<" "<<1<<'\n';

}
void prelucrare(){
    while (e!=0){
        c = sqrt(2*e);
        while(c*(c+1)/2>e)c--;
        
        e=e-(c*(c+1))/2;
        en();
    }
    afisare();
}

int main()
{
    citire();
    e=e-n+1;
    if(e==0)for(int i=2;i<=n;i++)g<<i<<" "<<1<<'\n';
    else {

        prelucrare();
    }
}
  