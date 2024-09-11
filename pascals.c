#include <stdio.h>

void printPascal(int n) {
    for (int line = 0; line < n; line++) {
        int C = 1;
        for (int i = 0; i <= line; i++) {
            printf("%d ", C);
            C = C * (line - i) / (i + 1);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPascal(n);
    return 0;
}
