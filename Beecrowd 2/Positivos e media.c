#include <stdio.h>

int main(){

    float N, soma, media;
    int positivos, i;
    media = 0;
    positivos = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &N);
        if(N >= 0){
            positivos++;
            soma = soma + N;
        }
    }

    media = soma / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%0.1f\n", media);

    return 0;
}

