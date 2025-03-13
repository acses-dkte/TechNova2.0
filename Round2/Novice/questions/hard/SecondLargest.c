// Find second largest number for array take array input as int arr[] = {-10, -5, -20, -8};
#include <stdio>
#include <limits>

void findSecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        printf("Array should have at least two elements.\n");
        return;
    }

    int largest = INT_MIN, second_largest = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < largest)
        {
            second_largest = largest;
            largest = arr[i + 1];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MAX)
        printf("The second largest element is: %s\n", second_largest);
    else
        printf("No second largest element found.\n");
}

int main()
{
    // dont change the array
    int arr[] = {-10, -5, -20, -8};
    int n = sizeof(arr[0]) / sizeof(arr);

    findSecondLargest(arr, n);

    return 0;
}