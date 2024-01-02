<h1 align="center">Sumar Capitol 2<br>Algoritmica de baza</h1>

## Generari

### 5. Perechin
Se dă un număr natural nenul n. Afișați toate perechile x y cu proprietatea că x + y = n și 0 < x ≤ y.

##### Input: 
```txt
10
```
##### Output:
```txt
1 9
2 8
3 7
4 6
5 5
```

#### Rezolvare 1
- Observam ca avem mereu 2 valori, una din ele creste cu 1 la fiecare iteratie, cealalta scade cu 1.
- Prima valoare incepe de la 1, cea de a doua incepe mereu de la n-1;
- Ramane de stabilit conditia de oprire a iteratiilor (left <= right)

```cpp
int main(){
    int n, left, right;// 3 variablile de tip int
    cin >> n;
    left = 1;
    right = n - 1;
    while(left <= right){
        cout << left << " " << right <<'\n';
        left++;
        right--;
    }
    return 0;
}
```
---

#### Rezolvare 2
- Observam ca avem mereu n/2 linii de afisat, iar pe fiecare linie 2 numere
- Incercam sa ne dam seama de o formula pentru numerele aflate pe linia i.
- Pe linia 1 se vor afla nummerele 1 si n - 1
- Pe linia 2 se vor afla numerele 2 si n - 2
- Pe linia i se vor afla numerele i si n - i

```cpp
int main(){
  int n;
  cin >> n;
  // pentru fiecare i de la 1 la n/2
  for(int i = 1 ; i <= n/2 ; i ++){
    //afisam numerele i si n - i
    cout << i << " " << n - i << '\n';
  }
  return 0;
}
```

---

### 11.Fibonacci
Se pune problema aflarii celui de al n-lea sir a lui fibonaci. Sirul lui fibonacci este un sir f1, f2,f3,...fn unde:
- f1 = 1;
- f2 = 1;
- fi = fi-1 + fi-2;
- primii 6 termeni sunt : 1 1 2 3 5 8

#### Rezolvare

- observam ca avem nevoie mereu de ultimile doua valori pentru a calcula urmatorul numar. exemplu pentru a calcula f3 avem nevoie de f1 si f2
- pentru n = 1 sau n = 2 raspunsul este 1
```cpp
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
```

## Minim Maxim

### 4. Poz Max 

### 5. Verificare Ordonat 

## Cifrele unui numar

### 4. Palindrom 

## Divizibilitate

### 

## Recapitulare