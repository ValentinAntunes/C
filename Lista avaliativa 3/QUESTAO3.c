#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int placaValida(char *placa) {
    if (strlen(placa) == 8 && placa[3] == '-' &&
        isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
        return 1;
    }
    else if (strlen(placa) == 7 &&
             isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
             isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) {
        return 1;
    }
    return 0;
}

int diaSemanaValido(char *diaSemana) {
    char diasValidos[7][15] = {"DOMINGO", "SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO"};

    for (int i = 0; i < 7; i++) {
        if (strcmp(diaSemana, diasValidos[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char placa[11];
    char diaSemana[15];

    scanf("%s", placa);
    scanf("%s", diaSemana);

    if(!placaValida(placa) && !diaSemanaValido(diaSemana)){
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
        return 0;
    } else if (!diaSemanaValido(diaSemana)) {
        printf("Dia da semana invalido\n");
        return 0;
    } else if (!placaValida(placa)) {
        printf("Placa invalida\n");
        return 0;
    }

    int ultimoDigito = isdigit(placa[strlen(placa) - 1]) ? (placa[strlen(placa) - 1] - '0') : (placa[strlen(placa) - 2] - '0');

    strlwr(diaSemana);

    if (strcmp(diaSemana, "domingo") == 0 || strcmp(diaSemana, "sabado") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
    } else if (strcmp(diaSemana, "segunda-feira") == 0) {
        if (ultimoDigito == 0 || ultimoDigito == 1) {
            printf("%s nao pode circular %s\n", placa, diaSemana);
        } else {
            printf("%s pode circular %s\n", placa, diaSemana);
        }
    } else if (strcmp(diaSemana, "terca-feira") == 0) {
        if (ultimoDigito == 2 || ultimoDigito == 3) {
            printf("%s nao pode circular %s\n", placa, diaSemana);
        } else {
            printf("%s pode circular %s\n", placa, diaSemana);
        }
    } else if (strcmp(diaSemana, "quarta-feira") == 0) {
        if (ultimoDigito == 4 || ultimoDigito == 5) {
            printf("%s nao pode circular %s\n", placa, diaSemana);
        } else {
            printf("%s pode circular %s\n", placa, diaSemana);
        }
    } else if (strcmp(diaSemana, "quinta-feira") == 0) {
        if (ultimoDigito == 6 || ultimoDigito == 7) {
            printf("%s nao pode circular %s\n", placa, diaSemana);
        } else {
            printf("%s pode circular %s\n", placa, diaSemana);
        }
    } else if (strcmp(diaSemana, "sexta-feira") == 0) {
        if (ultimoDigito == 8 || ultimoDigito == 9) {
            printf("%s nao pode circular %s\n", placa, diaSemana);
        } else {
            printf("%s pode circular %s\n", placa, diaSemana);
        }
    }

    return 0;
}
