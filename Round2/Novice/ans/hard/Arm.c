#include <stdio.h>
#include <math.h>

// Function to count digits (recursive)
int countDigits(int n) {
    return (n == 0) ? 0 : 1 + countDigits(n / 10);
}

// Recursive function to calculate Armstrong sum
int armstrongSum(int n, int digits) {
    if (n == 0) 
        return 0;
    return pow(n % 10, digits) + armstrongSum(n / 10, digits);
}

int main() {
    int num=153;
    int digits = countDigits(num);
    int sum = armstrongSum(num, digits);

    printf("%s\n", (sum == num) ? "Armstrong Number" : "Not an Armstrong Number");

    return 0;
}
