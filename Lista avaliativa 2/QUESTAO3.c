#include <stdio.h>
#include <string.h>

void somarMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtrairMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplicarMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrizA[4][4], matrizB[4][4], resultado[4][4];
    char operacao[20];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somarMatrizes(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "sub") == 0) {
        subtrairMatrizes(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "mult") == 0) {
        multiplicarMatrizes(matrizA, matrizB, resultado);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
