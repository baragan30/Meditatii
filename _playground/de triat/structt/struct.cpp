#include <bits/stdc++.h>

using namespace std;

const double epsilon = 0.00001;

struct Point1{
    double x, y;
    void move(Point1 p){
        this->x+=p.x;
        this->y+=p.y;
    }
    void display(){
        cout<<"( "<<this->x<<" "<<this->y<<" )"<<endl;
    }
    double length(){
        double dx=this->x*this->x;
        double dy=this->y*this->y;
        return sqrt(dx+dy);
    }
    void rotate(double alpha){
        double cx = this->x;
        this->x = this->x * cos(alpha) - this-> y * sin(alpha);
        this->y = cx * sin(alpha) + this-> y * cos(alpha);
    }
};

void example1(){
    Point1 a={1,2}, b={2,2};
    a.move(b);
    a.move({-1,1});
    b.move({1,1});
    a.display();
    b.display();
    cout<< a.x<<" "<<a.y<<"\n";
    cout<< b.x<<" "<<b.y<<"\n";
    cout<<a.length()<<" "<<b.length();
}

bool areEqual(double x, double y){
    return fabs(x - y) < epsilon;
}
bool compar(Point1 a,Point1 b){
    double la = a.length() , lb = b.length();
    if(areEqual(la, lb))
        return false;
    return la < lb;
}
bool compar2(Point1 a, Point1 b){
    if(!areEqual(a.x, b.x))
        return a.x < b.x;
    if(!areEqual(a.y, b.y))
        return a.y < b.y;
    return false;
}
void example2(){
    Point1 v[100]={{3,2},{2,6},{1,9},{1,1}};
    int n=3;
    sort(v,v+n,compar);
    for(int i=0;i<n;i++){
        v[i].display();
    }
}
void example3(){
    Point1 v[100]={{3,2},{2,6},{1,9},{1,1}};
    int n=4;
    sort(v,v+n,compar);
    for(int i=0;i<n;i++){
        v[i].display();
    }
    cout<<(lower_bound(v, v+n,(Point1){3,0},compar2)-v);
}
void example4(){
    Point1 p = {1 , 2};
    p.rotate(M_PI_2);
    p.display();

}

int main()
{
    example4();
    return 0;
}