//STRASSENS MATRIX

#include <stdio.h>

#define MAX 2

void strassenMultiplication(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) 
{
    int P = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int Q = (A[1][0] + A[1][1]) * B[0][0];
    int R = A[0][0] * (B[0][1] - B[1][1]);
    int S = A[1][1] * (B[1][0] - B[0][0]);
    int T = (A[0][0] + A[0][1]) * B[1][1];
    int U = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int V = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = P + S - T + V;
    C[0][1] = R + T;
    C[1][0] = Q + S;
    C[1][1] = P + R - Q + U;
}

int main() 
{
    int A[MAX][MAX] = {{1, 2}, {3, 4}};
    int B[MAX][MAX] = {{5, 6}, {7, 8}};
    int C[MAX][MAX];
    strassenMultiplication(A, B, C);

    printf("Resultant matrix C:\n");
    for (int i = 0; i < MAX; i++) 
    {
        for (int j = 0; j < MAX; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
