typedef struct{
    int x;
    int y;
}racional;

racional* criar(int x, int y);

void imprimir ( racional *p);

void libera(racional *p);

racional* soma(racional *p, racional *v);

racional* multiplica(racional *p, racional *v);

void verif(racional *p, racional *v);
