#include <stdio.h>

int main() {

    int N, Y, M, D;

    //printf("Digite sua idade em dias:%d\n", N);
    scanf("%d", &N);

    Y = N / 365;
    N = N % 365;
    M = N / 30;
    D = N % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);

    return 0;
}
