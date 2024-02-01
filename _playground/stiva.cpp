#include <bits/stdc++.h>

using namespace std;
const long long XMAX = 3000000000;
bool ciur[(XMAX-2) /2];
int getPrim(int x){
    if(x == 2)
        return true;
    if(x < 2 || x % 2 == 0 )
        return false;
    return !ciur[(x -3)/2];
}
void make_ciur(int XMAX){
    for(int i = 3; i <= sqrt(XMAX); i +=2){
        if(!ciur[(i -3)/2])
            for(int j = i *i; j <= XMAX; j +=i ){
                ciur[(j -3)/2] = true;
            }
    }
}
 
int main()
{
    cout << sizeof(ciur) <<endl;
    make_ciur(XMAX);
    cout <<  getPrim(XMAX);
}