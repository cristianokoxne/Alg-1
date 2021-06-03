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

void imprimir (Lista *l)
{
    int j;
    for (j= l->tam-1; j >=0; j--)
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
   
    int i=-1;

    do
    {
        i++;
        scanf("%d", &l->item[i].chave);
        
    }while(l->item[i].chave != (-1));
    l->tam = i;
    i=-1;

     imprimir (l);
    liberar_lista(l); 
   


}