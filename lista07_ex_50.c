#include <stdio.h>
#include <stdlib.h>

void le_matriz(int **, int, int);
void exibe_matriz(int **, int, int);
int soma_diagonal(int **, int);
int main()
{
    int linhas, colunas;
    int **m;
    printf("Digite um número de linhas:\n");
    scanf("%d", &linhas);
    printf("Digite um número de colunas:\n");
    scanf("%d", &colunas);

    // casting do "ponteiro
    m = (int **)malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++)
    {
        m[i] = (int *)malloc(colunas * sizeof(int));
        le_matriz(m, linhas, colunas);
        exibe_matriz(m, linhas, colunas);

        printf("\nA soma da diagonal principal e: %d\n", soma_diagonal(m, linhas));
        soma_diagonal(m,linhas);
    }

    return 0;
}
void le_matriz(int **m, int l, int c)
{
    int i, j;
    printf("digite os elementos da matriz:\n");
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++){
            printf("m[%d, %d]:", i, j);
            scanf("%d", &m[i][j]);
        }
}
void exibe_matriz(int **m, int l, int c)
{
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
                printf("%4d", m[i][j]);
            printf("\n");
    }
}
int soma_diagonal(int **m,int l){
    int i,s;
    for(i= 0, s = 0; i<l; i++){
            s+= m[i][i];
    }
    return s;
}