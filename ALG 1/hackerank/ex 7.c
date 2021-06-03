#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Exercício "Ponteiros 17 - Volei"

typedef struct{
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}jogador;


void preencher_dados_atleta(jogador *jog, char nome[], int saquesTotal, int bloqueiosTotal,
                            int ataquesTotal, int saquesSucesso, int bloqueiosSucesso,
                            int ataquesSucesso){
    strcpy(jog->nome, nome);
    jog->saquesTotal = saquesTotal;
    jog->bloqueiosTotal = bloqueiosTotal;
    jog->ataquesTotal = ataquesTotal;
    jog->saquesSucesso = saquesSucesso;
    jog->bloqueiosSucesso = bloqueiosSucesso;
    jog->ataquesSucesso = ataquesSucesso;
}


void imprimir_estatisticas_jogadores(jogador jog[], int n){
    int i;
    float saquesT = 0, bloqueiosT = 0, ataquesT = 0; // Tentativas
    float saquesST = 0, bloqueiosST = 0, ataquesST = 0; // Sucesso

    for (i =0; i < n; i++){
        saquesT += (float) jog[i].saquesTotal;
        bloqueiosT += (float) jog[i].bloqueiosTotal;
        ataquesT += (float) jog[i].ataquesTotal;
        saquesST += (float) jog[i].saquesSucesso;
        bloqueiosST += (float) jog[i].bloqueiosSucesso;
        ataquesST += (float) jog[i].ataquesSucesso;
    }

    printf("Pontos de Saque: %.2f %%.\n", (saquesST / saquesT) * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (bloqueiosST / bloqueiosT) * 100);
    printf("Pontos de Ataque: %.2f %%.\n", (ataquesST / ataquesT) * 100);
}
jogador criar()
{
    jogador *jog;
    jog =malloc(sizeof(jogador));
    char nome[10];
    int saquesTotal, bloqueiosTotal, ataquesTotal, saquesSucesso, bloqueiosSucesso, ataquesSucesso;

    scanf("%s", &nome);
    scanf("%d", &saquesTotal);
    scanf("%d", &bloqueiosTotal);
    scanf("%d", &ataquesTotal);
    scanf("%d", &saquesSucesso);
    scanf("%d", &bloqueiosSucesso);
    scanf("%d", &ataquesSucesso);

    preencher_dados_atleta(jog, nome, saquesTotal,bloqueiosTotal, ataquesTotal,  saquesSucesso,bloqueiosSucesso, ataquesSucesso);

   return *jog;

}
int main ()
{
    int n;
    scanf("%d", &n);
    jogador **jog;
    jog = malloc(sizeof(jogador));
    int i, j;
    jogador vet[n];
    for(i=0;i<n;i++)
    {

        vet[i] = criar();
         
    }
     imprimir_estatisticas_jogadores(vet, n);
     



}