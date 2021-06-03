#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100

 typedef struct Eletro{
    char nom[16];
    int pot;
    float tempo;
    float consumo;
}Eletro;
void  criar (Eletro q[], int n)
{
   
   int i, dias;
   int total = 0;
   for(i=0;i<n;i++)
   {
        scanf("%s", &q[i].nom);
        scanf("%d", &q[i].pot);
        scanf("%f", &q[i].tempo);

        q[i].consumo = q[i].pot*q[i].tempo; 

   }
   scanf("%d", &dias);

    for(i=0;i<n;i++)
   {
       total += q[i].consumo*dias;

   }

   
    mostrar(q, n, total, dias);

}

void mostrar(Eletro v[], int n, int total,int dias)
{
    int i;
    float r;
    printf("%d\n", total);
    for (i=0;i<n;i++)
    {
        r= ((dias* v[i].consumo)*100)/total  ;
        

        printf("%s %.1f%%", v[i].nom, r);
        printf("\n");
    }
   
}
int main(){

    int n, i;
    
   
    scanf("%d", &n);
    Eletro v[n];

    criar (v,n);

  
}