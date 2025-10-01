#include <stdio.h>
#include <windows.h>
#include "funs.h"

int choice_1(void)
{
    SetConsoleOutputCP(CP_UTF8);
    int var;
    printf("Выберите задание, для которого нужно запустить код:\n");
    printf("\t 1 - 1.2.1\n");
    printf("\t 2 - 1.2.4\n");
    printf("\t 3 - 1.2.5\n");
    printf("\t 4 - 1.2.8\n");
    printf("\t 5 - 1.2.21\n");
    printf("\t 6 - 1.2.22\n");
    printf("\t 7 - 1.2.23\n");
    printf("\t 8 - 1.2.24\n");
    printf("\t 9 - 1.2.25\n");
    printf("\t 10 - 1.2.26\n");
    printf("\t 11 - 1.2.27\n");
    printf("\t 12 - 1.2.43\n");
    printf("Напишите номер задания:\n");
    scanf("%d", &var);
    printf("====== \n");
    switch (var)
    {
        case 1:
            fun_1();
            break;
        case 2:
            fun_2();
            break;
        case 3:
            fun_3();
            break;
        case 4:
            fun_4();
            break;
        case 5:
            fun_5();
            break;
        case 6:
            fun_6();
            break;
        case 7:
            fun_7();
            break;
        case 8:
            fun_8();
            break;
        case 9:
            fun_9();
            break;
        case 10:
            fun_10();
            break;
        case 11:
            fun_11();
            break;
        case 12:
            fun_12();
            break;
        default:
            printf("Такого задания нет...\n");
            break;
    }
    return 0;
}