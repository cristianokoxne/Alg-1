#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[100];
    float ki;
    int level;
    
}dragonball;

typedef dragonball dbz; /*agora a variavel dbz, pode receber os tipos dragonball, pois elas são do mesmo tipo*/
int main ()
{
    struct dragoball vegeta = ("vegeta", 153, 7); /*é possivel emplementar assim, os dados de dentro da structs*/
    /**/
    printf("nome %s", vegeta.nome); /*assim printa os elementros da struct*/
    printf("ki %f", vegeta.ki);
    printf("level %d", vegeta.level);
    /**/
    vegeta.ki = 234;/*assim implemanta os elementos da struct*/
    strcpy (vegeta.nome, "vegeta");
}