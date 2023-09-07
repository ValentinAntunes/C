#include <stdio.h>
 
int main() {
 
    double X, Y, CONSUM;
    
    //printf("Km :");
    scanf("%lf", &X);
    //printf("Liters :");
    scanf("%lf", &Y);
    
    CONSUM = X / Y;
    
    printf("%.3lf km/l\n", CONSUM);
    
    return 0;
}