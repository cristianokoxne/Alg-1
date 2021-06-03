#include <stdio.h>
#include <limits.h>

typedef struct cabeça{
    char descr[51];
    int atk;
    int def;
}cabeça;

typedef struct perna{
    char descr[51];
    int atk;
    int def;
}perna;

typedef struct braco{
    char descr[51];
    int atk;
    int def;
}braco;

typedef struct {
    cabeça cab;
    perna perE, perD;
    braco braE, braD;
    char descr[51];
    int atk;
    int def;
    
}Exodia;

Exodia Invocar (cabeça cab, )