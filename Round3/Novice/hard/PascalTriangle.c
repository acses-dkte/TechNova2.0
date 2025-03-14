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

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%lld ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printPascalsTriangle(n);

    return 0;
}
