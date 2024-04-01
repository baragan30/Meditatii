#include <iostream>
using namespace std;
//return first postion of x in v and -1 if it not exits
int search(int v[], int n, int x){
    for(int i = 0 ; i < n ; i ++){
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
    for(int i = n; i > poz; i --){
        v[i] = v[i-1];
    }
    v[poz] = x;
    n++;
}

//sterge elementul de pe pozitia poz
void deleteAtPoz(int v[], int &n, int poz)
{

}

//sterge primul element x gasit
void deleteX(int v[], int &n, int x)
{
    
}
//sterge toate elementele cu valoarea x
void deleteAllX(int v[], int &n, int x)
{

}
// Insereaza toate elementele din v2 in v1 incepand de la pozitia poz
void insert(int v1[], int &n1, int v2[], int n2, int poz)
{

}
//
//sorteaza crescator elementele
void sort(int v[], int n)
{
 
}

void display(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        cout << v[i] << " ";
    }cout << '\n';
}
//     0 1 2 3 4 5 6
//v1 = 1,2,3,4,5,6
// n = 6, poz = 2

//v1 = 1, 2, 11,12,13,3,4,5,6

int main()
{
    int v1[100] = {1,2,3,4,5,6};
    int v2[100] = {11,12,13};
    int n1 = 6, n2 = 3;
    push(v1, n1, 100);
    display(v1,n1);
    push(v1, n1, 100);
    insert(v1, n1, 2, 19);
    display(v1,n1);
    // cout << n1;
    // cout << search(v2, n2, 12);
    // display(v1,n1);
    // display(v2,n2);

}