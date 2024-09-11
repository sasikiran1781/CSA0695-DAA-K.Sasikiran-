// MAX AND MIN USING DIVIDE AND CONQUER

#include <stdio.h>

void findMaxMin(int arr[], int low, int high, int *max, int *min) 
{
    if (low == high) 
    {
        *max = arr[low];
        *min = arr[low];
        return;
    }

    if (high == low + 1) 
    {
        if (arr[low] > arr[high]) 
        {
            *max = arr[low];
            *min = arr[high];
        } else 
        {
            *max = arr[high];
            *min = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;
    int max1, min1;
    findMaxMin(arr, low, mid, max, min);
    findMaxMin(arr, mid + 1, high, &max1, &min1);

    if (max1 > *max)
        *max = max1;
    if (min1 < *min)
        *min = min1;
}

int main() 
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMaxMin(arr, 0, size - 1, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
