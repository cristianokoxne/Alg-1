#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


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
    int i;
    l = (Lista*) malloc (sizeof(Lista));
    l->tam = n;

    for(i=0; i<n;i++)
    {
        scanf("%s", &l->it[i].nom);
    }
    int tam;
    for (i=0;i<n;i++)
    {
        
        tam =  strlen(l->it[i].nom);
        contador( l->it[i].nom, tam);
    }
    
  
}
void contador (char v[], int n)
{
    int i, j, cont=0;
    for(i=0;i<=n;i++)
    {
        
        if (v[i] == '<')
        {   
            v[i] = '.';
            for(j=i;j<n;j++)
            {
                if(v[j] == '>')
                {
                    
                    v[j] = '.';
                    cont++;
                    break;
                }

            }
        }
        

    }
     if (cont == 100)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", cont);
    }
    
   
    
}

int main ()
{
    int n;
    scanf("%d", &n);
    criar(n);

}