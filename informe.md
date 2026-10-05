Informe - Direccionamiento de Memoria en C++
Introducción

En esta actividad se trabajó el concepto de direccionamiento de memoria en C++. Se utilizaron variables, punteros, referencias, arreglos y memoria dinámica para observar cómo se almacenan y modifican los datos en memoria.
También se identificaron las principales zonas de memoria utilizadas por un programa: stack, heap y code.

Actividad 1

En esta actividad se creó una variable de tipo entero y se mostró su dirección de memoria utilizando el operador &.
Después se utilizó un puntero para modificar el valor de la variable de manera indirecta.
El programa permitió observar que, aunque el valor de la variable cambia, su dirección de memoria permanece igual durante la ejecución.

Actividad 2

En esta actividad se utilizó un puntero para acceder y modificar una variable.
También se creó una referencia a la misma variable. La referencia permitió modificar directamente el valor utilizando otro nombre para la variable original.
Se mostraron las direcciones de la variable, del puntero y de la referencia para observar la diferencia entre estos elementos.

Actividad 3

Se creó un arreglo de números enteros y se utilizó un puntero para recorrer sus elementos.
Primero se mostró el contenido original del arreglo y posteriormente se modificaron sus valores utilizando el puntero.
Esto permitió observar cómo se puede acceder a diferentes posiciones de un arreglo mediante operaciones con punteros.

Actividad 4

En esta actividad se utilizó la asignación dinámica de memoria mediante new.
Se creó una matriz de enteros de forma dinámica y se utilizaron punteros para recorrer sus filas y columnas.
Después de terminar de utilizar la matriz, se liberó la memoria utilizando delete[].
El uso de delete[] es necesario para liberar correctamente la memoria reservada dinámicamente.
Extra: Stack, Heap y Code

En esta parte se identificaron tres zonas de memoria utilizadas por el programa.
Stack

El stack almacena principalmente variables locales y la información relacionada con las llamadas a funciones.
Para demostrar esta zona se utilizó una variable local y se mostró su dirección de memoria.
Heap

El heap es utilizado para almacenar memoria reservada dinámicamente.
Se utilizó new para reservar memoria y se mostró la dirección de la memoria reservada.
Finalmente, se utilizó delete para liberar dicha memoria.
Code

La zona de code contiene las instrucciones del programa y las funciones que se ejecutan.
Para demostrar esta zona se mostró la dirección de una función del programa.
Las direcciones obtenidas pueden cambiar dependiendo del sistema operativo, compilador y ejecución del programa.
Conclusiones

La actividad permitió comprender cómo funcionan las direcciones de memoria en C++ y cómo los punteros permiten acceder y modificar datos de manera indirecta.
También se pudo observar la diferencia entre la memoria utilizada para variables locales, la memoria reservada dinámicamente y la zona donde se encuentran las instrucciones del programa.
Finalmente, se comprendió la importancia de liberar correctamente la memoria reservada mediante new utilizando delete o delete[].