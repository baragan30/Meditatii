#include <bits/stdc++.h>
using namespace std;

/*
    Fiecare persoana poate contine un nume si 2 cost-uri
*/
struct Person{
    char name[50];
    int cost1;
    int cost2;
};
/**
 * @brief Mai jos am declara o lista dinamica de tipul de persoana
 * Memorie dinamica inseamna ca va contine un numar variabil de elemente de timpul Persoana
 * Initial nu contine 
 */
vector <Person> v;

void repopulate(){
    //remove all elements from v;
    v.clear();
    v.push_back({"Ana",1,2});
}


int main(){
    repopulate();
    cout<< v[0].name;

}