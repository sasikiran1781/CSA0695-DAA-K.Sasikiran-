#include <stdio.h>

#define V 4
#define INF 99999

int tsp(int graph[V][V], int pos, int visited, int dp[V][1 << V]) {
    if (visited == (1 << V) - 1)
        return graph[pos][0];

    if (dp[pos][visited] != -1)
        return dp[pos][visited];

    int ans = INF;
    for (int city = 0; city < V; city++) {
        if (!(visited & (1 << city)))
            ans = (ans < graph[pos][city] + tsp(graph, city, visited | (1 << city), dp)) ? ans : graph[pos][city] + tsp(graph, city, visited | (1 << city), dp);
    }

    return dp[pos][visited] = ans;
}

int main() {
    int graph[V][V] = {{0, 10, 15, 20},
                       {10, 0, 35, 25},
                       {15, 35, 0, 30},
                       {20, 25, 30, 0}};

    int dp[V][1 << V];
    for (int i = 0; i < V; i++)
        for (int j = 0; j < (1 << V); j++)
            dp[i][j] = -1;

    printf("Minimum cost: %d\n", tsp(graph, 0, 1, dp));
    return 0;
}
