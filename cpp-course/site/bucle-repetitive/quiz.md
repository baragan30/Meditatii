<h1 align="center">Quiz Capitol 2<br> Bucle repetitive</h1>

## While
### 1
```cpp
int main(){
    int x = 10;
    while (x > 2 ) {
        cout << x << " ";
        x -= 2;
    }
    return 0;
}
```
%%%
10 8 6 4
%%%

### 2
```cpp
int main(){
    int a = -1, sum = 0; 
    while (a <= 3) {
        sum += a; 
        a++; 
    }
    cout << sum;
    return 0;
}
```
%%%
5
%%%

### 3
```cpp
int main(){
    int count = 0;
    while (count < 3) {
        cout << "Hello ";
        count++;
    }
    return 0;
}
```
%%%
Hello Hello Hello 
%%%

### 4
```cpp
int main(){
    int x = 0;
    while (x < 5) {
        if (x % 2 == 0)
            cout << x << " is even. ";
        else
            cout << x << " is odd. ";
        x++;
    }
    return 0;
}
```
%%%
0 is even. 1 is odd. 2 is even. 3 is odd. 4 is even. 
%%%

### 5
```cpp
int main(){
    int n = 4, row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col++;
        }
        cout << "\n";
        row++;
    }
    return 0;
}
```
%%%

*   
**  
\*** 
\****

%%%