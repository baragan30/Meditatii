#include <iostream>
#include <fstream>

using namespace std;
void read1(){
    //read one int from file doc.txt
    ifstream in("doc.txt");
    int x;
    in >> x;
    cout << x;
}
void read2(){
    //read all values from file
    ifstream in("doc.txt");
    ofstream out("display1.out");
    int x;
    while(in >> x){
        out << x<<" ,";
    }
}
int main(){
    // read1();
    read2();

}