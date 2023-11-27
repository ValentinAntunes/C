#include <stdio.h>
#include <string.h>

// Função para converter um caractere romano em valor decimal
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
            return 0; // Caractere inválido
    }
}

// Função para converter um número romano em decimal
int romanoParaDecimal(char *romano) {
    int resultado = 0;
    int i;

    for (i = 0; i < strlen(romano); i++) {
        int valorAtual = valorRomano(romano[i]);
        int valorProximo = (i + 1 < strlen(romano)) ? valorRomano(romano[i + 1]) : 0;

        if (valorAtual < valorProximo) {
            resultado += valorProximo - valorAtual;
            i++; // Avança dois caracteres
        } else {
            resultado += valorAtual;
        }
    }

    return resultado;
}

// Função para converter um número decimal em binário
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

    // Inverte a string binária
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
    char binario[32]; // Armazenará a representação binária

    // Recebe o número romano
    scanf("%s", romano);

    // Converte para decimal
    int decimal = romanoParaDecimal(romano);

    // Converte decimal para binário
    decimalParaBinario(decimal, binario);

    // Imprime a representação binária
    printf("%s na base 2: %s\n", romano, binario);

    // Imprime a representação decimal
    printf("%s na base 10: %d\n", romano, decimal);

    // Imprime a representação hexadecimal
    printf("%s na base 16: %x\n", romano, decimal);

    return 0;
}
