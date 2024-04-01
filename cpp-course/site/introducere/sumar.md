<h1 align="center">Sumar Capitol 1<br> Introducere în Programare</h1>

## Variabile si Operatii
### Tipuri de Variabile  
- Variabile Întregi (fără virgulă)
  - `int`: folosit pentru întregi standard (-2,147,483,648 la 2,147,483,647).
  Orice numar de 9 cifre.
  - `long long`: folosit pentru întregi mari (-9,223,372,036,854,775,808 la 9,223,372,036,854,775,807). Orice numar de 18 cifre.

- Variabile Reale (cu virgulă)
  - `float`: Precizie simplă (~7 cifre zecimale).
  - `double`: Precizie dublă (~15-16 cifre zecimale).

- Variabile Boolean
  - `bool`: Reprezintă valori de adevăr (`true` sau `false` echivalente cu `0` și `1`).

### Citire si afisare
- Foloseste biblioteca `<iostream>`
  ```cpp
  int main() {
    int x, y;
    float z;
    // citeste 2 numere intregi de la tastatura si un numar real
    cin >> x >> y >> z;
    //Le afiseaza intr-o alta ordine
    cout << y << z << x;
  }
  ```

### Operatori în C++
- Operatori Aritmetici
  - Adunare: `+`, Scădere: `-`, Înmulțire: `*`, Împărțire: `/`, Atribuire `=`
  - Modul: `%` (calculează restul împărțirii *doar pentru întregi*)
  - Incrementare: `++` (`++x` și `x++` lucrează diferit)
  - Decrementare: `--` (`--x` și `x--` lucrează diferit)

- Operatori de Comparare și Logici
  - Egalitate: `==` (ex: `3 == 3`)
  - Inegalitate: `!=` (ex: `3 != 5`)
  - Mai mic: `<`, Mai mic sau egal: `<=` (ex: `3 < 4`)
  - Mai mare: `>`, Mai mare sau egal: `>=` (ex: `3 >= 3`)
  - Negare: `!` (ex: `!(3 < 4)` este echivalent cu `3 >= 4`)

- Altele:
  - `abs(x)`: Calculează modulul unui număr *intreg*. Nu necesită biblioteci.
  - `fabs(x)`: Calculează modulul unui număr *real*. Necesită `<cmath>`.
  - `sqrt(x)`: Calculează radicalul unui număr. Necesită `<cmath>`.
  - `pow(x, exp)`: Calculează `x` la puterea `exp`. Necesită `<cmath>`.

## Structura de Decizie
- `if (condiție) { cod1 } else { cod2 }`
  - Execută `cod1` dacă `condiție` este `true`, altfel execută `cod2`.
  - `else { cod2 }` este opțional.
- Exemplu:
  ```cpp
   int main() {
    if (x == 3) {
      cout << "x este egal cu 3";
    } else if (x > 0) {
      cout << "x este pozitiv dar diferit de 3";
    } else {
      cout << "x este mai mic sau egal cu 0";
    }
  }
  ```


## Note Importante
- Utilizarea operatorilor `%` și `/` pentru împărțirea la zero poate cauza terminarea programului. De exemplu, `y = 0; x = x / y;` va duce la închiderea programului.
- Operatorul `%` este valid doar pentru numere întregi. Dă eroare de compilare pentru numere reale.
- Variabilele reale pot conduce la rezultate aproximative și ușor inexacte din cauza naturii lor de aproximare a numerelor.
- Nu folosi operatorul `==` pentru a compara 2 *numere reale* `x` și `y`. Folosește în schimb `fabs(x - y) <= 0.00001` sau un alt număr foarte mic pentru comparație.
- În structurile de control if, while, do while și for, condiția este adevărată pentru orice valoare numerică diferită de 0. `while(x)` este echivalent cu `while(x != 0)`


<!-- ## Greseli Frecvente -->


