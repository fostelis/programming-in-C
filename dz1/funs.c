#include <stdio.h>
#include <windows.h>

// 1.2.1
int fun_1 () {
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

// 1.2.4
int fun_2 () {
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

// 1.2.5
int fun_3 () {
    int k = 0;
    double sum = 0.0, smsq = 0.0;
    double number;
    while (scanf("%lf", &number) == 1) {
        sum += number;
        smsq += number*number;
        k++;
    }
    double M = sum / k;
    double D = smsq / k - M*M;
    printf("%.2lf\n", D);
    return 0;
}

// 1.2.8
int fun_4 () {
    int pos = 0, neg = 0,  nl = 0,  number;
    while (scanf("%d", &number) == 1) {
        if (number > 0) {
            pos += 1;
        }
        else if (number < 0) {
            neg += 1;
        }
        else {
            nl += 1;
        }
    }
    printf("%.d\n", pos);
    printf("%.d\n", neg);
    printf("%.d\n", nl);
    return 0;
}

// 1.2.21
int fun_5 () {
    int k = 0, number,  x;
    scanf("%d", &x);
    while (scanf("%d", &number) == 1) {
        if (number == x) {
            k++;
        }
    }
    printf("%.d\n", k);
    return 0;
}

// 1.2.22
int fun_6 () {
    int i = 0, number,  x,  k = 0, flag = 0;
    scanf("%d", &x);
    while (scanf("%d", &number) == 1) {
        k++;
        if (number == x && !flag) {
            i = k;
            flag = 1;
        }
    }
    printf("%.d\n", i);
    return 0;
}

// 1.2.23
int fun_7 () {
    int i = 0, number,  x,  k = 0;
    scanf("%d", &x);
    while (scanf("%d", &number) == 1) {
        k++;
        if (number == x) {
            i = k;
        }
    }
    printf("%.d\n", i);
    return 0;
}

// 1.2.24
int fun_8 () {
    int number, x;
    scanf("%d", &x);
    int mn = x, mx = x;
    while (scanf("%d", &number) == 1) {
        if (number > mx) {
            mx = number;
        }
        else if (number < mn) {
            mn = number;
        }
    }
    printf("%.d\n", mn);
    printf("%.d\n", mx);
    return 0;
}

// 1.2.25
int fun_9 () {
    int number, mx, pos = 1, k = 1;
    scanf("%d", &number);
    mx = number;
    while (scanf("%d", &number) == 1) {
        k++;
        if (number > mx) {
            mx = number;
            pos = k;
        }
    }
    printf("%d\n",pos);
    return 0;
}

// 1.2.26
int fun_10 () {
    int number, mn, k = 1;
    scanf("%d", &number);
    mn = number;
    while (scanf("%d", &number) == 1) {
        if (number < mn) {
            mn = number;
            k = 1;
        }
        else if (number == mn) {
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}

// 1.2.27
int fun_11 () {
    int number, mn, k = 1, frst=1,  lst=1;
    scanf("%d", &number);
    mn = number;
    while (scanf("%d", &number) == 1) {
        k++;
        if (number < mn) {
            frst = k;
            mn = number;
            lst = k;
        }
        else if (number == mn) {
            lst = k;
        }
    }
    printf("%d\n",frst);
    printf("%d\n",lst);
    return 0;
}

// 1.2.43
int fun_12 () {
    int n, cur, prev, len=1, k = 0;
    scanf("%d", &n);
    scanf("%d", &prev);
    while (scanf("%d", &cur) == 1) {
        if (cur == prev) {
            len++;
            prev = cur;
        } else {
            if (len >= n) {
                k++;
            }
            len = 1;
            prev = cur;
        }
    }
    if (len >= n) {
        k++;
    }
    printf("%d\n", k);
    return 0;
}