#include <bits/stdc++.h>

using namespace std;

void cautaLitra(){
    char s[] = "sana ara amerga";
    char c ='a';
    for(char *p = strchr(s,c); p!=NULL; p = strchr(p + 1,c)){
        cout << p <<endl;
    }
}
void cautaString(){
    char s[] = "sana ara anerga";
    char c[] ="an";
    for(char *p = strstr(s,c); p!=NULL; p = strstr(p + 1,c)){
        cout << p <<endl;
    }
}
void strcatVsstrcpy(){
    // WRONG!!!!, s va avea doar 3 elemente
    // char s[] = "Ana";
    // strcat(s," are mere la piata se sdf sdfsd sdf sdf fdf sf sdf sfdsfd sd");
    // cout << s;

    char s[100] = "Ana";
    strcpy(s,"Maria");
    strcat(s," merge la piata");
    strncat(s," cu Andrei si Alex",10);
    cout << s;
}

void gasesteSiMutaCuvintele(){
    //Muta toate cuvintele cu numar par de litere dintr-un string in altul
    char s[] = "Ana merge   la piata cu Andrei si Alex";
    char f[100] = "";
    char *p1 = s;
    while(p1!= NULL){
        char *p2 = strchr(p1 + 1, ' ');
        int length;
        if(p2 != NULL)
            length = p2 - p1;
        else
            length = strlen(p1);
        if(length != 0 && length % 2 == 0){
            strncat(f,p1,length);
            strcat(f," ");
        }
        cout << p1<<endl;
        cout << length << endl;
        p1 = strchr(p1 + 1,' ');
        if(p1 != NULL)
            p1 = p1 + 1;
    }
    cout << f;
}


int main(){
    /*
        -strlen - cate elemente are un sir
        -strchr
        -strstr
        -strcat
        -strncat
        -strcpy
        -strncpy - nu il folosi
        -strcmp
    */
   gasesteSiMutaCuvintele();
}