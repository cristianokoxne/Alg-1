#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

// Estrutura para uma unidade da lista estática
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


int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        
        for (i = 0; i < l->tam; i++)
            if (l->item[i].chave == chave)
                return i;
    }

    
    return -1;
}


Lista* inserir(Lista *l, int chave)
{
    ItemL item;

    if (!lista_cheia(l)){
        
        item.chave = chave;

        
        l->item[l->tam] = item;

       
        l->tam++; 

      return l;
    }

    
    return 0;
}
void remover(Lista *l){

    int i=0;
    if(!lista_vazia(l))
    {
        l->item[i].chave  = 0;
         l->tam--;
        for(i=0;i<l->tam;i++)
        {
             l->item[i].chave =  l->item[i+1].chave;
        }
        

       
    }
    

}

void imprimir_lista(Lista *l){
    int i=0;

    printf("\n");
    for (i = 0; i < l->tam; i++)
    {
            printf("%d ", l->item[i].chave);
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
    
    int i, tam;
    char n;
    Lista *l;
    

    scanf("%d", &tam);
    for(i=0;i<tam;i++)
    {
        l = criar();
        do
        {
            
            scanf("%c", &n);

            if(n =='I')
            {
                int chave;
                scanf("%d", &chave);
                 l = inserir(l, chave);
               
            }
           
            else if(n =='R')
            {
                remover(l);
            }
            else if(n=='K')
            {
                
                printf("Total elementos: %d", l->tam);
            }
            else if(n=='V')
            {
                if(!lista_vazia(l)== 1)
                {
                    printf("\nFila nao vazia!");
                }
            }
            else if(n=='C')
            {
                if(!lista_vazia(l) == 1)
                {
                    printf("\nFila nao cheia!");
                }
            }
            else if(n=='P')
            {
                imprimir_lista(l);
            }
            else if (n=='X')
            {
                liberar_lista(l);
            }
            
                
        }while (n!='X');
            
        printf("\n");

    }
    
}
