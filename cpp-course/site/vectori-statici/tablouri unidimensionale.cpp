#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
//return first postion of x in v and -1 if it not exits
int search(int v[], int n, int x){
    for(int i = 0; i < n; i ++){
        if(v[i] == x)
            return i;
    }
    return -1;
}
void push(int v[], int &n, int x){
    v[n] = x;
    n++;
}
//inseareaza pe pozitia poz valoarea x
void insert(int v[], int &n, int poz, int x){
    for(int i = n ; i >= poz; i --){
        v[i+1] = v[i];
    }
    v[poz] = x;
    n++;
}
//sterge elementul de pe pozitia poz
void deleteAtPoz(int v[], int &n, int poz){

}
//sterge primul element x gasit
void deleteX(int v[], int &n, int X){

}

//sterge toate elementele cu valoarea x
void deleteAllX(int v[], int &n, int X){

}

//insereaza toate elementele din v2 in v1 incepand de la pozitia poz
void insert(int v1[], int n1, int v2[], int n2, int poz){

}

//sorteaza crescator elementele
void sort(int v[], int n){

}

void display(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        cout << v[i] << " ";
    }cout << '\n';
}

int main()
{
    int z=1, x = 137, y = 64;
    while(y>0)
    {
        if(y%2)
            z=x%10*z;
        cout << x <<" " <<z << "\n";
        x=x*x%10;
        y=y/2;
    }

}