# Parte Práctica: Examen #2

El presente repositorio, incluye los códigos de prueba creados durante la solución, de la parte práctica del segundo examen, del curso de Arquitectura de Computadores 1. La primera parte del código se enfoca en el análisis del calificador static, tanto para variables como para funciones, del lenguaje de programación C, donde se brinda un énfasis en el uso del call stack y la memoria estática, para variables con y sin el parámetro de static. Por otra parte, se incluye un código en el lenguaje de C++, donde se busca comprobar el desempeño de la memoria caché, cuando se utilizan contenedores tipo vector y list, correspondientes a la biblioteca estándar de STL.


### Pre-requisitos 📋

_El código fue realizado utilizando como sistema operativo, la distribución de Linux, Ubuntu 20.04. Además se utilizó como compilador del lenguace C/C++, la versión para Ubuntu de gcc 9.3.0. Como parte de las herramientas de análisis de los programas, se utilizó Valgrind, que nos proporciona un conjunto de herramientas libres para la depuración de problemas de memoria y rendimiento del código. Para instalar Valgrind, y la herramienta de kcachegrind utilizada en el proyecto,  se necesita ejecutar los siguientes comandos como usuario privilegiado en Linux:_

```
$ sudo apt-get install valgrind
$ sudo apt-get install kcachegrind
```

## Ejecutando las pruebas ⚙️

_Si se desea ejecutar lós códigos generados, para cada uno de las partes del problema analizado, basta con abrir un nuevo terminal en los directorios de Part1 o Part2, según necesite y ejecutar el siguiente comando:_

```
$ make
```
_Lo anterior realizará los pasos necesarios, para compilar, ejecutar y comenzar con el ánalisis de los códigos de prueba. En el caso del código de la parte 1, además de la compilación y ejecución de las distintas funciones, se genera por medio de gcc, el código en ASM. Si se desea eliminar la generación del código en ensamblador se debe ir al Makefile del directorio Part1, y eliminar las siguientes líneas en la sección de build:_

```
gcc -S StaticFunction.c
gcc -S NoStaticFunction.c
```
_Por otra parte, dentro de los Makefile de cada sección, se generan de manera automática los reportes del código por medio de la herramienta de Valgrind, y se ejecuta la herramienta de kcachegrind, para mostrar los reportes generados por medio de un GUI. Por default, se realiza un análisis de la memoria caché, utilizando la opción de:_

```
--cache-sim=yes
```
_La cual se incluye en la línea de build de los Makefile:_

```
valgrind --tool=callgrind --cache-sim=yes ./objectFile

```

_Donde objectFile representa el path, donde se encuentra el archivo ejecutable,resultado de la compilación ya sea del código C o C++. Y finalmente, para lanzar el GUI de kcachegrind y visualizar los datos de manera gráfica se utiliza el comando:_

```
kcachegrind callgrind.out.*
```

Dicho comando ya se incluye de manera correcta en los Makefile. El archivo callgrin.out.*, corresponde con el reporte generado luego de ejecutar el análisis de callgrind, donde el último parámetro indica con * representa el ID del proceso ejecutado, por lo tanto dicho número varía dependiendo del sistema donde se ejecute.

## Autores ✒️


* **Fabricio Elizondo** - *Estudiante de Ingeniería en Computadores* - [Git user](https://github.com/Fabelifer2797)
* **Bradly Valverde** - *Estudiante de Ingeniería en Computadores* - [Git user](https://github.com/Brad0914)
