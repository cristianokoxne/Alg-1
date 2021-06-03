#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

// Estrutura para uma unidade da lista estática
typedef struct ItemL{
    int chave;
    char e;
}ItemL;


typedef struct Lista{
    ItemL item[MAX_SIZE];
    int tam; 
    int v[20]
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


int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        
        for (i = 0; i < l->tam; i++)
            if (l->item[i].chave == chave)
                return i;
    }

    
    return -1;
}


Lista* inserir(Lista *l, int chave, char n)
{
    ItemL item;

    if (!lista_cheia(l)){
        
        item.chave = chave;
        item.e = n;
        
        l->item[l->tam] = item;

       
        l->tam++; 

      return l;
    }

    
    return 0;
}
Lista* inserir2(Lista *l, int chave)
{
    
    l->v[l->tam] = chave;

    l->tam++;

    return l;
}

void remover(Lista *l, Lista *l2, Lista *l3){

    int i =0, k=0;
   
    if(!lista_vazia(l2))
    {
        inserir2(l3, l2->item[i].chave);
       
        l2->item[i].chave  = 0;
        l2->tam--;
        for(i=0;i<l2->tam;i++)
        {
            l2->item[i].chave =  l2->item[i+1].chave;
        }
            
    }
   
    else if(!lista_vazia(l))
    {
        inserir2(l3, l->item[i].chave);
        
        l->item[k].chave  = 0;
        l->tam--;
        for(k=0;k<l->tam;k++)
        {
            l->item[k].chave =  l->item[k+1].chave;
        }
       
    }
    

}

void imprimir_lista(Lista *l){
    int i=0;

    for (i = 0; i <l->tam; i++)
    {
            printf("%d ", l->v[i]);
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
    
    char n;
    Lista *l;
    Lista *l2;
    Lista *l3;
    l3 = criar();
    l = criar();
    l2 = criar();
        do
        {
            
            scanf("%c", &n);

            if(n =='N')
            {
                int chave;
                scanf("%d", &chave);
                 inserir(l, chave, n);
               
            }
           
            else if(n =='I')
            {
                int chave;
                scanf("%d", &chave);
                inserir(l2, chave, n);
            }
            else if(n=='G')
            {
                
              int chave;
                scanf("%d", &chave);
                inserir(l2, chave, n);
            }
            else if(n=='C')
            {
                 remover(l, l2, l3);
            }
            else if (n=='F')
            {
               
                imprimir_lista(l3);
                printf("\n");
                printf("Restaram %d pessoas na fila", l->tam + l2->tam);
                liberar_lista(l);
                liberar_lista(l2);
                liberar_lista(l3);
            }
            
                
        }while (n!='F');
            
        printf("\n");
}
