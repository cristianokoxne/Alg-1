#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

typedef struct{
    unsigned int tam;
    float B;
    int *buckets;
}HashT;



HashT *criar(unsigned int tam, float c){
    HashT *t = malloc(sizeof(HashT));
    int i;

    t->tam = tam;
    t->B = c;
    t->buckets = malloc(tam * sizeof(int));

    for (i = 0; i < tam; i++)
    {
         t->buckets[i] = -1;
    }
       
    return t;
}



static int h1(int k, float B, int tam){
    int aux, re;
    aux=k*B;
    aux = aux - (int) aux;
    re = tam*aux;
    return (re);
}
static int h2(int k, int B){
    return ((1 + k) % (B - 1));
}



static int reHa(int key,int tentativa, HashT *t){
    return ((h1(key, t->B, t->tam) + tentativa * h2(key, t->tam)) % t->tam);
}





int inserir(int key, HashT *t){
    int x;
    int i, rh;

   
    if ((t != NULL) && (key > 0)){
        
        x = h1(key, t->B, t->tam); 

        if (t->buckets[x] <= 0)
        {
            t->buckets[x] = key;
            return 1;
        
        }
        else
        { 

            i = 1; 
            rh = x; 

            
            while ((i < t->tam) && (t->buckets[rh] != key) && (t->buckets[rh] > 0)){
                
                
                rh = reHa(key, i, t); 

                i++; 
            }

            
            if ((i < t->tam) && (t->buckets[rh] <= 0)){
                t->buckets[rh] = key;

                return 1;
            }
        }
    }

    return 0;
}




void imprimir(HashT *t){
    int i;
    if (t != NULL){
        for (i = 0; i < t->tam; i++){
        
            if (t->buckets[i] >= 0)
                printf("%d\n", t->buckets);
        }
    }
}

int liberar(HashT *t){
    if (t != NULL){
        free(t->buckets);

        free(t);

        return 1;
    }

    return 0;
}

int main ()
{
    float c;
    int n, i, key, quant;

    do
    {
        scanf("%f", &c);
    }while(c<0&&c>1);

    scanf("%d", &n);
    HashT *tab = criar(n, c);
    scanf("%d", &quant);
    for(i=0;i<quant;i++)
    {
        scanf("%d", &key);
        inserir(key, tab);
    }

     imprimir(tab);

}