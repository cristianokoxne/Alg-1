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
     int i = 0, j = 0, k = 0, aux =0;


     while (l->item[i].chave!= NULL && l2->item[j].chave!= NULL )
    {
       if (l->item[i].chave != l2->item[j].chave )
       {
           
            
                 l3->item[k].chave = l->item[i].chave;
                i = i + 1;
            
                k = k + 1;
                
                l3->item[k].chave =  l2->item[j].chave;
                j = j + 1;
            
                k = k + 1;
       }
       else
       {
           l3->item[k].chave = l->item[j].chave;
            i = i + 1;
            k = k + 1;
            j = j + 1;
       } 
      

    }
    
    l3->tam = k;
    imprimir(l3);
}
void imprimir (Lista *l)
{

    int j =0;
    while (l->item[j].chave != -1)
    {
        printf("%d ", l->item[j].chave);
        if(l->item[j].chave == 10)
        {
            printf(" 12");
        }
        j++;
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
    int tam, b;
    scanf("%d", &tam);

    for(b=0;b<tam;b++)
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
   
    
   


}