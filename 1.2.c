#include <stdio.h>

int main() {
    int k = 0; 
    double sum = 0.0;  
    double number;
    while (scanf("%lf", &number) == 1) {
        sum += number;
        k++;
    }
    double average = sum / k;
    printf("%.2lf\n", average);
    return 0;
}
