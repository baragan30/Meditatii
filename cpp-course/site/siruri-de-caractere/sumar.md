<h1 align="center">Sumar Capitol 7<br> Siruri de caractere</h1>

## Tipul `char` și Vectori si Pointeri
- **Char**: O variabila de tipul `char` reprezinta un caracter. reprezintă un singur caracter. Un char poate avea valori cuprinse intre `0 si 255` Exemplu :
  ```cpp
  int main(){
    char x1 = 'a' ;//caracterul 'a' are valoarea 97
    char x2 = ' ';//caracterul spatiu are valoarea 32
    char x3 = x1 - 32;// caracterul 'A' are valoarea 65
    cout << x1 << x2 << x3;// Afiseaza "a A"
  }
  ```

- **Vectori**: Pentru a retine un text (un șir de caractere) este folosit un vector de tip `char` terminat obligatoriu cu caracterul null `'\0'`. Exemplu : 
  ```cpp
  char sir[] = "123";//sir contine 4 caractere('1','2','3','\0')
  ```

- **Pointeri** Un pointer către char poate fi folosit pentru a referi sau a manipula șiruri de caractere stocate în alte locații de memorie. Un pointer nu poate stoca siruri de caractere.Exemplu:
  ```cpp
  int main(){
    char sir[] = "Ana are mere";
    char *p = sir + 4;
    cout << p <<endl;//Afiseaza "are mere"
    p[0] = 'x';
    p[2] = 'y';
    cout << sir;//Afiseaza "Ana xry mere
    return 0;
  }
  ```

## Functii pe siruri
- `int strlen(char * sir)`: Returnează lungimea unui șir de caractere, excluzând terminatorul null.
  ```cpp
  int main(){
    //Aflarea lungimii unui sir
    char sir[] = "Am marime";
    cout  << strlen(sir)<<'\n';//Afiseaza 9
    char *p = sir + 3;
    cout  << strlen(p)<<'\n';//Afiseaza 6
    return 0;
  }
  ```
- `char *strchr(char *sir, char c)` Caută prima apariție a caracterului `c` în șir `sir` și returnează un pointer către locația acestuia sau NULL daca nu il gaseste.
  ```cpp
  int main(){
    //Aflarea lungimii unui sir
    char sir[] = "1023 045";
    int c = '0';
    char *p = strchr(sir,c);
    cout << p <<'\n';//Afiseaza "023 045"

    //Acum vom cauta de la pozitia lui '2' adica p + 1
    p = strchr(p+1,c);
    cout << p <<'\n';//Afiseaza "045"

    //Cautam de la 4 si nu gasim nimic
    p = strchr(p+1,c);
    if(p == NULL)
        cout << "p este null";//Afiseaza "p este null"
    else 
      cout << "p nu este null";
    return 0;
  }
  ```
- `char *strstr(char *sir1, char* sir2)` Caută prima apariție a sirului `sir2` în șir `sir1` și returnează un pointer către locația acestuia sau NULL daca nu il gaseste.
  ```cpp
  int main(){
    //Aflarea lungimii unui sir
    char sir1[] = "01012 103 1014";
    char sir2[] = "101";
    char *p = strstr(sir1,sir2);
    cout << p <<'\n';//Afiseaza "1012 103 1014"

    //Acum vom cauta de la pozitia lui '0' adica p + 1
    p = strstr(p + 1,sir2);
    cout << p <<'\n';//Afiseaza "1014"

    //Cautam de la "014" si nu gasim nimic
    p = strstr(p + 1,sir2);
    if(p == NULL)
        cout << "p este null";//Afiseaza "p este null"
    else 
        cout << "p nu este null";
    return 0;
  }
  ```
- `char *strcpy(char *destinatie,char* sursa)` Suprascrie ce se afla in `sursa` in `destinatie` inclusiv `\0`. Returneaza un pointer catre  `destinatie`.
  ```cpp
  int main(){
    //sir1 poate stoca pana la 200 de caractere
    char sir1[200] = "Am marime";
    char sir2[] = "abc";

    //copiem sir2 in sir1. s va pointa catre sir1
    char *s = strcpy(sir1,sir2);
    cout << sir1<<'\n';//afiseaza "abc"
    cout << sir2<<'\n';//afiseaza "abc"
    cout << s << '\n'; // afiseaza "abc"

    //copiem sir2 in sir1 de la pozitia s + 2
    strcpy(s + 2,sir2);
    cout << sir1<<'\n';//afiseaza "ababc"
    return 0;
  }
  ```
- `char *strcat(char *destinatie,char* sursa)` Adauga la textul din `destinatie`  textul din `sursa`. Muta caracterul de `\0`. Returneaza un pointer catre  `destinatie`.
  ```cpp
  int main() {
    // sir1 poate stoca până la 200 de caractere, asigurându-ne că avem spațiu suficient
    char sir1[200] = "Hello, ";
    char sir2[] = "World!";

    // Adaugam sir2 la sfârșitul lui sir1
    strcat(sir1, sir2);

    // Afișăm rezultatul
    cout << sir1 << '\n'; // Afișează "Hello, World!"

    // Demonstrăm utilizarea strcat pentru a adăuga mai mult text
    char sir3[] = " Bine ai venit.";
    char *p = strcat(sir1, sir3);

    // Afișăm șirul final
    cout << p << '\n'; // Afișează "Hello, World! Bine ai venit."
    cout << sir1 << '\n'; // Afișează "Hello, World! Bine ai venit."
    return 0;
  }
  ```
- `char *strncat(char *destinatie,char* sursa, int nr)` Adauga la textul din `destinatie`  textul din `sursa`. Muta caracterul de `\0`. Returneaza un pointer catre  `destinatie`.
  ```cpp
  int main() {
      // sir1 poate stoca până la 200 de caractere, asigurându-ne că avem spațiu suficient
      char sir1[200] = "Mesaj initial: ";
      char sir2[] = "Acesta este un text lung care va fi adaugat partial.";

      // Anexăm primele 10 caractere din sir2 la sfârșitul lui sir1
      strncat(sir1, sir2, 10);

      // Afișăm rezultatul
      cout << sir1 << '\n'; // Afișează "Mesaj initial: Acesta est"

      // Adaugam urmatoarele 9 caractere
      strncat(sir1, sir2+ 10, 9);

      // Afișăm șirul final
      cout<< sir1 << '\n'; // Afișează "Mesaj initial: Acesta estAcest"

      return 0;
  }
  ```

- `char *strtok(char *str, char *delim);` Este folosit pentru a desparti sirul `str` in mai multe siruri delimitate de caracterele aflate in `delim`. Modifica la fiecare apel sirul str inlocuind primul caracter din delim pe care il gaseste in str cu `\0`.
  ```cpp
  int main() {
    char str[] = " ,Acesta , .este,  un, exemplu.";
    char delim[] = ", ."; // Definește caracterele delimitatoare

    // Obținem primul sir ignorând spațiile și delimitatorii de la începutul șirului
    char *token = strtok(str, delim);

    // Continuăm să obținem următoarele tokenuri
    while (token != NULL) {
        cout << token << ' '; // Afișează tokenul curent
        // Apelează strtok cu NULL pentru a continua descompunerea aceluiași șir
        token = strtok(NULL, delim);
    }
    /* Output-ul va fi:
      Acesta este un exemplu
    */

    return 0;
  }
  ```

## ✨Hint-uri

### Litere mici, mari, vocale si consoane
  Problema : Se citeste o propozitie de maximum 100 de caractere de la tastatura. Sa se inlocuiasca toate vocalele din proprozitie cu `*`, toate consoanele mari cu consoane mici si toate consoanele mici cu consoane mari.
  ```cpp
#include <iostream>
#include <string.h>

using namespace std;

bool eLiteraMare(char c){
    //daca c se afla intre 'A' si 'Z' e litera eLiteraMare
    return c >= 'A' && c <= 'Z';
}
bool eLiteraMica(char c){
    //daca c se afla intre 'a' si 'z' e litera mica
    return c >= 'a' && c <= 'z';
}
bool eLitera(char c){
    //daca c este litera mica sau mare atunci e litera
    return eLiteraMica(c) || eLiteraMare(c);
}
bool eVocala(char c){
    //c este vocala daca  il putem gasi in sirul "aeiouAEIOU"
    return strchr("aeiouAEIOU",c) != NULL;
}
bool eConsoana(char c){
    //daca c e litera si nu e vocala atunci e consoana
    return eLitera(c) && !eVocala(c);
}

int main() {
    char str[101];
    cin.getline(str,101);
    for(int i = 0 ; i < strlen(str); i ++){
        if(eVocala(str[i])){
            str[i] = '*';
        }else if(eConsoana(str[i])){
            if(eLiteraMica(str[i])){
                //Transformam literele mici in litere mari
                str[i] = str[i] -32;
            }else{
                //Transformam literele mari in litere mici;
                str[i] = str[i] + 32;
            }
        }
    }
    cout << str;
    return 0;
  }
  ```

## ⚠️ Greseli Frecvente
