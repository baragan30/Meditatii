#include <bits/stdc++.h>

using namespace std;
ifstream in ("aquapark1.in");
ofstream out ("aquapark.out");

const int N_MAX = 70000;
const int M_MAX = 100000;
const int modulo = 666013;

struct Muchie{
int x;
int y;
int tip;
};
Muchie v[M_MAX];
int n,m,p;
long long s = 1;

inline void read()
{
  in >> p >>n >>m;
  for(int i =0 ; i < m; i++)
  {
      int x,y;
      in>>x >>y;
      if(y < x)swap(x, y);
      v[i] = {x, y, 0};
  }
}

inline bool ok(Muchie &a, Muchie &b)///Daca tipul muchiei a si tipul muchiei b depind unu de altul
{
    if(a.x < b.x && b.x < a.y && a.y < b.y) return 1;
    if(b.x < a.x && a.x < b.y && b.y < a.y ) return 1;
    return 0;

}
bool compare(Muchie &a, Muchie &b){
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

inline void construct()
{
    sort(v, v + m, compare);
    for(int i = 0 ; i < m ; i ++){
        cout << v[i].x << " "<<v[i].y<<endl;
    }
    for(int i = 0; i < m; i++)
    {
        bool newConexComponnent;
        if(v[i].tip == 0){
            v[i].tip = 1;
            newConexComponnent = true;
        }else{
            newConexComponnent = false;
        }
        for(int j = i+1; j < m && v[j].x <v[i].y; j++)
        {
            if(v[j].y > v[i].y && v[j].x != v[i].x)
            {
                if(v[j].tip != 0){
                    newConexComponnent = false;
                }else{
                   v[j].tip = 3 - v[i].tip; 
                }
            }
        }
        if(newConexComponnent){
            s = (s * 2) % modulo;
        }
    }
}

inline void afiseaza()
{
    if(p == 1)
    {
        for(int i= 0; i < m;i++)out <<v[i].x <<" " <<v[i].y <<" " <<v[i].tip <<'\n';
    }
    else
    {
        out << s;
    }
}

int main()
{
  read();
  construct();
  afiseaza();

}