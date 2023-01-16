#include <stddef.h>
#include <stdio.h>
#include <string.h>
int contacaratteri(char *stringa, char carattere);

int main(){
    char stringa[30];
    int contatore;
    char carattere;
    printf("immettere stringa\n");
    scanf("%s", stringa);
    printf("inserire carattere \n");
    scanf(" \n %c", &carattere);
    contatore = contacaratteri(stringa, carattere);
    printf("il carattere compare %d volte", contatore);
    
}

int contacaratteri(char *stringa, char carattere){
    int contatore = 0;
    for (int i = 0 ; i < 30; i++) {
        if (stringa[i] == carattere){
            contatore++;
        }
    }
    return contatore;
    }


