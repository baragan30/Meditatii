#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");
void insert(int v1[], int &n1, int v2[], int n2)
{
    for(int i=0; i<n2; i++)
    {
        v1[n1+i]=v2[i];
    }
    n1=n1+n2;
}
int main()
{
    int n, m;
    fin>>n;
    int v1[100000], v2[100000];
    for(int i=0; i<n; i++)
    {
        fin>>v1[i];
        if(v1[i]>=1000000)
            return 0;
    }//0 -> n-1; n elemente citite
    fin>>m;
    for(int i=0; i<m; i++)
    {
        fin >>v1[n + i];
    }n = n + m;// n -> n + m -1 ; // m elemente
     for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v1[i] > v1[j])
                swap(v1[i], v1[j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        fout<<v1[i]<<" ";
    }
    
    return 0;
}