<h1 align="center">Quiz Catoggle-answer Capitol 1<br> Introducere în Programare</h1>

## Quiz Operatii

### 1
```cpp
int main(){
    int x = 1, y = 2;
    x = y;        
    y = x;     
    cout << x << " " << y; 
    return 0;
}
```
%%%
2 2

---
Dupa linia `x = y;`, `x` si `y` sunt 2.
%%%

### 2

```cpp
int main(){
    int x = 1, y = 2, z;
    z = x; 
    x = y; 
    y = z;
    cout << x << " "<< y << " " << z;
    return 0;
}
```
%%%
2 1 1
%%%

### 3

```cpp
int main(){
    int x = 2, y = 3;
    x = x + y;
    y = y - x;
    cout<< x << " " << y;
    return 0
}
```



%%%
5 -2

---
`x` devine 5 dupa adunare. `y` devine -2 dupa scadere.
%%%

### 4

```cpp
int main(){
    int x = 2, y = 3;
    int xCopy = x;
    x = x + y;
    y = xCopy - y;
    cout<< x << " " << y;
}
```
%%%
5 -1
%%%

### 5

```cpp
int main(){
    int x = 1, y = 2;
    x = x + y;
    y = x - y;   
    x = x - y;  
    cout << x << " " << y;
    return 0;
}
```

%%%
2 1

---
Valorile variabilelor `x` si `y` sunt interschimbate prin adunare si scadere fara a se folosi variabile ajutatoare
%%%

## Quiz if-else

### 1.
```cpp
int main() {
    int x = 5;
    if (x % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}
```
%%%
Odd

---
Restul impartirii lui 5 la 2 este 1.
%%%

### 2.

```cpp
int main() {
    int y = 15;
    if (y < 10) {
        y += 5;
    } else {
        y -= 5;
    }
    cout << y;
    return 0;
}
```
%%%
10
%%%

### 3.
```cpp
int main() {
    int a = 10, b = 20;
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
    return 0;
}
```
%%%
20

---
Deoarece `a` nu este mai mare decât `b`, se afișează `b`.
%%%

### 4.

```cpp
int main() {
    int score = 85;
    if (score >= 90) {
        cout << "A";
    } else if (score >= 80) {
        cout << "B";
    } else if (score >= 70) {
        cout << "C";
    } else {
        cout << "F";
    }
    return 0;
}
```



%%%
B

---
Scorul se încadrează în intervalul notei "B".
%%%
### 5.

```cpp
int main() {
    int year = 2023;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 2 == 1)) {
        cout << "Da";
    } else {
        cout << "Nu";
    }
    return 0;
}
```



%%%
Da

---
Deoarece 2023 este impar, condiția pentru "Da" este îndeplinită.
%%%
### 6.

```cpp
int main() {
    int x = 5, y = 5;
    if (x++ == y--) {
        cout << x;
    } else {
        cout << y;
    }
    return 0;
}
```



%%%
6

---
După comparație, `x` este incrementat la 6, iar `y` este decrementat la 4, dar afișat ca 6 pentru că `x` a fost egal cu `y` înainte de incrementare și decrementare.
%%%
### 7.

```cpp
int main() {
    int x = 10, y = 10;
    if (++x == y++ && x == y) {
        cout << x;
    }else{
        cout << y;
    }
    return 0;
}
```



%%%
11

---
`x` este incrementat înainte de comparație, iar `y` este incrementat după, astfel că nu se potrivesc la prima condiție.
%%%
### 8.

```cpp
int main() {
    int x = 5, y = 6, z = 2;
    if (x < y < z) {
        cout << "A";
    }else{
        cout <<"B";
    }
    return 0;
}
```



%%%
A

---
Expresia `x < y < z` este întotdeauna adevărată deoarece `x < y` evaluează la 1 (adevărat), și `1 < z` este de asemenea adevărat.
%%%
### 9.

```cpp
int main() {
    int val = 5;
    if (val)
        cout << val++ << " ";
    else
        cout << val-- << " ";
    cout << val;
    return 0;
}
```



%%%
5 6---

`val` este afișat ca 5, apoi incrementat la 6.
%%%
### 10.

```cpp
int main() {
    int x = 5, y = 5; 
    if (x++ > y || x == ++y) {
        cout << "A\n";
    } else if (y++ > x) {
        cout << "B\n";
    } else {
        cout << "C\n";
    }
    cout << x << " " << y;
    return 0;
}
```



%%%
C
6 7

---
`x` și `y` sunt incrementate în verificările condițiilor, ducând la valorile finale.
%%%
