#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
        char *nome;
        int costo;
        int quantita;
        struct nodo *next;
    } nodo;

void stampalista(nodo *lista);
void inserisci_elemento(nodo *lista, char *nome, int quantita, int costo);
int lunghezzalista(nodo *lista);

int main(){
    printf("ciao");
    nodo *lista = (nodo *) malloc(sizeof(nodo));
    nodo *nodo1 = (nodo *) malloc(sizeof(nodo));
    strcpy(lista->nome, "cipolla");
    lista->costo = 30;
    lista->quantita = 4;
    lista->next = nodo1;
    strcpy(nodo1->nome, "patate");
    nodo1->costo =  60;
    nodo1->quantita = 4;
    printf("ciao %d %s", lista->quantita , lista->nome);
    stampalista(lista);
}

int lunghezzalista(nodo *lista){
    nodo *temp = lista;
    int contatore = 0;
    while(temp != NULL){
        temp = temp->next;
        contatore++;

    }
    return contatore;
}

void stampalista(nodo *lista){

    nodo *temp = lista;
    while(temp != NULL){
        printf("prodott %s costo %d quantita %d \n",temp->nome, temp->costo, temp->quantita);
        temp = temp->next;
    }
}



void inserisci_elemento(nodo *lista, char *nome, int quantita, int costo){
    nodo *temp;
    temp = lista;
    int flag = 1;
    while(temp != NULL && flag){
        if(temp->nome == nome){
            temp ->quantita += quantita;
            flag = 0;
        }
        temp = temp->next;
    }
//mi riporto sull ultimo elemento della lista 
    temp = lista;
    while(temp->next != NULL){
        temp = temp->next;
    }

    if (flag){
        nodo *elemento = (nodo *)malloc(sizeof(nodo));
        temp->next = elemento;
        elemento->costo = costo;
        elemento->nome = nome;
        elemento->quantita = quantita;
    }



}


    


