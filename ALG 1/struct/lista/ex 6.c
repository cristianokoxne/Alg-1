#include <stdio.h>

typedef struct{
    int numLinhas;
    int numColunas;
    int mat[numLinhas][numColunas];
}matriz;


int main()
{
    matriz a;
    int numLinhas;
    int numColunas;

    printf("insira o numero de linhas");
    scanf("%d", &numLinhas);

    printf("insira o numero de colunas");
    scanf("%d", &numColunas);


}