#include <stdio.h>
#include <stdbool.h>

    int main ()
{

    int A, B, C, D;

    printf("Insira 4 numeros\n");
        scanf("%i %i %i %i", &A, &B, &C, &D);

    if ((B > C) && (D > A) && (C + D > B + A) && (C >= 0) && (D >= 0) && (A%2 == 0))
    {
        printf("Valores aceitos!");
    }
    else 
    {
        printf("Valores nao aceitos!");
    }

return 0;
}