#include <stdio.h>

int main(){

    int X;

    scanf("%d", &X);

    if(X % 2 != 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", X);
    }else if(X < 1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", X);
    }else if((X - 1896) %4 == 0){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", X);
    }

    if((X >= 1930) - 1930 % 4 == 0){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", X);
    }else if((X < 1930) - 1930 % 4 == 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de3 %d.\n", X);
    }

    return 0;
}
