#include <stdio.h>
#include "menu.h"
#include "mainloop.h"

#define EXIT_OPTION 5

int main(void)
{
    int option;

    do
    {
        option = menu();

        if (option != EXIT_OPTION)
        {
            mainLoop(option);
        }

    } while (option != EXIT_OPTION);

    printf("Exiting program. Goodbye!\n");

    return 0;
}
