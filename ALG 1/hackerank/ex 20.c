#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100


typedef struct ItemL{
    
    int chave;

}ItemL;

typedef struct Lista{
    ItemL item[MAX_SIZE];
    int tam; 
}Lista;


int main ()
{
    Lista *l;
    l = (Lista*) malloc(sizeof(Lista));
    Lista *l2;
    l2 = (Lista*) malloc(sizeof(Lista));
    int i=-1;
    int cont =0;

    do
    {
        i++;
        scanf("%d", &l->item[i].chave);
        
    }while(l->item[i].chave != (-1));
    cont = i;
   
    Lista *l3;
    l3 = (Lista*) malloc(sizeof(Lista));
    l3->tam = cont;
   
    
    for(i=0;i<cont;i++)
    {
       l3->item[i].chave = l->item[i].chave;
    }
    int j;
    int n=0;
    
    free(l);
    l = (Lista*) malloc(sizeof(Lista));
    for(i=0;i<cont/2;i++)
    {
        l->item[n].chave = l3->item[i].chave;
        n++;
    }
    l->tam = n;
    for(j=0;j<l->tam;j++)
    {
        printf("%d ", l->item[j].chave);
    }
    printf("\n");
    
    int k=0;
    for(i=cont/2;i<cont;i++)
    {
        l2->item[k].chave = l3->item[i].chave;
        k++;
    }
    l2->tam = k;

    for(j=0;j<l2->tam;j++)
    {
        printf("%d ", l2->item[j].chave);
    }
    printf("\n");
     



    


}