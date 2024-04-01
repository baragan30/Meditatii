<h1 align="center">Sumar Capitol 2<br>Bucle Repetitive</h1>


### Structura While
- Sintaxă: `while (condiție) { ... }`
  - Execută blocul de cod `{ ... }` atâta timp cât `condiție` este `true`.
- Exemplu:
  ```cpp
  void main(){
    int x = 1;
    while (x > 0 && x < 3){
      // Cod executat repetitiv cât timp x este între 1 și 2
      cout << x << " ";
      x++;
    }
  }
    ```
### Structura Do-While
- `do { cod } while (condiție);`
  - Diferenta intre el si while este ca intra in bucla obligatoriu prima data
  - Dupa care reintra in bucla de cate ori `coditie` este adevarata
  - Nu prea o sa il folositi dar e importanta sa stiti ca exista.
- Exemplu:
  ```cpp
  void main(){
    x = 0;
    do {
      // Cod executat cel puțin o dată și apoi repetat cât timp x este între 1 și 2
      cout << x << " ";
      x++;
    } while (x > 0 && x < 3); 
  }

    ```
### Structura For
- `for (inițializare; condiție; modificare) { ... }`
- Inițializează o variabilă, testează o condiție și modifică variabila la fiecare iterație.
- Exemplu:
  ```cpp
  int main(){
    for (int i = 0; i < 5; i++) {
      cout << i << " ";
      // Cod executat pentru fiecare valoare a lui i de la 0 la 4
    } 
  }

  ```

## Citiri
### Citirea a n variabile
  ```cpp
  int main() {
    int n = 5,x;
    for (int i = 0; i < n; i++) {
      // Acest cod va citi si apoi va afisa n numere
      cin >> x
      cout << x << " ";
    }
  }
  ```
### Citirea de variabile pana cand se intalneste o anumita valoare
In exemplu de mai jos se vor aduna numere pana se va introduce valoarea `-1`. Apoi se va afisa suma lor cu exceptia lui `-1`.
  ```cpp
  int main() {
    int s = 0, x;
    cin >> x;
    while(x != -1){
      s = s + x;
      cin >> x;
    }
    cout << s;
  }
  ```

  ## Greseli Frecvente
### 1. Citirea a n valori
În interiorul buclei `for`, se citește valoarea `n` din nou. Aceasta suprascrie valoarea inițială a variabilei `n`, care este folosită pentru a controla numărul de citiri. Aceasta poate duce la comportamente imprevizibile.

De exemplu, dacă valorile citite sunt:

5

5 1 3 4 5

Programul afișează pe ecran valorile `1 2` în loc de `1 2 3 4 5`.

```cpp
int main() {
    int n;
    cin >> n; 
    for(int i = 1; i <= n ; i ++){
        cin >> n;// Greșeala se află aici
        cout << i << " ";
    }
}
```