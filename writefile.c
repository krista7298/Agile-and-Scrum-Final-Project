/*
    writeFile.c
    Writes sample data to a text file.
*/

#include <stdio.h>
#include "writeFile.h"

#define FILENAME "data.txt"

void writeFile(void)
{
    FILE *fp = fopen(FILENAME, "w");

    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(fp, "Hello, this is sample data written to the file.\n");
    fprintf(fp, "Line 2: Writing additional information.\n");
    fprintf(fp, "Line 3: File write complete.\n");

    fclose(fp);
    printf("Data successfully written to file.\n");
}
