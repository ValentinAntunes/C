#include <stdio.h>

int main(){

    int N, X;

    printf("Cadastre uma senha de 4 digitos:\n");
    scanf("%d", &N);
    printf("senha cadastrada: %d\n", N);

    //printf("Digite a senha cadastrada anteriormente:\n")
    scanf("%d", &X);

    while(X != N){
        printf("senha invalida!\n");
        scanf("%d", &X);
    }

    if(X == N){
        printf("senha valida!\n");
    }

    return 0;
}

