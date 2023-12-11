//https://www.infoarena.ro/problema/lgput
#include <iostream>
#include <fstream>


using namespace std;
ifstream in("lgput.in");
ofstream out("lgput.out");
int ridicare(int n,int p)
{
    constexpr int h=1999999973;
    int r=1;
    while(p!=0){
        if(p%3==1)r=(1LL*r*n)%h;
        else{
            if(p%3==2)r=(1LL*((1LL*r*n)%h)*n)%h;
        }
        n=(1LL*((1LL*n*n)%h)*n)%h;
        p=p/3;
    }
    return r;

}

int main()
{
    int p,n;
    in>>n>>p;
    out<<ridicare(n,p);
    return 0;
}