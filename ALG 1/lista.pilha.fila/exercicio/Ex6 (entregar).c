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
int inserir10 (Lista *l){
    ItemL item;
    int i;

    for(i=0;i<10;i++)
    {
         if (!lista_cheia(l)){
        
            item.chave = rand() %10;

            
            l->item[l->tam] = item;

        
            l->tam++; 
          
        }
         
    }

    return 0;
       
}
void imprimir_lista(Lista *l){
    int i;
    printf("\n");
    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%d\t", l->item[i].chave);
    }
}
void copiarPares (Lista *l, Lista *v)
{
    int i;
    int j = 0;
    printf("\n");
    for (i = 0; i < l->tam; i++)
    {
       if( l->item[i].chave%2==0 )
       {
               v->item[j].chave =  l->item[i].chave;
                v->tam++;
                j++;
            
       }
        
    }

    
             
}
void copiarImpares (Lista *l, Lista *v)
{
    int i;
    int j = 0;
    printf("\n");
    for (i = 0; i < l->tam; i++)
    {
       if( l->item[i].chave%2!=0 )
       {
               v->item[j].chave =  l->item[i].chave;
                v->tam++;
                j++;
            
       }
        
    }

    
             
}
int main ()
{
    Lista *l;
    l = criar();
    inserir10 (l);
    imprimir_lista(l);

    Lista *v;
    v = criar();
    copiarPares (l, v);
    imprimir_lista(v);

    Lista *k;
    k = criar();
    copiarImpares (l, k);
    imprimir_lista(k);





}