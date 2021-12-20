#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100


typedef struct nodo{
    char carattere;
    int contatore;
    struct nodo *next;
} nodo;

nodo crealista(char *str);
char *riordinastringa(char s[]);

int main(){
    char a[10] = "tyhmpclhib";
    crealista(a);
    
    
}

char *riordinastringa(char s[]){
    char alfabeto[] = "abcdefghijklmnopqrstuvxyz";
    int lunghezza = strlen(s);
    int l = 0;

    char *risultato = malloc(sizeof(char)*lunghezza);

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < lunghezza; j++){
            if(s[j] == alfabeto[i]){
                risultato[l] = s[j];
                l++;
            }
        }
    }
    return risultato;
}

nodo crealista(char *str){
    char striordinata[M];
    int lunghezza = strlen(str);

    strcpy(striordinata, riordinastringa(str));
    printf("%s",striordinata);

    nodo *lista = (nodo *)malloc(sizeof(nodo));
    lista->carattere = striordinata[1];
    lista->next = NULL; 


    for(int i = 0; i < lunghezza; i++){
        nodo *nodocorr = (nodo *)malloc(sizeof(nodo));
        nodo *nodosucc = (nodo *)malloc(sizeof(nodo));

        nodocorr->carattere = striordinata[i];

        nodocorr->next = nodosucc;
        nodocorr = nodosucc;

    }

}
