#include "funciones.h"

/* Carga de articulos, si ya existe la descripcion pregunta para actualizar la cantidad */
void cargar_art(articulo_t articulos[])
{
    int  opc = 0, i, indice, sucursal;
    char descripcion[90];

    do {
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s", descripcion);

        i = 0;
        while (articulos[i].descripcion[0] && strcmp(descripcion, articulos[i].descripcion))
            i++;

        indice = i;
        strcpy(articulos[indice].descripcion, descripcion);

        if (articulos[indice].total > 0)
            printf("Articulo ya registrado: %s\n", articulos[indice].descripcion);

        do {
            printf("Para que sucursal? (1, 2, 3): ");
            scanf("%d", &sucursal);
        } while (sucursal < 1 || sucursal > CANT_SUCURSALES);

        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulos[indice].cantidad_sucursal[sucursal - 1]);

        articulos[indice].total = 0;
        for (i = 0; i < CANT_SUCURSALES; i++)
            articulos[indice].total += articulos[indice].cantidad_sucursal[i];

        printf("Desea ingresar otro articulo? 1-Si, 2-No: ");
        scanf("%d", &opc);

    } while (opc == 1);
}

/* Imprime la tabla de articulos cargados, para si encuentra una descripcion vacia */
void imprimir_art(articulo_t articulos[])
{
    int i = 0;
    printf("\n%-20s %-12s %-12s %-12s %-8s\n",
           "Articulo", "Sucursal 1", "Sucursal 2", "Sucursal 3", "Total");
    printf("─────────────────────────────────────────────────────────────────\n");

    while (i < CANT_ARTICULOS && articulos[i].descripcion[0]) {
       printf("%-20s %-12d %-12d %-12d %-8d\n",
               articulos[i].descripcion,
               articulos[i].cantidad_sucursal[SUCURSAL_1],
               articulos[i].cantidad_sucursal[SUCURSAL_2],
               articulos[i].cantidad_sucursal[SUCURSAL_3],
               articulos[i].total);
        i++;
    }
}

/* Intercambia el contenido de dos articulos */
void cambio(articulo_t *a, articulo_t *b)
{
    articulo_t temp = *a;
    *a = *b;
    *b = temp;
}

/* Ordena los articulos de mayor a menor por total */
void ordenar_art(articulo_t articulos[])
{
    int i, pasada;

    for (pasada = 1; pasada < CANT_ARTICULOS; pasada++) {
        for (i = 0; i < CANT_ARTICULOS - 1; i++) {
            if (articulos[i].total < articulos[i + 1].total)
                cambio(&articulos[i], &articulos[i + 1]);
        }
    }
}
