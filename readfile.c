/*
    readFile.c
    Reads and displays contents of the text file.
*/

#include <stdio.h>
#include "readFile.h"

#define FILENAME "data.txt"

void readFile(void)
{
    int ch;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("Contents of file:\n");
    printf("-----------------------------\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    printf("\n-----------------------------\n");

    fclose(fp);
}
