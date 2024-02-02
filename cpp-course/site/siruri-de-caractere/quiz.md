<h1 align="center">Quiz Capitol 7<br> Siruri de caractere</h1>

### 1.
```cpp
int main(){
    char str[] = "123456789";
    cout << strlen(str + 4);
    return 0;
}
```
<button onclick="toggleAnswer('answer1')" class="show-answer">Show Answer</button>
<div id="answer1" class="answer" style="display:none">
    5
</div>

### 2.
```cpp
    int main(){
        char source[] = "abcdefg";
        char destination[50] = "123456789";
        strcpy(destination + 3, source + 2);
        cout <<destination;
        return 0;
    }
```
<button onclick="toggleAnswer('answer2')" class="show-answer">Show Answer</button>
<div id="answer2" class="answer" style="display:none">
    123cdefg
</div>

### 3.
```cpp
int main(){
    char source[] = "abcdefghij";
    char destination[50] = "123456789";
    strncpy(destination + 1, source + 2, 5);
    destination[8] = '\0';
    cout << destination;
    return 0;
}
```
<button onclick="toggleAnswer('answer3')" class="show-answer">Show Answer</button>
<div id="answer3" class="answer" style="display:none">
    1cdefg78
</div>

### 4.
```cpp
int main(){
    cout << strcmp("ab","ab")<<' ';
    cout << strcmp("ab","a")<<' ';
    cout << strcmp("a","ab")<<' ';
    cout << strcmp("ab","aa")<<' ';
    cout << strcmp("aa","ab")<<' ';
    return 0;
}
```
<button onclick="toggleAnswer('answer4')" class="show-answer">Show Answer</button>
<div id="answer4" class="answer" style="display:none">
    0 1 -1 1 -1
</div>


### 5.
```cpp
int main(){
    char str[] = "1a2a3a";
    char ch = 'a';
    char *result = strchr(str + 2, ch);
    cout << result << '\n';
    cout << result - str;
    return 0;
}
```
<button onclick="toggleAnswer('answer5')" class="show-answer">Show Answer</button>
<div id="answer5" class="answer" style="display:none">
a3a

3
</div>


### 6.
```cpp
int main(){
    char str[] = "Find a character";
    char ch = 'a';
    char *result = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            result = str + i;
            break;
        }
    }
    if (result) {
        cout << result;
    } else {
        cout << "Character not found.";
    }
    return 0;
}
```
<button onclick="toggleAnswer('answer6')" class="show-answer">Show Answer</button>
<div id="answer6" class="answer" style="display:none">
    a character
</div>


### 7.
```cpp
int main(){
    char haystack[] = "This is smple, simple string";
    char needle[] = "simple";
    char *result = strstr(haystack, needle + 2);
    if (result) {
        cout << "Substring found: " << result;
    } else {
        cout << "Substring not found.";
    }
    return 0;
}
```
<button onclick="toggleAnswer('answer7')" class="show-answer">Show Answer</button>
<div id="answer7" class="answer" style="display:none">
Substring found: mple, simple string
</div>


### 8.
```cpp
int main(){
    char s[] = "Ana are mere";
    strcpy(s + 1, s + 2);
    cout << s;
    //! Urmatoarea linie crapa. De ce ?
    // strcpy(s + 3, s + 1);
    return 0;
}
```
<button onclick="toggleAnswer('answer8')" class="show-answer">Show Answer</button>
<div id="answer8" class="answer" style="display:none">
Aa are mere

---
Linia strcpy(s + 3, s + 1); provoacă erori pentru că mută date dintr-o zonă a șirului s într-o altă zonă care se suprapune peste prima. Daca folosesti strcpy pe acelasi string primul pointer trebuie sa fie mai mic ca al doilea
</div>

### 9.
```cpp
int main(){
   char s[100] = "ana are mere";
   for(int i = strlen(s) - 1; i >= 0; i --){
        if(s[i] == 'a' || s[i] == 'e'){
            strcpy(s + i, s + i + 1);
        }
   }
   cout << s;
    return 0;
}
```
<button onclick="toggleAnswer('answer9')" class="show-answer">Show Answer</button>
<div id="answer9" class="answer" style="display:none">
    n r mr
</div>

### 10.
```cpp
int main(){
    char str[] = "A simple, test, string";
    const char delimiters[] = ", ";
    char newStr[100] = "Tokens: ";

    char *token = strtok(str, delimiters);
    while (token != NULL) {
        strcat(newStr, token);
        strcat(newStr, " "); // Adding a space between tokens
        token = strtok(NULL, delimiters);
    }

    cout << newStr;
    return 0;
}
```
<button onclick="toggleAnswer('answer10')" class="show-answer">Show Answer</button>
<div id="answer10" class="answer" style="display:none">
Tokens: A simple test string
</div>

### 11.
```cpp
int main(){
    char str1[] = "apple, orange, banana";
    char str2[] = "red, green, yellow";

    char *p = strtok(str1, " ,");
    cout << p << " ";
    p = strtok(NULL, " ,");
    cout << p << " ";
    p = strtok(str2, " ,");
    cout << p << " ";
    p = strtok(NULL, " ,");
    cout << p << " ";
    return 0;
}
```
<button onclick="toggleAnswer('answer11')" class="show-answer">Show Answer</button>
<div id="answer11" class="answer" style="display:none">
apple
orange
red
green
</div>

### 12.
```cpp
int main(){
    char str1[] = "apple, orange, banana";
    char str2[] = "red, green, yellow";
    const char delimiters[] = ", ";
    char resultStr[200] = "";

    char *token1 = strtok(str1, delimiters);
    char *token2 = strtok(str2, delimiters);

    while (token1 != NULL || token2 != NULL) {
        if (token1 != NULL) {
            strcat(resultStr, token1);
            strcat(resultStr, " ");
            token1 = strtok(NULL, delimiters);
        }
        if (token2 != NULL) {
            strcat(resultStr, token2);
            strcat(resultStr, " ");
            token2 = strtok(NULL, delimiters);
        }
    }
    cout << resultStr;
    return 0;
}
```
<button onclick="toggleAnswer('answer12')" class="show-answer">Show Answer</button>
<div id="answer12" class="answer" style="display:none">
apple red green yellow
</div>


### 13.
```cpp
int main(){
    char str[] = "apple-banana-grape-orange";
    char destination[100] = "Fruits: ";
    char delimiters[] = "-"; // Token delimiter
    char target = 'a'; // Character to search in each token

    char *token = strtok(str, delimiters);

    while (token != NULL) {
        char *found = strchr(token, target); // Find 'target' in the token
        if (found != NULL) {
            int length = found - token; // Calculate length up to the found character
            strncat(destination, token, length); // Concatenate up to the found character
            strcat(destination, " "); // Add a space for readability
        }
        token = strtok(NULL, delimiters); // Move to the next token
    }
    cout << destination;
    return 0;
}
```
<button onclick="toggleAnswer('answer13')" class="show-answer">Show Answer</button>
<div id="answer13" class="answer" style="display:none">
Fruits:  b gr or
</div>


