#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <string.h>

#define CANT_ARTICULOS  60
#define CANT_SUCURSALES  3

#define SUCURSAL_1  0
#define SUCURSAL_2  1
#define SUCURSAL_3  2

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[CANT_SUCURSALES];
    int total;
} articulo_t;

/* Prototipos */
void cargar_art (articulo_t *articulos);
void imprimir_art (articulo_t *articulos);
void ordenar_art (articulo_t *articulos);
void cambio (articulo_t *a, articulo_t *b);

#endif
