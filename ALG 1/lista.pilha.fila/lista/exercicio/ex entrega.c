#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define TAM_MAX 100

typedef struct{ 
    int chave; 
}Item;
typedef struct{ 
    Item item[TAM_MAX]; 
    int ini; 
    int fim; 
    int tam; 
}Fila;

Fila* criar_fila(){ 
    Fila *f = (Fila*) 
    malloc(sizeof(Fila)); 
    f->ini = -1; 
    f->fim = -1; 
    f->tam = 0;
    return f;
}

int fila_vazia(Fila *f){ 
    return (f != NULL) && (f->tam == 0); 
}


int fila_cheia(Fila *f)
{ 
    return (f != NULL) && (f->tam == TAM_MAX); 
}


int enfileirar(int chave, Fila *f)
{ 
    Item item;
    if ((f != NULL) && !fila_cheia(f))
    { 
        item.chave = chave; 
        f->tam++;
        if ((f->ini < 0) && (f->fim < 0)) 
        {
              f->ini = f->fim = 0; 
        }
          
        else if (f->fim >= TAM_MAX)
        {
            f->fim = 0; 
        }

        else
        {
             f->fim++;
            f->item[f->fim] = item;
            f->tam++;
            return 1;
     
       }
    }
    return 0;
}
Item* desenfileirar(Fila *f)
{ 
    Item *item;
    if ((f != NULL) && (!fila_vazia(f)))
    { 
        item = (Item *) malloc(sizeof(Item)); 
        *item = f->item[f->ini];

        if (f->ini == f->fim)
        {
            f->ini = -1;
            f->fim = -1; 
            f->tam = 0; 
        }
        else if (f->ini < TAM_MAX - 1) 
        {
            f->ini++;       
        }
        else 
        {       
            f->ini = 0;
            f->tam--;
        }
            

}
    return item;
}

void imprimir_fila(Fila *f)
{ 
    Fila aux; Item *item;
    if (f != NULL)
    { 
        aux = *f;
        printf("\n");
        while (!fila_vazia(&aux))
        { 
            item = desenfileirar(&aux); 
            printf("%d\t", item->chave);
        }
    }
}
int liberar_fila(Fila *f)
{ 
    if (f != NULL)
    { 
        free(f);
        return 1;
    }
    
    return 0;
}
Fila* inverter_fila(Fila *f)
{
    Fila *aux;
    Item *item;
    int j = f->tam/2+1;
     int vet[j];
    
    aux = criar_fila();

    int i;
    
   printf("\n");
    for(i=0;i<f->tam;i++)
    {
        item = desenfileirar(f);
        vet[i] = item->chave;
        //printf("\t A");
    
        
    }
     for(i=j;i>0;i--)
    {
        enfileirar(vet[i], aux);
        
    }


    return aux;
}

int main ()
{
    Fila *f;
    f = criar_fila();

    int i; 
    for(i=0; i<10; i++)
    {
        int j;
        j = rand()%100;

        enfileirar(j, f);


    }

    imprimir_fila(f);
    f = inverter_fila(f);
    imprimir_fila(f);




}