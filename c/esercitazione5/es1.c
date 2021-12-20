#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo *next; 
} nodo;


void stampalista(nodo *lista);
void lunghezzalista(nodo *lista);
void inseriscielemento(nodo *lista, int elemento, int posizione);


int main(){
    nodo *lista, *temp, *nodocorr;
    for(int i = 0; i < 4; i++){
        nodocorr = (nodo *)malloc(sizeof(nodo));
        
        nodocorr->dato = i;
        

        if (i == 0){
            lista = temp = nodocorr;
        }

        else{
            temp->next = nodocorr;
            temp = nodocorr;
        }
    }

    temp->next = NULL;

    stampalista(lista);
    lunghezzalista(lista);
    inseriscielemento(lista, 56,2);
    stampalista(lista);
}

void stampalista(nodo *lista){

    nodo *temp = lista;
    while(temp != NULL){
        printf("%d \n",temp->dato);
        temp = temp->next;
    }
}

void lunghezzalista(nodo *lista){
    nodo *temp = lista;
    int contatore = 0;
    while(temp != NULL){
        temp = temp->next;
        contatore++;

    }
    printf("la lista e lunga %d \n",contatore);
}

void inseriscielemento(nodo *lista, int elemento, int posizione){
    nodo *temp1, *temp2;
    temp1 = lista;
    for(int i = 0; i < posizione; i++){
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    nodo *nuovopunt = (nodo*) malloc(sizeof(nodo));
    nuovopunt->dato = elemento; 
    temp1->next = nuovopunt;
    nuovopunt->next = temp2;

}
