#include <stdio.h>
#include <time.h>


/*
Función que realiza un cálculo simple de suma, entre tres valores enteros de entrada, y un valor counter
declarado como estático, que se inicializa en su valor por defecto, es decir 0. 
*/

int staticFunction(int x , int y , int z){

    static int counter;
    counter++;
    return (x + y + z + counter);
}


/*
Función que realiza un cálculo simple de suma, entre tres valores enteros de entrada, y un valor counter
no estático, que se inicializa en su valor por defecto, es decir 0. 
*/

int noStaticFunction(int x , int y , int z){

    int counter;
    counter++;
    return (x + y + z + counter);
}


int main(){ 

    int result; // Resultado de aplicar las funciones staticFunction y noStaticFunction
    int i = 0; // Contador de las iteraciones de la función estática
    int k = 0; // COnyador de las iteraciones de la función no estática 
    double timeSpentStatic; // Tiempo total de ejecución de la función estática
    double timeSpentNoStatic; //Tiempo total de ejecución de la función no estática

    clock_t beginStatic = clock(); // Se comienza a contar el tiempo para función estática

    //Se realizan 100000 cálculos de la función estática, pasando como entrada el iterador
    for (i; i < 100000; i++){
        result = staticFunction(i,i,i);
    }

    clock_t endStatic = clock(); // Se finaliza el contador del tiempo
    timeSpentStatic = (double) (endStatic - beginStatic) / CLOCKS_PER_SEC; // Se calcula el tiempo total
    printf("Static function time spent: %f  seconds\n", timeSpentStatic); // Se imprime el tiempo total

    clock_t beginNoStatic = clock(); // Se comienza a contar el tiempo de la función no estática

    //Se realizan 100000 cálculos de la función no estática, pasando como entrada el iterador
    for (k; k < 100000; k++){
        result = noStaticFunction(k,k,k);
    }

    clock_t endNoStatic = clock(); // Se finaliza el contador del tiempo
    timeSpentNoStatic = (double) (endNoStatic - beginNoStatic) / CLOCKS_PER_SEC; //Se calcula el tiempo total
    printf("No Static function time spent: %f  seconds\n", timeSpentNoStatic); // Se imprime el tiempo total


    return 0;
}