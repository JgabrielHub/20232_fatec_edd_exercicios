#include <stdio.h>

void desenha_triangulo(int);
int main()
{
    int n;
    printf("Digite um número:\n");
    scanf("%d", &n);
    desenha_triangulo(n);
    return 0;
}

void desenha_triangulo(int n)
{
    int l = 1, k, m, i;
    for (; l <= n; l++)
    {
        k = 2 * l - 1;
        m = (60 - k) / 2;
        for (i = 1; i <= m; i++)
            printf(" ");
        for (i = 1; i <= k; i++)
            printf("*");
        printf("\n");
    }
}