#include <bits/stdc++.h>

using namespace std;

int *find(int v[], int n, int x){
    for(int i = 0; i < n; i ++){
        if(v[i] == x)
            return v + i;
    }
    return NULL;
}
void display(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        cout << v[i]<< " ";
    }cout <<"\n";
}
int main()
{
    int v[] = {11,12,13,14,15}, n = 5;
    int *p ;
    p = find(v, n, 15);
    if(p)
        *p = 7;
    p = find(v,n,13);
    display(v,n);
    return 0;
}