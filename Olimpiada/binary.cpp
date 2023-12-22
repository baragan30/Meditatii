#include <bits/stdc++.h>

using namespace std;

void lower(){
    int v[] = {1,3,3,3,5};
    int n = sizeof(v)/sizeof(v[0]);
    int p1 = lower_bound(v,v+n,3) - v;
    int p2 = lower_bound(v,v+n,2) - v;
    int p3 = lower_bound(v,v+n,4) - v;
    int p4 = lower_bound(v,v+n,0) - v;
    int p5 = lower_bound(v,v+n,10) - v;
    cout << p1 << " "<<p2<< " "<<p3<< " "<<p4<<" "<<p5;
}
void upper(){
    int v[] = {1,3,3,3,5};
    int n = sizeof(v)/sizeof(v[0]);
    int p1 = upper_bound(v,v+n,3) - v;
    int p2 = upper_bound(v,v+n,2) - v;
    int p3 = upper_bound(v,v+n,4) - v;
    int p4 = upper_bound(v,v+n,0) - v;
    int p5 = upper_bound(v,v+n,10) - v;
    cout << p1 << " "<<p2<< " "<<p3<< " "<<p4<<" "<<p5;
}

int main(){
    lower();
    cout << endl;
    upper();
}