#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct nodo{
        char nome[N];
        int costo;
        int quantita;
        struct nodo *next;
    } nodo;

void inserisci_elemento(nodo *lista, char *nome, int quantita)

int main(){
    printf("ciao");
    nodo *lista = (nodo *) malloc(sizeof(nodo));
    strcpy(lista->nome, "cipolla");
    lista->costo = 30;
    lista->quantita = 4;
    printf("ciao %d %s", lista->quantita , lista->nome);
}


void inserisci_elemento(nodo *lista, char *nome, int quantita){
    nodo *temp;


