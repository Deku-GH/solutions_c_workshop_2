#include <stdio.h>

int main()
{

    int base, exposant, resultat = 1;
    printf("entre la nombre :");
    scanf("%d", &base);
    printf("entre  exposant:");
    scanf("%d", &exposant);
    for (int i = 0; i < exposant; i++)
    {

        resultat = resultat * base;
    }
    printf("%d^%d = %d \n", base, exposant, resultat);
}