#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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
     
     int m;
    scanf("%d", &m);
    
     vet = (int *) realloc(vet, (m + n)*sizeof(int) );
     
     for(i=n; i<m+n; i++)
    {
        
        scanf("%d ", &vet[i]);
    }
     for(i=m+n-1; i>=0; i--)
    {
        
        printf("%d ", vet[i]);
    }


   
}