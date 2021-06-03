#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mult(int x, int y, int cont, int a) {
    
   
    int var, vai;
    var = y%10;
    vai = y/10;
   
    
    if (var == x)
    {
        cont++;
        return a = mult (x, vai, cont, a);
    }
     else if (vai==0)
    {
        a = cont;
        return a;
    }
    else
    {
        return a =  mult (x, vai, cont, a);
    }
    
    
}

int main ()
{
    int i, j, a;
    int cont =0;

    scanf("%d", &i);
    scanf("%d", &j);

    a = mult(i,j, cont, a);
    printf("%d", a);

}