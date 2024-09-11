#include <stdio.h>

void insertNumber(int arr[], int *n, int pos, int num) {
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = num;
    (*n)++;
}

int main() {
    int arr[10] = {1, 2, 3, 5, 6};
    int n = 5;
    int pos = 3, num = 4;

    insertNumber(arr, &n, pos, num);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
