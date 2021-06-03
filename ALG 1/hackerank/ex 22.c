#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mult(int x, int y) {
    if(x > 0 && y > 1){
        return x += mult(x, --y);
    }else if(y==0){
        return 0;
    }else {
        return x;
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