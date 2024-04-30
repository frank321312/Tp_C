#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tasaHoraria;
    int nEmpleado = 0;
    int horaEmpleado;
    float nominaBruta = 0;

    printf("Ingrese la tasa horaria: ");
    scanf("\n%f", &tasaHoraria);

    if (tasaHoraria <= 0)
    {
        printf("\nError, la tasa horaria no puede ser negativa\n\n");
        horaEmpleado = 1;
    }
    
    while (horaEmpleado != 1)
    {
        nEmpleado++;

        printf("\n-----------------------------------------------");
        printf("\nEmpleado %1$d\n", nEmpleado);

        printf("\nNumero de horas que trabajo el empleado: ");
        scanf("%d", &horaEmpleado);

        if (horaEmpleado > 0 && horaEmpleado <= 40)
        {
            nominaBruta = tasaHoraria * horaEmpleado;
            printf("\nNomina bruta: %f", nominaBruta);
        }
        else if (horaEmpleado > 40)
        {
            nominaBruta = tasaHoraria * 40 + (tasaHoraria / 2 * (horaEmpleado - 40));
            printf("\nNomina bruta: %f", nominaBruta);
        }
        else {
            printf("\nError, numero no valido\n\n");
            horaEmpleado = 1;
        }

        nominaBruta = 0;
    }

    return 0;
}
