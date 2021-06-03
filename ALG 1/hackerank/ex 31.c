#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#define MAXSIZE 50

typedef struct Aluno{
    int matricula;
    char* nome;
    char* curso;
    float coef;
}Aluno;
int comparar(char s1[], char s2[]){
        return strcmp(s1, s2);
}
void troca(Aluno *alu, int p1, int p2){
        Aluno *str;
        str =  malloc(sizeof(Aluno));
        str[0] = alu[p1];
        alu[p1] = alu[p2];
        alu[p2] = str[0];

        free(str);
}
void bubblesort(Aluno *alu, int n){
        
    int i, j, t = 1;
       
    for (i = 0; (i < n - 1) && t; i++)
    {
        t = 0;
        for (j = 0; j < n - i - 1; j++)
                if (comparar(alu[j].nome, alu[j + 1].nome) > 0){
                        troca(alu, j, j + 1);
                        t = 1;
                }
                else if (comparar(alu[j].nome, alu[j + 1].nome) == 0)
                {
                    if(alu[j].matricula > alu[j + 1].matricula)
                    {
                        troca(alu, j, j + 1);
                        t = 1;
                    }
                }
    }
}

int main(void)
{
    Aluno *alu;
    int i, n;
  scanf("%d", &n);
  alu =  malloc(sizeof(Aluno)*n);
  for (i = 0; i < n; i++)
  {
    alu[i].nome = malloc(sizeof(char)*50);
     alu[i].curso = malloc(sizeof(char)*50);
     scanf("%d", &alu[i].matricula);
     scanf("%s", alu[i].nome);
     scanf("%s", alu[i].curso);
      scanf("%f", &alu[i].coef);
    
    
  }
  bubblesort(alu, n);
    for(i=0;i<n;i++)
    {
        printf("%s %d %s %.2f\n", alu[i].nome, alu[i].matricula, alu[i].curso, alu[i].coef);
    }
  
  return 0;
}