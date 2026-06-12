# Trabajo Práctico N.º 1 - Informática II
Refactor del código de un [final de Informática I](https://github.com/DamRCorba/Informatica-2/tree/main/01_Resolucion_Final_Informatica_1) utilizando estructuras, funciones y separación de archivos.
## Funcionamiento
Al inicializar se solicitará la descripción del artículo, la sucursal y la cantidad a registrar.\
Si la descripción ingresada ya fue cargada previamente, se reutiliza el mismo registro (no se crea uno nuevo) y se suma la cantidad a la sucursal indicada.\
En cada carga se pedirá si se quiere ingresar otro artículo:

- Caso afirmativo, se permitirá cargar un nuevo artículo.
- Caso negativo, finalizará la carga de datos y mostrará por pantalla el listado de artículos ingresados.

Una vez finalizada la carga, el listado será ordenado en forma descendente según el total de unidades registradas y se volverá a mostrar por pantalla.