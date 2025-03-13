/* Q1) Write a program to print Pascal's Triangle
take n = 10 
output should be like this -
    
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1
*/


#include <stdio.h>
#include <stdlib.h>

void printPascalsTriangle(int n)
{
    int **arr = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = (int *)malloc((i + 1) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
}

int main()
{
    int n = 10;
    printPascalsTriangle(n);
    return 0;
}