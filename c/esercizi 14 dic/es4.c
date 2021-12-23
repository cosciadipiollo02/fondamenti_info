#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
    int info;
    struct nodo *next;
} elemento;

typedef elemento *Lista;

Lista riuovi(Lista lista, int soglia){

    elemento *corrente = lista;
    elemento *PuntPrec = NULL;

    while(corrente->next != NULL){
        int count = conta(lista, corrente->info);
        if(count >= soglia){
            lista = cancella(lista, corrente->info);
        
            if(PuntPrec != NULL){
                corrente = PuntPrec->next;
            }
            else corrente = lista;
        }
        else{
            PuntPrec = corrente;
            corrente = corrente->next;
        }
    }
    return lista;
}

int conta(Lista lista, int el){
    elemento *corr = lista;
    int count = 0;
    while(corr != NULL){
        if(corr->info == el){
            count++;
        }
        corr = corr->next;
    }
    return count;
}

Lista cancella(Lista lista, int el){
    elemento *corrente = lista;
    elemento *puntprec = NULL;
    while(corrente != NULL){
        if(corrente->info = el){
            if(puntprec != NULL){
                puntprec->next = corrente->next;
                free(corrente);
                corrente = puntprec->next;
            }
            else{
                lista = corrente->next;
                free(corrente);
                corrente = lista;
            }
        }
        else{
            puntprec = corrente;
            corrente = corrente->next;
        }
    }
    return lista;
}