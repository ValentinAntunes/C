#include <stdio.h>

int main(){

    int a, b, c, MAIOR;

    scanf("%d %d %d", &a, &b, &c);

    MAIOR = (a + b + abs(a - b)) / 2;

    if(MAIOR > c){
        printf("%d eh o maior\n", MAIOR);
    } else if(MAIOR < c){
        printf("%d eh o maior\n", c);
    }

    return 0;
}
