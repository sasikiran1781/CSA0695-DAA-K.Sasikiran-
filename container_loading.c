#include <stdio.h>

void containerLoader(int weights[], int n, int capacity) {
    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + weights[i] <= capacity) {
            currentWeight += weights[i];
            printf("Container %d loaded with weight %d\n", i + 1, weights[i]);
        } else {
            printf("Cannot load container %d with weight %d. Exceeds capacity!\n", i + 1, weights[i]);
        }
    }
    printf("Total weight loaded: %d\n", currentWeight);
}

int main() {
    
    int weights[] = {10, 20, 30, 40};
    int capacity = 60;
    int n = sizeof(weights) / sizeof(weights[0]);
    containerLoader(weights, n, capacity);
    return 0;
}
