/*
    calculateOne.c
    Performs addition of two integers.
*/

#include <stdio.h>
#include "calculateOne.h"

void calculateOne(int a, int b)
{
    int result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);
}
