#include <stdio.h>
#include <string.h>

double calcularForcaPonderada(char nomeTime[50], double forcas[11]) {
    double forcaTime = 0;


    double G = forcas[0];

    double L1 = forcas[1];
    double L2 = forcas[4];

    double Z1 = forcas[2];
    double Z2 = forcas[3];

    double V1 = forcas[5];
    double V2 = forcas[6];

    double M1 = forcas[7];
    double M2 = forcas[8];

    double A1 = forcas[9];
    double A2 = forcas[10];

    forcaTime = (8 * G + 10 * (L1 + L2) + 5 * (Z1 + Z2) + 8 * (V1 + V2) + 11 * (M1 + M2) + 12 * (A1 + A2)) / 100;

    return forcaTime;
}

int main() {
    char nomeTime1[50], nomeTime2[50];
    double forcasTime1[11] = {0};
    double forcasTime2[11] = {0};
    int jogadorIndex = 0;
    char linha[100];

    while (jogadorIndex < 24) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';
        if (linha[0] == '\0') {
            break;
        }

        if (jogadorIndex == 0) {
            strcpy(nomeTime1, linha);
        } else if (jogadorIndex == 12) {
            strcpy(nomeTime2, linha);
        } else {
            char nome[50], posicao;
            double forca;
            sscanf(linha, "%[^;];%c;%lf", nome, &posicao, &forca);

            if (jogadorIndex <= 11) {
                forcasTime1[jogadorIndex - 1] = forca;
            } else {
                forcasTime2[jogadorIndex - 12 - 1] = forca;
            }
        }

        jogadorIndex++;
    }

    double forcaPonderadaTime1 = calcularForcaPonderada(nomeTime1, forcasTime1);
    double forcaPonderadaTime2 = calcularForcaPonderada(nomeTime2, forcasTime2);

    printf("%s: %.2lf de forca\n", nomeTime1, forcaPonderadaTime1);
    printf("%s: %.2lf de forca\n", nomeTime2, forcaPonderadaTime2);

    if (forcaPonderadaTime1 > forcaPonderadaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaPonderadaTime2 > forcaPonderadaTime1) {
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}
