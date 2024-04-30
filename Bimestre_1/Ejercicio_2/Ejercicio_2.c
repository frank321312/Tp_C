#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nroFactura;
    int codigoArticulo;
    int cantidadArticulo;
    int cantidadTotalArt = 0;
    int unidadArticuloUno = 0;
    int unidadArticuloDos = 0;
    int unidadArticuloTres = 0;
    int unidadArticuloCuatro = 0;
    
    float precioUnitario;
    float totalFactura = 0;
    float totalGeneneralFactura = 0;

    while (nroFactura != 0)
    {
        printf("Ingrese numero de factura: ");
        scanf("%d", &nroFactura);

        printf("\nIngrese codigo de articulo: ");
        scanf("%d", &codigoArticulo);

        printf("\nIngrese cantidad articulo: ");
        scanf("%d", &cantidadArticulo);

        printf("\nIngrese el precio del articulo: ");
        scanf("%f", &precioUnitario);

        totalFactura = precioUnitario * cantidadArticulo;

        if (codigoArticulo <= 0 || codigoArticulo > 5)
        {
            printf("\nError, no existe el codigo %d", codigoArticulo);
            nroFactura = 0;
            totalFactura = 0;
        }
        
        switch (codigoArticulo)
        {
        case 1:
            unidadArticuloUno += cantidadArticulo;
            break;
        case 2:
            unidadArticuloDos += cantidadArticulo;
            break;
        case 3:
            unidadArticuloTres += cantidadArticulo;
            break;
        case 4:
            unidadArticuloCuatro += cantidadArticulo;
            break;
        }

        totalGeneneralFactura =+ totalFactura;

        printf("\n------------------------------------------");
        printf("\n\nNumero factura: %d", nroFactura);
        printf("\n\nCodigo articulo: %d", codigoArticulo);
        printf("\n\nCantidad articulo: %d", cantidadArticulo);
        printf("\n\nPrecio unitario: %f", precioUnitario);
        printf("\n\nTotal factura: %f\n\n", totalFactura);
    }

    cantidadArticulo = unidadArticuloUno + unidadArticuloDos + unidadArticuloTres + unidadArticuloCuatro;

    printf("\n----------------------------------------------");
    printf("\n\nTotal de Unidades vendidas del articulo 1: %d", unidadArticuloUno);
    printf("\n\nTotal de Unidades vendidas del articulo 2: %d", unidadArticuloDos);
    printf("\n\nTotal de Unidades vendidas del articulo 3: %d", unidadArticuloTres);
    printf("\n\nTotal de Unidades vendidas del articulo 4: %d", unidadArticuloCuatro);
    printf("\n\nTotal de articulos vendidos: %d", cantidadTotalArt);
    printf("\n\nTotal general factura: %f", totalGeneneralFactura);    

    return 0;
}