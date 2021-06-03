#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void PareImpares(int *vet, int n)
{
    int impar=0, par=0, i;
    for(i=0;i<n;i++)
    {
        if (vet[i]%2==0)
        {
            par++;
        }
        else 
        {
            impar++;
        }
    }
    printf("Pares: %d\n", par);
    printf("Impares: %d", impar);

    
}


int main() 
{

    int *vet;
    
    int i; 
    
    int n;
    scanf("%d", &n);
    vet =(int *) malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        
        scanf("%d", &vet[i]);
    }

    PareImpares(vet, n);
    exit(0);


   
}