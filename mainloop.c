/*
    mainloop.c
    Routes selected menu options to appropriate module functions.
*/

#include <stdio.h>
#include "mainloop.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculateOne.h"
#include "calculateTwo.h"

void mainLoop(int option)
{
    switch (option)
    {
        case 1:
            writeFile();
            break;

        case 2:
            readFile();
            break;

        case 3:
            calculateOne(10, 5);
            break;

        case 4:
            calculateTwo(10, 5);
            break;

        default:
            printf("Invalid option. Please select a valid menu item.\n");
            break;
    }
}
