#include <bits/stdc++.h>
//https://sepi.ro/assets/upload-file/oni2024/OJI/8/8_enunturi/8_robotron_RO.pdf
using namespace std;
struct jucator{
    int nr_jucator;
    int tara;
    int putere;
};
int cer, n,l,k;
vector<jucator> v[100];
void reading(){
   ifstream in("robotron.in"); 
   in >> cer >> n >> l  >> k;
   for(int i = 0; i < n ; i ++){
        int x, y;
        in >> x >> y;
        int tara = x % 100;
        v[tara].push_back({x/100, tara, y});
   }
}


void solve1(){
    int max = 0, tara_natala;
    for(int i = 1 ; i <= 99; i ++){
        if(v[i].size() > max){
            max = v[i].size();
            tara_natala = i;
        }
    }
    cout << tara_natala;
}

void permuta(vector<jucator> &v, int permutari){
    vector<jucator> v1(v.size());
    for(int i = 0 ; i < v.size(); i++){
        v1[(i + permutari) % v.size()] = v[i];
    }
    for(int i = 0 ; i < v.size(); i ++){
        v[i] = v1[i];
    }
}

void permuta(vector<int> &v, int permutari){
    vector<int> v1(v.size());
    for(int i = 0 ; i < v.size(); i++){
        v1[(i + permutari) % v.size()] = v[i];
    }
    for(int i = 0 ; i < v.size(); i ++){
        v[i] = v1[i];
    }
}

void solve2(){
    vector<int> tari;
    int pion[100];
    int jucator[100] = {};
    for(int i =  1; i <= 99 ; i ++){
        pion[i] = 1;
        if(v[i].size() > 0){
            tari.push_back(i);
            permuta(v[i], k);
        }
    }
    for(int i = 0 ; i < tari.size(); i ++){
        int tara = tari[i];
        // pion[tara] += 

    }

}
int main(){
    // reading();
    // if(cer == 1){
    //     solve1();
    // }else{

    // }
    vector<int> v;
    for(int i = 0 ; i < 10 ; i ++){
        v.push_back(i);
    }
    permuta(v, 4);
     for(int i = 0 ; i < 10 ; i ++){
        cout << v[i] << " ";
    }


    
    
}