#include <iostream>
#include <fstream>
using namespace std;
ifstream in("interclasare.in");
ofstream out("interclasare.out");
constexpr int NMAX= 100000;
int n;
int f1(int a[][100]){

}

int main(){
    int n,m;
    int a[NMAX],b[NMAX];
    int c[2*NMAX];
    in >> n;
    for (int i = 0 ; i < n; i++){
        in >> a[i];
    }
    in >> m;
    for (int i = 0 ; i < m; i ++ ){
        in >> b[i];    
    }
    
    for(int i = 0 ; i <n+m; i ++){
        out << c[i] << " ";
    }
}