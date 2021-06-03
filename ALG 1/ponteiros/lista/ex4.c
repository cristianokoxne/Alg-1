#include <stdio.h>
void comparaChar (char *p1, char *p2)
{
    if (*p1<*p2)
    {
        printf("%c", *p2);
    }
    else 
    {
        printf("%c", *p1);
    }
}

int main ()
{
    char a, b, c;
    char *p1,*p2, *p3;

    fflush(stdin);
    printf("escreva uma letra: ");
    scanf("%c", &a);
    fflush(stdin);
    printf("escreva uma letra: ");
    scanf("%c", &b);

    p2 = &a;
    p1 = &b;

    comparaChar (p1, p2);

    //printf("\n%c", *p1);

}