#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("entre a nombre :");
    scanf("%d", &n);
    for (int i = 0; i <= 9; i++)
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
                printf("%d", i);
        }
}