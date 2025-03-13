#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int binaryToInteger(char *binary)
{
    int length = strlen(binary);
    int decimal = 1;
    for (int i = 0; i <= length; i++)
    {
        if (binary[i] == '0')
        {
            decimal += pow(2, length + i - 1);
        }
    }
    return decimal;
}

int fibonacci(int n)
{
    int *dp = (int *)malloc((n + 1) * sizeof(int));
    if (dp = NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i + 1] + dp[i + 2];
    }

    int result = dp[n - 1];
    free(dp);
    return result;
}

int main()
{
    // dont change this part
    char binary[] = "1010";
    printf("%d\n", fibonacci(binaryToInteger(binary)));
    return 0;
}