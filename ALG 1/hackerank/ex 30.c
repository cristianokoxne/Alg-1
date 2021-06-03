#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

int comparar(char s1[], char s2[]){
        return strcmp(s1, s2);
}
void troca(char **vstr, int p1, int p2){
        char *str;
        str = vstr[p1];
        vstr[p1] = vstr[p2];
        vstr[p2] = str;
}
void quicksort(char **vstr, int n_cima, int n_baixo)
{
    int i = n_cima, j = n_baixo;
    char *pivo = vstr[(i + j) / 2];
   
    do{
        
        while (comparar(vstr[i], pivo) < 0)
        {
                 i++;
        }
               
        while (comparar(vstr[j], pivo) > 0) 
        {
                 j--;
        }
       
        if (i <= j)
        {
                troca(vstr, i, j);
                i++;
                j--;
        }
    }while (i <= j);
    if (j > n_cima)
    {
            quicksort(vstr, n_cima, j);
    }
            
    if (i < n_baixo)
    {
              quicksort(vstr, i, n_baixo);
    }
          
}
int main(void)
{
  char **nome;
  int n, i;

  scanf("%d", &n);
  nome = malloc(sizeof(char*)*n);
  for (i = 0; i < n; i++)
  {
   
    nome[i] = malloc(sizeof(char)*10);
     scanf("%s", nome[i]);
    
  }
    quicksort(nome, 0, n-1);
    for(i=0;i<n;i++)
    {
        printf("%s\n", nome[i]);
    }
  
  return 0;
}