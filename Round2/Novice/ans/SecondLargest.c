// Find second largest number for array take array input as int arr[] = {-10, -5, -20, -8};
#include <stdio.h>
#include <limits.h>

void findSecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        printf("Array should have at least two elements.\n");
        return;
    }

    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
        printf("No second largest element found.\n");
    else
        printf("The second largest element is: %d\n", second_largest);
}

int main()
{
    int arr[] = {-10, -5, -20, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, n);

    return 0;
}