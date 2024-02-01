#include <bits/stdc++.h>

using namespace std;

int read1(){
    //Stii cate numere se citesc;
    int n, v[1000];
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >>v[i];
}
int read2(){
    //Nu stii cate numere se citesc. Stii ca se citesc pana se da de valoarea -1
    int n = 0, v[1000],x;
    cin >> x;
    while(x != -1){
        v[n] = x;
        n++;
        cin >> x;
    }
}
int read3(){
    //Se citeste n si n numere din fisier
    ifstream in("numefile.in");
    int n = 0, v[1000];
    in >> n;
    for(int i = 0 ; i < n ; i ++)
        in >>v[i];
}
int read4(){
    //Nu stii cate numere se citesc. Stii ca se citesc din fisier pana se da de valoarea -1
    int n = 0, v[1000],x;
    ifstream in("numefile.in");
    in >> x;
    while(x != -1){
        v[n] = x;
        n++;
        in >> x;
    }
}
int read5(){
    //Se citesc toate numerele din fisier
    int n = 0, v[1000],x;
    ifstream in("numefile.in");
    while(in >> x){
        v[n] = x;
        n++;
    }
}
int read6(){
    //Se citeste n si n valori intre 0 si 78
    //Vectori de frecventa
    int n = 0, v[79],x;
    ifstream in("numefile.in");
    in >> n;
    for(int i = 0 ; i < 79; i++){
        v[i] = 0;
    }
    for(int i = 0 ; i < n ; i ++){
        in >> x;
        v[x]++;
    }
}
int read7(){
    //Nu stim cate valori intre 0 si 103 se citesc. Se citesc toate valorile din fisier
    //Vectori de frecventa
    int n = 0, v[103],x;
    ifstream in("numefile.in");
    for(int i = 0 ; i < 103; i++){
        v[i] = 0;
    }
    while(in >> x){
        v[x]++;
    }
}


int main()
{

}