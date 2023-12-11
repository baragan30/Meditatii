//https://www.infoarena.ro/problema/rucsac
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream in("rucsac.in");
ofstream out("rucsac.out");
#define cin in




int maxi[10001],n,g,st,dr,mij,l;
vector <pair<int,int>>a;
vector <pair<int,int>>c;
void cit()
{
    int x,y;
    cin>>n>>g;
    for (int i=0; i<n; i++)
    {
        cin>>x>>y;
        a.push_back(make_pair(x,y));
        c.push_back(make_pair(i,0));
    }
}
///1 greutate 2 money
///c[g] 1 rest g 2 money


bool compara(pair <int, int> x, pair<int , int> y){
    if(x.first == y.first)
        return x.second < y.second;
    return x.first < y.first;
}
bool compara2(int x, pair<int,int> y){
    return x < y.first;
}


int biny(int co)
{
    auto p = upper_bound(a.begin(), a.end(),co,compara2);
    if(p == a.begin())
         throw std::invalid_argument("In biny p == a.begin()");
    return p - a.begin() -1;
}
void mor()
{
    int p;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            p=biny(j);
            if (c[i].second<p)
                c[i].second=p;
            c[i].first=i-a[mij].first;
        }
    }
}
void eeeee()
{
    for (int i=g; i>0; i--)
    {
        while (c[i].first>0)
        {
            if(biny(i-c[i].first)<c[i-c[i].first].second)
            {
                c[i].first+=c[i-c[i].first].first;
                c[i].second-=c[i-c[i].first].second;
            }
            else if (biny(i-c[i].first)>c[i-c[i].first].second)
            {
                c[i].first+=c[biny(i-c[i].first)].first;
                c[i].second-=c[mij].second;
            }
            else
            {
                l=i-1;
                while (l>0)
                {
                    if(biny(i-c[i].first-l)<c[i-c[i].first-l].second)
                    {
                        c[i].first+=c[i-c[i].first-l].first;
                        c[i].second-=c[i-c[i].first-l].second;
                    }
                    else if (biny(i-c[i].first-l)>c[i-c[i].first-l].second)
                    {
                        c[i].first+=c[biny(i-c[i].first-l)].first;
                        c[i].second-=c[mij].second;
                    }
                    l--;
                }
            }
        }
    }
}
void am_dormit_4_ore()
{
    int m=0;
    for (int i=1; i<g; i++)
        if(c[i].second>m)
            m=c[i].second;
    cout<<m;
}

int func(int *p){
    cout << p[0] << " "<<p[1];
}

int ctr = 0;

int main()
{
    
    cit();
    sort(a.begin(),a.end(),compara);
    for(auto x : a){
        cout << "( " << x.first << " "<< x.second << " ) ";
    }cout <<"\n";
    auto p = upper_bound(a.begin(), a.end(), 0, compara2);

    if(p >= a.begin() && p < a.end()){
        cout << p[0].first << " " <<p[0].second;
    }
    
    eeeee();
    am_dormit_4_ore();
    return 0;
}