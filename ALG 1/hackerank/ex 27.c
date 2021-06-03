
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct ItemL{
    int chave;
}ItemL;


typedef struct Lista{
    ItemL item[MAX_SIZE];
    int tam; 
}Lista;


Lista* criar(){
    Lista *l = (Lista*) malloc(sizeof(Lista));


    l->tam = 0;

    return l;
}


int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}


int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}


int busca_interpolacao(Lista *l, int x)
{
     int i=0;
     int aux;
     if(l->item[i].chave==x)
     {
         return 0;
     }
     for (i = 1; i < l->tam; i++) 
     {
         if (l->item[i].chave == x) 
         {
            aux = l->item[i].chave;
            l->item[i].chave = l->item[i-1].chave;
            l->item[i-1].chave = aux;
         }
     }

    return -1;
}


int inserir(Lista *l, int chave){
    ItemL item;

    if (!lista_cheia(l)){
        
        item.chave = chave;

        
        l->item[l->tam] = item;

       
        l->tam++; 

        return 1;
    }

    
    return 0;
}

void imprimir_lista(Lista *l){
    int i=0;

    if (!lista_vazia(l)){
        
        for (i = 0; i < l->tam; i++)
        {
              printf("%d ", l->item[i].chave);
        }
          
    }
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}

int main ()
{
    
    int n, chave, i, tam1;
    Lista *l;

    l = criar();

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &chave);
        inserir(l, chave);

    }
    scanf("%d", &tam1);
    for(i=0;i<tam1;i++)
    {
        scanf("%d", &chave);
        busca_interpolacao(l, chave);
        
    }
    imprimir_lista(l);

}
       
