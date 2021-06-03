#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{ 
    float raio; 
    float area; 
    float volume; 
}esfera;

esfera medidas_esfera(esfera *e)
{
    e->area = 12.56*(e->raio * e->raio);
    e->volume = 4.19*(e->raio * e->raio * e->raio);
     return *e;
}
int main()
{
    int r;
    scanf("%d", &r);

    esfera *e = malloc(sizeof(esfera));
    e->raio = r;

     *e = medidas_esfera(e);

     printf("%.2f", e->area);
    printf("\n%.2f", e->volume);

}