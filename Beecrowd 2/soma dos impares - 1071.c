#include <stdio.h>

int main(){

    int X, Y, i, soma;
    soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X < Y){
        for(i = X+1; i < Y; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }else{
        for(i = Y+1; i < X; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}


