#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct Vetor{
    int *v; // Array (vetor) de tamanho n
    int q; // quantidade de itens inseridos em v
    int n; // tamanho (capacidade) de v
}Vetor;

Vetor * iniciar(Vetor *v1, int n)
{
    
    v1 = (Vetor*) malloc (sizeof(Vetor));
    v1->v =  (int*) malloc (sizeof(int));

    v1->n = n;

    return v1;
}
int lista_vazia(Vetor *l){
    return (l == NULL) || (l->n == 0);
}


int lista_cheia(Vetor *l){
    return (l != NULL);
}

void inserir(Vetor *l, int chave)
{

    if (!lista_cheia(l)){   

        
        l->v[l->n] = chave;
       
        l->n++; 

    }

}

/*Vetor* concatenar(Vetor *v1, Vetor *v2)
{
    int i;
    Vetor *vC = malloc(sizeof(Vetor));
    vC->v = (int *) malloc((v1->n+v2->n)*sizeof(int));
    vC->n = v1->n+v2->n;

    for(i=0;i<v1->n;i++)
    {
        vC->v[i] = v1->v[i];
    }
    int j=0;
    for(i=v1->n;i<=v1->n+ v2->n ;i++)
    {
        vC->v[i] = v2->v[j];
        j++;
    }
    
    return vC;
   
}

Vetor* soma(Vetor *v1, Vetor *v2)
{
    int i, j=0;
    Vetor *vS;
    vS = malloc(sizeof(Vetor));
    
    if(v1->n >= v2->n)

    {
       
        vS->v = (int *) malloc((v1->n)*sizeof(int));
        vS->n = v1 ->n;

         for(i=0;i<v1->n;i++)
        {
            if(j!=v2->n)
            {
                vS->v[i] = v1->v[i]+v2->v[i];
                j++;
            }
            else 
            {
                vS->v[i] = v1->v[i];

            }
            
        }
    }
    else 
    {
        vS->n = v2 ->n;
        for(i=0;i<v2->n;i++)
        {
            if(j!=v1->n)
            {
                vS->v[i] = v1->v[i]+v2->v[i];
                j++;
            }
            else 
            {
                vS->v[i] = v2->v[i];

            }
            
        }
       

    }
    return vS;
}*/
void printa(Vetor *v)
{
    int i;
    for(i=0;i<v->n;i++)
    {
       printf("%d ", v->v[i]);
    }
} 
int main ()
{
    int n, i, chave;
    Vetor *v;
    scanf("%d", &n);
     iniciar(v, n);
    for(i=0;i<n;i++)
    {
       scanf("%d", chave);
       inserir(v, chave);
    }
}