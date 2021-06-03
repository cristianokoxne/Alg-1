#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

// Estrutura para uma unidade da lista estática
typedef struct ItemL{
    int chave;
}ItemL;


typedef struct Lista{
    ItemL item[MAX_SIZE];
    int tam; 
}Lista;


void imprimir_lista(Lista *l){
    int i=0;

    for (i = 0; i < l->tam; i++)
    {
            printf("%d\n", l->item[i].chave);
    }
          

}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}
void ordena (Lista*l)
{
    Lista *P;
    Lista *I;
    int i, j=0, k=0;

    P = (Lista*) malloc(sizeof(Lista));
    I = (Lista*) malloc(sizeof(Lista));

    for(i=0;i<l->tam;i++)
    {
        if(l->item[i].chave%2==0)
        {
            P->item[j].chave = l->item[i].chave;
            j++;
        }
        else
        {
            I->item[k].chave = l->item[i].chave;
            k++;
        }
        
    }
    P->tam = j;
    I->tam = k;
    
    Bolha(P);
    Bolha(I);


    j=P->tam;
    k=0;
    
    for(i=-1;i<=P->tam;i++)
    {
        l->item[i].chave =  P->item[j].chave;
        j--;
    }
    
    k=0;
    for(i=P->tam;i<=l->tam+1;i++)
    {
        l->item[i].chave =  I->item[k].chave;
        k++;
    }
    imprimir_lista(l);

    

}
 void  Bolha (Lista *l)
{    
    int i, j; 
    int item; 
    for  (i=l->tam; i >= 1; i--)  
    {  for (j= 0; j < i ;j++) 
        { 
            if  (l->item[j].chave < l->item[j+1].chave)
            {                     
                item = l->item[j].chave;    
                l->item[j].chave = l->item[j+1].chave;     
                l->item[j+1].chave =  item; 
            }
        }
    }
}

int main ()
{
    
    int i, tam;
    Lista *l;
    
    l = (Lista*) malloc(sizeof(Lista));

    scanf("%d", &tam);
    for(i=0;i<tam;i++)
    {
       scanf("%d", &l->item[i].chave);

    }
    l->tam = tam;
    ordena (l);

    
}
