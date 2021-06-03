#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<locale.h>
#include <ctype.h>

typedef struct ItemL{
    char nom[100];
}ItemL;

typedef struct Lista{
    ItemL it[10];
    int tam; 
}Lista;
void criar( int n)
{
    Lista *l;
    Lista *l2;
    int i;
    l = (Lista*) malloc (sizeof(Lista));
    l2 = (Lista*) malloc (sizeof(Lista));
    l->tam = n;
    l->tam = n;

    for(i=0; i<n;i++)
    {
        scanf("%s", &l->it[i].nom);
        scanf("%s", &l2->it[i].nom);
    
    }
    int tam;
    int tam2;
    for (i=0;i<n;i++)
    {
        
        tam =  strlen(l->it[i].nom);
        tam2 =  strlen(l2->it[i].nom);
        contador( l->it[i].nom, tam, l2->it[i].nom, tam2);
        
    }
    
  
}
void contador (char v[], int n, char v2[], int m)
{
     int valor;
    char inversa[20];
    strcpy(inversa, v2);
    
    char temp;
    int i, j;

    i = 0;
    j = strlen(inversa) - 1;

    while (i < j) {
        temp = inversa[i];
        inversa[i] = inversa[j];
        inversa[j] = temp;
        i++;
        j--;
    }

    
    valor = strcmp(v, inversa);

    if (valor == 0)
    {
        printf("E inverso\n");
    }
  
    else
    {
          printf("N e inverso\n" );
    }
  
        
}

int main ()
{
    int n;
    scanf("%d", &n);
    criar(n);

}