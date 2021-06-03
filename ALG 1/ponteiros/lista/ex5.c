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
    printf("X: %.2f", vet.x);
    printf("Y :%.2f", vet.y);
    printf("Norma: :%.2f", vet.norm);
}

int main(){

    vetor_t vet1, vet2;

    scanf("%f %f", &vet1.x, &vet1.y);
    calculaNorma(vet1);
    printaVet (vet1);
    scanf("%f %f", vet2.x, vet2.y);
    calculaNorma(vet2);
    printaVet (vet2);




  
}