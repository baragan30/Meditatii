#include <iostream>
using namespace std;

int main(){
  int n, f1 = 1, f2 = 1, f3;
  cin >> n;
  if(n >= 1)
    cout << 1 << " ";
  if(n >= 2)
    cout << 1 << " ";
  for(int i = 3; i <= n; i ++){
    f3 = f1 + f2;
    f2 = f1;
    f1 = f3;
    cout << f3 << " ";
  }
  return 0;
}

