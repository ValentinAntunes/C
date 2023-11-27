#include <stdio.h>
#include <math.h>

int main() {
    int meses;
    double aporteMensal, taxaJuros, montante;

    scanf("%d", &meses);

    scanf("%lf", &aporteMensal);

    scanf("%lf", &taxaJuros);

    // Cálculo do montante ao fim de cada mês
    for (int i = 1; i <= meses; i++) {
        montante = aporteMensal * (1 + taxaJuros) * ((pow(1 + taxaJuros, i) - 1) / taxaJuros);

        // Saída de dados
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, montante);
    }

    return 0;
}
