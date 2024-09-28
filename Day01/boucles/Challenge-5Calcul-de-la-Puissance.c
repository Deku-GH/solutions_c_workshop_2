#include <stdio.h>
#include <math.h>
int main()
{
    int s, n, x;
    printf("ente nombre :");
    scanf("%d", &n);
    printf("ente nombre :");
    scanf("%d", &x);

    for (int i = 0; i <= x; i++)
    {
        n = n * n;
    }

    printf("le résultat est = %d", s);
}