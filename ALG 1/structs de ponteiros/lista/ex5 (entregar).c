#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{ 
    char construtor[40]; 
    float altura; 
    float largura; 
    float comp; 
    float volume; 
}caixa1;
typedef union{

    char construtor[40]; 
    float altura; 
    float largura; 
    float comp; 
    float volume; 
}caixa2;

/*A)*/
void obter_volume(caixa1 *c)
{
    c->volume = (c->largura * c->comp * c->altura);
    printf("%.2f", c->volume);

} 
int main ()
{
    caixa1 *c1 = malloc (sizeof(caixa1));

    scanf("%f", &c1->altura);
    scanf("%f", &c1->largura);
    scanf("%f", &c1->comp);
    
    obter_volume(c1);

}
/*B) um é uma onion uutro uma struct a diferença entre as duas e que a union se ultiliza o mesmo espaço pra defenir varios tipos de variaveis, por exemplo um char um int e um float ocupam o mesmo lugar de memoria se partilharem de uma mesma union, ja string é para variaveis que possuem em comum um corpo estrutural igual porem que ocupem lugar definido na memoria*/
/*C) ocupa todos as variaveis que possuem dentro da struct c1, enta~se ela possui um char um float e um char ele ocupa todos os bytes dessas tres variaveis  pois ficam uma ao lado da outra na memoria*/
/*D) ocupa só um local na memoria, todas as variaveis dentro de uma union ocupam o mesmo local na memoria*/
/*E) fica vazio pois as variaveis dentro de um struct independem uma da outra*/
/*F) ficam iguais, com o mesmo valor, as variaveis dentro de uma union compartilham do mesmo valor quando alteradas*/

