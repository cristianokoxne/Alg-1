#include <stdio.h>
int somaPonteiro(int *p1, int *p2)
{
    int *p3;
    *p3 = *p1+*p2;
    return (*p3);
}

int main ()
{
    int a, b;
    int  *p1, *p2, *p3;

    a=2;
    b=4;
    p1 = &a;
    p2 = &b;

    p3 = somaPonteiro(p1, p2);

    printf("%d", p3);
}