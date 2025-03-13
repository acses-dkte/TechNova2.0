#include <stdio.h>
#include <stdlib.h>

void transpose(int **matrix, int rows, int cols)
{
    int **transposed = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++)
        transposed[i] = (int *)malloc(rows * sizeof(int));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transposed[j][i] = matrix[i][j];

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++, printf("\n"))
        for (int j = 0; j < rows; j++)
            printf("%d ", transposed[i][j]);

    for (int i = 0; i < cols; i++)
        free(transposed[i]);
    free(transposed);
}

int main()
{
    int rows = 2, cols = 3, values[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        matrix[i] = (int *)malloc(cols * sizeof(int));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = values[i][j];

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++, printf("\n"))
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);

    transpose(matrix, rows, cols);
}
