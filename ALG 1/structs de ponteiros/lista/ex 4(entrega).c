#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
 int n; 
 int linhas;
 int colunas;
}matriz;
int main ()
{
   matriz **v;
   int i;
   int n;
    scanf("%d", &n);

   for(i=0;i<n;i++)
   {
       v[i] = calloc(sizeof(matriz));
   }


}