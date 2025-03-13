#include <stdio.h>

int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int sumOfPrimes(int L, int R)
{
    int sum = 0;
    for (int i = L; i <= R; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum; 
}

int main()
{
    int L, R;
    printf("Enter the range (L R): ");
    scanf("%d %d", &L, &R);

    if (L > R) 
    {
        int temp = L;
        L = R;
        R = temp;
    }

    int sum = sumOfPrimes(L, R);
    printf("Sum of prime numbers in range [%d, %d] = %d\n", L, R, sum); 

    return 0;
}
