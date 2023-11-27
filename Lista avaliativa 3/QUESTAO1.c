#include <stdio.h>
#include <string.h>

// Fun��o para converter um caractere romano em valor decimal
int valorRomano(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0; // Caractere inv�lido
    }
}

// Fun��o para converter um n�mero romano em decimal
int romanoParaDecimal(char *romano) {
    int resultado = 0;
    int i;

    for (i = 0; i < strlen(romano); i++) {
        int valorAtual = valorRomano(romano[i]);
        int valorProximo = (i + 1 < strlen(romano)) ? valorRomano(romano[i + 1]) : 0;

        if (valorAtual < valorProximo) {
            resultado += valorProximo - valorAtual;
            i++; // Avan�a dois caracteres
        } else {
            resultado += valorAtual;
        }
    }

    return resultado;
}

// Fun��o para converter um n�mero decimal em bin�rio
void decimalParaBinario(int decimal, char *binario) {
    if (decimal == 0) {
        binario[0] = '0';
        binario[1] = '\0';
        return;
    }

    int indice = 0;
    while (decimal > 0) {
        binario[indice++] = (decimal % 2) + '0';
        decimal /= 2;
    }

    binario[indice] = '\0';

    // Inverte a string bin�ria
    int inicio = 0;
    int fim = indice - 1;
    while (inicio < fim) {
        char temp = binario[inicio];
        binario[inicio] = binario[fim];
        binario[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char romano[13];
    char binario[32]; // Armazenar� a representa��o bin�ria

    // Recebe o n�mero romano
    scanf("%s", romano);

    // Converte para decimal
    int decimal = romanoParaDecimal(romano);

    // Converte decimal para bin�rio
    decimalParaBinario(decimal, binario);

    // Imprime a representa��o bin�ria
    printf("%s na base 2: %s\n", romano, binario);

    // Imprime a representa��o decimal
    printf("%s na base 10: %d\n", romano, decimal);

    // Imprime a representa��o hexadecimal
    printf("%s na base 16: %x\n", romano, decimal);

    return 0;
}
