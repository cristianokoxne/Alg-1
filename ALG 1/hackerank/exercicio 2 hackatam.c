#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



typedef struct ponto{
    float x;
    float y;
    float r;
    float a;
}ponto;

float criaPonto (float r, float a)
{
    ponto *p;

    p.r =r;
    p.a =a;
    p.x = r*cos(a);
    p.y = r*sin(a);
    return p;
}
int main ()
{
    ponto *p;

    float r, a;
    scanf("%f", &r);
    scanf("%f", &a);
    
    p = criaPonto(r, a);
    printf("%1.f", p.r);
    printf("%1.f", p.a);
}
