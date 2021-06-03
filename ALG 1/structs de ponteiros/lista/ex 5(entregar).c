#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
    int e[4];

}vet;

vet concatenar(vet *vet1, vet *vet2)
{
    vet *vet3 = malloc(sizeof(vet));
   
        vet3->e[0] = (vet1->x);
        vet3->e[1] = (vet1->y);
        vet3->e[2] = (vet2->x); 
        vet3->e[3] = (vet2->y);
    return(*vet3);
}
void  printar(vet *vet3)
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d", vet3->e[i]);
    }
}

int main ()
{
    vet *vet1 = malloc(sizeof(vet));
    vet *vet2 = malloc(sizeof(vet));
    vet *vet3 = malloc(sizeof(vet));

    scanf("%d", &vet1->x);
    scanf("%d", &vet1->y);
    scanf("%d", &vet2->x);
    scanf("%d", &vet2->y);
    
   

    *vet3 = concatenar(vet1, vet2);
     printar(vet3);

}

