/*
    calculateTwo.c
    Performs multiplication of two integers.
*/

#include <stdio.h>
#include "calculateTwo.h"

void calculateTwo(int a, int b)
{
    int result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);
}
