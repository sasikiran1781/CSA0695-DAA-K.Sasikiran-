#include <stdio.h>
#include <limits.h>

#define N 4

int min(int a, int b) { return (a < b) ? a : b; }

void solveAssignment(int cost[N][N], int n) {
    int u[N], v[N], p[N], way[N], minv[N];
    int i, j, k, l, min_cost = 0;
    for (i = 0; i < N; i++) {
        p[0] = i;
        k = 0;
        for (j = 0; j < N; j++) {
            minv[j] = INT_MAX;
            way[j] = -1;
        }
        do {
            l = p[k];
            int delta = INT_MAX, next = -1;
            for (j = 0; j < N; j++) {
                if (cost[l][j] < minv[j]) {
                    minv[j] = cost[l][j];
                    way[j] = k;
                }
                if (minv[j] < delta) {
                    delta = minv[j];
                    next = j;
                }
            }
            for (j = 0; j < N; j++) {
                if (j != next) {
                    minv[j] -= delta;
                }
            }
            k = next;
        } while (p[k] != -1);
    }
    printf("Minimum Cost: %d\n", min_cost);
}

int main() {
    
    int cost[N][N] = {{9, 2, 7, 8},
                      {6, 4, 3, 7},
                      {5, 8, 1, 8},
                      {7, 6, 9, 4}};
    solveAssignment(cost, N);
    return 0;
}
