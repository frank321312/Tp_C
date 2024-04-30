#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generarNumeroAleatorio();

int genegenerarNumeroAleatorio()
{
    return rand() % 2;;
}

int main()
{
    int cara = 0;
    int cruz = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        if (genegenerarNumeroAleatorio() == 0)
        {
            printf("\nCruz\n");
            cruz++;
        }
        else
        {
            printf("\nCara\n");
            cara++;
        }
    }
    
    printf("\nCara: %d\n", cara);
    printf("\nCruz: %d\n", cruz);

    return 0;
}