#include <stdio.h>

int main(){

    // n1 = 2, n2 = 3, n3 = 4, n4 = 1
    float n1, n2, n3, n4, media, nE;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    printf("Media: %0.1f\n", media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }else if(media < 5){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");

        scanf("%f", &nE);

        printf("Nota do exame: %0.1f\n", nE);

        media = (media + nE) / 2;

        if(media >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %0.1f\n", media);
    }

    return 0;
}

