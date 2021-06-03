#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100

typedef struct ItemL ItemL; 
typedef struct Lista Lista; 

struct ItemL{
    
    int chave;

};

struct Lista{
    ItemL item[MAX_SIZE];
    int tam; 
};
void intercala(Lista *l, Lista *l2, Lista *l3)
{
     int i = 0, j = 0, k = 0, iAux;
     while (i < l->tam && j < l2->tam)
    {
        if (l->item[i].chave <= l2->item[j].chave)
        {
            l3->item[k].chave = l->item[i].chave;
            i = i + 1;
        }
         else
        {
            l3->item[k].chave =  l2->item[j].chave;
             j = j + 1;
        }
         k = k + 1;
    }
    for (iAux = i; iAux < l->tam; iAux = iAux + 1)
    {
        l3->item[k].chave = l->item[iAux].chave;
        k = k + 1;
    }
    for (iAux = j; iAux < l2->tam; iAux = iAux + 1)
    {
        l3->item[k].chave =  l2->item[iAux].chave;
        k = k + 1;
    }
    l3->tam =l->tam+l2->tam;
    imprimir(l3);
}
void imprimir (Lista *l)
{
    int j;
    for (j= 0; j <l->tam; j++)
    {
        printf("%d ", l->item[j].chave);
    }
    printf("\n");
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

    Lista *l;
    l = (Lista*) malloc(sizeof(Lista));
    Lista *l2;
    l2 = (Lista*) malloc(sizeof(Lista));

    int i=-1;

    do
    {
        i++;
        scanf("%d", &l->item[i].chave);
        
    }while(l->item[i].chave != (-1));
    l->tam = i;
    i=-1;

    do
    {
        i++;
        scanf("%d", &l2->item[i].chave);
        
    }while(l2->item[i].chave != (-1));
    l2->tam = i;



    Lista *l3;
    l3 = (Lista*) malloc(sizeof(Lista));

    intercala(l, l2, l3);
    liberar_lista(l);
    liberar_lista(l2);
    liberar_lista(l3);


   


}