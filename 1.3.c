#include <stdio.h>

int main() {
    int k = 0; 
    double sum = 0.0, smsq = 0.0;  
    double number;
    while (scanf("%lf", &number) == 1) {
        sum += number;
        smsq += number;
        k++;
    }
    double M = sum / k;
    double D = smsq / k - M*M;
    printf("%.2lf\n", D);
    return 0;
}