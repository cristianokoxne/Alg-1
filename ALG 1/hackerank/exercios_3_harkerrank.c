#include <stdio.h>
#include <string.h>
#include <math.h>

 typedef struct vetor_t{
    float x;
    float y;
    float norm;
}vetor_t;

vetor_t calculaNorma(vetor_t vetor){

    float norma;
    norma = sqrt((pow(vetor.x,2))+(pow(vetor.y, 2)));

    vetor.norm = norma;

    return (vetor);
    
}
void printaVet (vetor_t vet)
{
    
    printf("Norma = %.1f\n", vet.norm);
}
vetor_t CriaVet()
{
    vetor_t vet;
     scanf("%f %f", &vet.x, &vet.y);
     vet = calculaNorma(vet);
    printaVet (vet);
}
int main(){

    int i;
    int n;
    
     scanf("%d ", &n);
    
    for(i=0;i<n;i++)
    {
        CriaVet();
    }



  
}