#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct ItemL{
    char nom[MAX_SIZE];
}ItemL;

typedef struct Lista{
    ItemL it[MAX_SIZE];
    int tam; 
}Lista;


void criar(char nom[], int n)
{
   Lista *l ;
   int i;
   l = (Lista*) malloc (sizeof(Lista));
   l->tam = n;

    for(i=0; i<n;i++)
    {
        scanf("%s", &l->it[i].nom);
    }
    for(i=0;i<n;i++)
    {   
       
        if (strstr(l->it[i].nom,nom)!=NULL)
        {
            printf("%s", l->it[i].nom);
            printf("\n");
        }
       
             
    }
   
}
int main ()
{
    char nom[MAX_SIZE];
    gets(nom);
    int n;
    scanf("%d", &n);
    criar(nom, n);

}