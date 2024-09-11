#include <stdio.h>

int total = 0;

void subsetSum(int s[], int t[], int s_size, int t_size, int sum, int ite, int const target_sum) {
    if (target_sum == sum) {
        for (int i = 0; i < t_size; i++)
            printf("%d ", t[i]);
        printf("\n");
        return;
    }

    for (int i = ite; i < s_size; i++) {
        t[t_size] = s[i];
        subsetSum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
    }
}

void generateSubsets(int s[], int size, int target_sum) {
    int* tuplet_vector = (int*)malloc(size * sizeof(int));
    subsetSum(s, tuplet_vector, size, 0, 0, 0, target_sum);
    free(tuplet_vector);
}

int main() {
    int weights[] = {10, 7, 5, 18, 12, 20, 15};
    int target = 35;
    int size = sizeof(weights) / sizeof(weights[0]);

    generateSubsets(weights, size, target);
    return 0;
}
