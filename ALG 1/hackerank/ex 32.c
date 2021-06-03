#include <stdio.h>
#include <stdlib.h>

typedef struct Cell Cell;

typedef struct ListaE ListaE;

typedef struct Spa_Mat Spa_Mat;

 struct Cell{
        int item, lin, col;
        Cell *next;
        Cell *down;
};


struct ListaE{
        Cell *head;
};


struct Spa_Mat{
       int n_lin;
       int n_col;
       ListaE **lin;
       ListaE **col;
};


Spa_Mat* criar(int l, int c){
        Spa_Mat* mat = (Spa_Mat*) malloc(sizeof(Spa_Mat));
        int i;

        mat->n_col = c;
        mat->n_lin = l;
        mat->lin = (ListaE**) malloc(sizeof(ListaE*) * l);
        mat->col = (ListaE**) malloc(sizeof(ListaE*) * c);

        for (i = 0; i < l; i++){
                mat->lin[i] = (ListaE*) malloc(sizeof(ListaE));
                mat->lin[i]->head = NULL;
        }

        for (i = 0; i < c; i++){
                mat->col[i] = (ListaE*) malloc(sizeof(ListaE));
                mat->col[i]->head = NULL;
        }

        return mat;
}


Cell* criar_celula(int item, int l, int c){
    Cell *novo = NULL;

    if (item > 0){
        novo = (Cell*) malloc(sizeof(Cell));
        novo->item = item;
        novo->lin = l;
        novo->col = c;
        novo->next = NULL;
        novo->down = NULL;
    }

    return novo;
}


static int validar_ME(int l, int c, Spa_Mat* mat){
    return (mat != NULL) && (l >= 0) && (l < mat->n_lin) && (c >= 0) && (l < mat->n_col);
}


int buscar(int l, int c, Spa_Mat* mat)
{
        Cell *p;

        if (validar_ME(l, c, mat)){
            p = mat->lin[l]->head;

            while ((p != NULL) && (p->col < c))
                p = p->next;

            if ((p != NULL) && (p->col == c))
                return p->item;
        }

        return 0;
}



static Cell* obter_celula_antes_linha(int l, ListaE* col){
    Cell *pA = NULL;
    Cell *pP = col->head;

    while ((pP != NULL) && (pP->lin < l)){
        pA = pP;
        pP = pP->down;
    }

    return pA;
}


void alterar(int item, int l, int c, Spa_Mat* mat)
{
    Cell *pLA, *pLP, *pCA, *novo;

    if (validar_ME(l, c, mat)){
        pLA = NULL;
        pLP = mat->lin[l]->head;

        while ((pLP != NULL) && (pLP->col < c)){
            pLA = pLP;
            pLP = pLP->next;
        }

        
        if (item > 0){

            if ((pLP != NULL) && (pLP->col == c))
                pLP->item = item;
            else{ 
                novo = criar_celula(item, l, c);
                pCA = obter_celula_antes_linha(l, mat->col[c]);

                
                if (pLA != NULL){
                    novo->next = pLA->next;
                    pLA->next = novo;
                }else{
                    novo->next = mat->lin[l]->head;
                    mat->lin[l]->head = novo;
                }

                
                if (pCA != NULL)
                {
                    novo->down = pCA->down;
                    pCA->down = novo;
                }
                else
                {
                    novo->down = mat->col[c]->head;
                    mat->col[c]->head = novo;
                }
            }
        
        }
        else if((pLP != NULL) && (pLP->col == c))
        { 
                pCA = obter_celula_antes_linha(l, mat->col[c]);

                if(pCA != NULL)
                    pCA->down = pLP->down;
                else
                    mat->col[c]->head = pLP->down;

                if(posicaoNaLinhaAnterior != NULL)
                    pLA->next = pLP->next;
                else
                    mat->lin[l]->head = pLP->next;

                free(pLP);

        }

    }
   
}
void imprimir_elementos(Spa_Mat *mat)
{
    Cell * p;
    int j;

    for(int i = 0; i < mat->n_lin; i++)
        {
            p =  mat->lin[i]->head;
            printf("%d:", p->lin);
        
            if (p==NULL)
            {
                printf("%d: ->", i);
            }
           
            j=0;
            do
            {    
              
                printf(" -> %d,%d", p->col, p->item);
                p = p->next;

            }while (p != NULL);
            
            printf("\n");
        }
}
int main()
{
    int linha, c, item;
    int i,j;
    scanf("%d", &linha);
    scanf("%d", &c);

    Spa_Mat *mat =  criar(linha, c);

    for(i=0;i<linha;i++)
    {
        for(j=0;j<c;j++)
        {
             scanf("%d", &item);
           
                alterar(item, i,  j, mat);
            
             
        }

            
    }
    
    imprimir_elementos(mat);
    
    

    return 0;
}
