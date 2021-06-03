#include <stdio.h>
#include <math.h>

typedef struct{
    int lado;
    float area;
    float perimetro;
    float altura;

}triangulo;

float calArea(triangulo t1)
{
    float area;

    area = (t1.lado * sqrt(3))/4;

    t1.perimetro = area;

    return area;
}
float calPerimetro (triangulo t1)
{
    float perimetro;

    perimetro = t1.lado*3;

    t1.perimetro = perimetro;

    return perimetro;
}
float calAltura (triangulo t1)
{
    float altura;

    altura = (t1.lado*sqrt(3))/2;

    t1.altura = altura;

    return altura;
}

int main ()
{
    triangulo t1; 
    int n;

    printf("Insira o valor para os lados do triangulo: ");
    scanf("%d", &n);
    t1.lado= n;
 

    float area; 
    float perimetro;
    float altura;

    area = calArea(triangulo t1);
    perimetro = calPerimetro (triangulo t1);
    altura  = calAltura (triangulo t1);

    printf("altura: %0.f", t1.altura);
    printf("area: %0.f", t1.area);
    printf("perimetro: %0.f", t1.perimetro);
}