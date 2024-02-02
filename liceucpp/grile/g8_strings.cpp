#include <iostream>
#include <limits>
#include <cstdlib>
#include <string.h>
using namespace std;

void function0() {
    char str[] = "123456789";
    cout << strlen(str + 4) << endl;
}

void function1() {
    char source[] = "abcdefg";
    char destination[50] = "123456789";
    strcpy(destination + 3, source + 2);
    cout <<destination << endl;
}


void function2() {
    char source[] = "abcdefghij";
    char destination[50] = "123456789";
    strncpy(destination + 1, source + 2, 5);
    destination[8] = '\0';
    cout << destination << endl;
}

void function3() {
    cout << strcmp("ab","ab")<<endl;
    cout << strcmp("ab","a")<<endl;
    cout << strcmp("a","ab")<<endl;
    cout << strcmp("ab","aa")<<endl;
    cout << strcmp("aa","ab")<<endl;
}

void function4() {
    char str[] = "1a2a3a";
    char ch = 'a';
    char *result = strchr(str + 2, ch);
    cout << result << "\n"<<result - str;
}

//remake
void function5() {
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
        cout << "Character not found." << endl;
    }
}

void function6() {
    char haystack[] = "This is smple, simple string";
    char needle[] = "simple";
    char *result = strstr(haystack, needle + 2);
    if (result) {
        cout << "Substring found: " << result << endl;
    } else {
        cout << "Substring not found." << endl;
    }
}

void function7() {
    char str[] = "A simple, test, string";
    const char delimiters[] = ", ";
    char *token = strtok(str, delimiters);
    while (token != NULL) {
        cout << "Token: " << token << endl;
        token = strtok(NULL, delimiters);
    }
}



void function8() {
    char s[] = "Ana are mere";
    strcpy(s + 1, s + 2);
    cout << s;
    //! Urmatorul program crapa. De ce ?
    /*
    strcpy(s + 3, s + 1);
    Daca folosesti strcpy pe acelasi string primul pointer trebuie sa fie mai mic ca al doilea
    */
}

void function9(){
   char s[100] = "ana are mere";
   for(int i = strlen(s) - 1; i >= 0; i --){
        if(s[i] == 'a' || s[i] == 'e'){
            strcpy(s + i, s + i + 1);
        }
   }
   cout << s;
}
void function10() {
    char str[] = "A simple, test, string";
    const char delimiters[] = ", ";
    char newStr[100] = "Tokens: ";

    char *token = strtok(str, delimiters);
    while (token != NULL) {
        strcat(newStr, token);
        strcat(newStr, " "); // Adding a space between tokens
        token = strtok(NULL, delimiters);
    }

    cout << newStr << endl;
}

void function11() {
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
    cout << resultStr << endl;
}

void function12() {
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

    cout << destination << endl;
}

int main(){
    using Function = void (*)();
    const int NR_FUNCTIONS = 13;
    Function functions[NR_FUNCTIONS] = {
        function0,
        function1,
        function2,
        function3,
        function4,
        function5,
        function6,
        function7,
        function8,
        function9,
        function10,
        function11,
        function12
    };
    for(int i = 0; i < NR_FUNCTIONS; i ++){
        system("cls");
        Function func = functions[i];
        cout << "Function " << i  << " output is";
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        func();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}