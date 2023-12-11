#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

int cost[]  = {7, 4, 10};

struct compara
{
    bool operator()(int x, int y)
    {
        return cost[x] > cost[y];
    }
};
priority_queue<int, vector<int>, compara> q;

int main(){
    q.push(2);
    q.push(1);
    q.push(0);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    
}