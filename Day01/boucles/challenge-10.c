#include <stdio.h>

int main()
{
    int n, somme = 0;
    printf("entre la nombre :");
    scanf("%d", &n);

    for (int i = 0; i <= 3; i++)
    {
        somme += i;
    }
    printf("la somme et =  %d", somme);
}