/*
    menu.c
    Displays menu options and returns user selection.
*/

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(void)
{
    int option;

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    printf("=============================\n");
    printf("         MAIN MENU           \n");
    printf("=============================\n");
    printf(" 1. Write to File\n");
    printf(" 2. Read from File\n");
    printf(" 3. Addition\n");
    printf(" 4. Multiplication\n");
    printf(" 5. Exit\n");
    printf("=============================\n");
    printf("Enter your choice: ");

    scanf("%d", &option);

    return option;
}
