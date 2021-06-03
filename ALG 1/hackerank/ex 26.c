
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


int busca_binaria(Lista *l, int n){
    int ini = 0;
    int fim =l->tam;
    int meio;
    
    while (ini <= fim){
        meio = (ini + fim) / 2;
        if (n == l->item[meio].chave)
        {
             return meio;
        }
        else if (n < l->item[meio].chave)
        {
             fim = meio - 1;
        }
        else
        {
            ini = meio + 1;
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
        
        for (i = 0; i < l->tam-1; i++)
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
      

        printf("%d\n", busca_binaria(l, chave));
        
    }
}
       
