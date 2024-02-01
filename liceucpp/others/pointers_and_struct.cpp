#include <bits/stdc++.h>
using namespace std;

struct Ham{
    int mere;
    char parola1[50];
    char parola2[50];
};
//incorect
void generare(Ham x){
    strcpy(x.parola1,"Ana merge la piata");
}
//recomandat
void generare(Ham *x){
    strcpy(x->parola1,"parola 1");
}
//merge
void generare(char *s1, char *s2){
    strcpy(s1,"parola 2");
}

int main() {
    // Ham *h = (Ham *) malloc(100 * sizeof(Ham));
    // generare(h + 1);//echivalent cu &h[1]
    // generare(h[2].parola1,h[2].parola2);
    // printf("%s\n%s",h[1].parola1, h[2].parola1);
    // free(h);
    char s[] = "12 - 23";
    int a =0,b =0;
    sscanf(s,"%d - %d", &a, &b);
    printf("%d %d",a,b);
    return 0;
}
