#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int number;
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }
    printf("%d\n", sum);
    return 0;
}
