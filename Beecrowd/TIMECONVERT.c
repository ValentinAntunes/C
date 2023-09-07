#include <stdio.h>

int main()
{

    int H, M, S, N;

    scanf("%d", &N);

    H = N / 3600;
    N = N % 3600;
    M = N / 60;
    S = N % 60;

    printf("%d:%d:%d\n",H,M,S);

    return 0;
}
