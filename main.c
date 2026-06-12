#include <stdio.h>
#include "funciones.h"

int main(void)
{
    articulo_t articulos[CANT_ARTICULOS] = {0};

    printf("Bienvenido al TP1 de Info 2\n\n");

    /* Carga de articulos */
    cargar_art(articulos);

    /* Imprime articulos */
    printf("\nARTICULOS CARGADOS:");
    imprimir_art(articulos);

    /* Vuelve a imprimir articulos ordenados por el total */
    ordenar_art(articulos);
    printf("\nARTICULOS CARGADOS Y ORDENADOS POR TOTAL:");
    imprimir_art(articulos);

    return 0;
}
