
int main ()
{
    int x =10;
    int y = 10;
    int *p;
    int *p2;
    int *p3;
    p = &x; /* p vai armazenar o endereço de x*/
    p2 = &x;
    p3 = &y;
    *p = 11; /*modifica o conteudo do endereço da memoria em que p aponta*/
    p++; /*desloca o ponteiro para o proximo endereço de memoria*/

    if (p==p3) /*verifica se o os dois endereços são iguais*/

    printf("%d", p); /*mostra o endereço de p*/
    printf("%d", *p); /*mostra o conteudo  do endereço que p aponta*/


    int i;

    for(i=0;i<6;i++)/*é possivel printar um vetor desta forma*/
    {
        printf("%d ", *(v+i));
    }

    void *pv; /*ponteiro generico, pode ser apontado para qualquer tipo de dados, mas se usado em int por exemplo e em seguida em char, da problemas*/

    *p++; /*encrementa o dado guardado na memoria*/

    (

    p2 = (int*) pv; /*transforma um ponteiro generico em ponteiro de int e em seguida faz com que p2 possua o valor de pc*/
    printf("tamanho de x: %d\n", sizeof(x));
    printf(" %d\n", x); /*printa o valor de x*/
    printf(" %d\n", &x); /*mostra o local da memoria de x*/
    printf(" %x\n", &x); /*x imprime o valor em hexadecimal*/
    printf(" %d\n", p); /*imprime o local da memoria em que p aponta*/
}
