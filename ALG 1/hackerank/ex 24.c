#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mult(int x, int y )
{
   
    if(x%y==0)
    {
        return y;
    }
    else
    {
        return mult(y, (x%y));
    }
        

}

int main ()
{
    int i, j, b;

    scanf("%d", &i);
    scanf("%d", &j);

    b = mult(i,j);
    printf("%d", b);
}