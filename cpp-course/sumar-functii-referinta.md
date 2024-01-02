<h1 align="center">Sumar Capitol 3<br>Funcții si variabile de referință</h1>

## Funcții în C++
- Sunt folosite pentru a scrie cod refolosibil si pentru a face codul mai citibil.
- forma generala : 
    ```cpp
    //forma generala a unei functii
    tip nume_funcție(tip1 var1, tip2 var2, ..., tipn varn) {
        // corpul funcției
    }
    ```
    - tip: Este tipul de date pe care funcția îl va returna.
    - nume_funcție: Este numele funcției, folosit pentru a o apela.
    - tip1 var1, tip2 var2, ..., tipn varn: Aceștia sunt parametrii funcției, variabilele pe care le primește funcția.



### Exemplu 1 : cresterea unei variabile

```cpp
// functia primeste 2 numere intregi a si b si ne returneaza suma lor sub forma unui intreg
int increase(int a) {
    a = a + 1;
    return a;
}
int main(){
    int x = 10, y;
    y = increase(x);
    //x ramane 10
    cout << x << " "<< y;//afiseaza 10 11
}
```

### Exemplu 2 : Calcularea Inversului unui Număr
```cpp
int invers(int x) {
    int invers = 0;
    // Execută bucla atât timp cât mai există cifre în număr
    while (x != 0) {
        // Adaugă ultima cifră a lui x la invers
        invers = invers * 10 + x % 10; 
        x /= 10; // Elimină ultima cifră din x
    }
    //La aceasta linie variabila x din functie are valoarea 0
    return invers; // Returnează numărul inversat
}
int main(){
    //Observa cum variabila x din main nu isi modifica valoarea
    int x = 123, invers;
    invers = invers(x);;
    cout << "Inversul lui "<< x << " este " << invers <<'\n'>>;
    cout <<x << " = "<< invers(invers(x));
}
```

### Exemplu 3 : Verificare dacă un număr este prim
```cpp
bool isPrim(int x) {
    // Verifică dacă numărul este mai mic decât 2, caz în care nu este prim
    if (x < 2) 
        return false;

    // Iterează prin numerele de la 2 până la radicalul lui x
    for (int i = 2; i * i <= x; i++) {
        // Dacă x este divizibil cu i, atunci x nu este prim
        if (x % i == 0) 
            return false;
    }

    // Dacă nu a fost găsit niciun divizor, x este un număr prim
    return true;
}
```
## Variabile de Referință

Variabilele de referință tin minte unde in memorie se afla alte variabile si sunt utile pentru a modifica variabile transmise ca parametru in functii.
### Exemplu 1
  ```cpp
    int val = 5;
    int &referintaVal = val;// referinta catre variabila val
    referintaVal = 6;Wx``
    cout << val; // afiseaza 6
  ```
### Exemplu 2 : interschimbarea a doua variabile
```cpp
void change(int &a, int &b){
    //a si b vor modifica orice variabile primesc
    int copy = a;
    a = b;
    b = copy;
}
int main(){
  int x = 3, y = 4;
  change(x, y);
  cout << x << " " <<y;// afiseaza 4 3
}
```
### Exemplu 3 : Ridicare la putere
```cpp
void power(int &x, int exp){
    //variabila x primeste ca referinta variabila a din main
    for(int i = 1; i <= exp; i++){
        x = x * x;
    }
}
int main(){
  int a = 2;
  power(a, 2);
  cout << a; // afiseaza 16
}
  ```