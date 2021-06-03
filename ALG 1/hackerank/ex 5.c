#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



typedef struct ponto{
   int valor;
}ponto;

void criar()
{
    ponto *a;
    ponto *b;
    a = malloc(sizeof(ponto));
    b = malloc(sizeof(ponto));
  
    scanf("%d", &a->valor);
    scanf("%d", &b->valor);

    troca(a,b);
    printa (a,b);

}
void troca(ponto *a, ponto *b)
{
   
        int aux;

        aux=a->valor;
        a->valor = b->valor;
        b->valor = aux;
 
}
void printa (ponto *a, ponto *b)
{
     printf("A=%d B=%d\n", a->valor, b->valor);
}

int main ()
{
    int n;
    int  i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
         criar();

    }
}