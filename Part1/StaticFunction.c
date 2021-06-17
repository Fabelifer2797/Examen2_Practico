#include <stdio.h>

/*
Función que realiza un cálculo simple de suma, entre tres valores enteros de entrada, y un valor counter
declarado como estático, que se inicializa en su valor por defecto, es decir 0. 
*/

int staticFunction(int x , int y , int z){

    static int counter;
    counter++;
    return (x + y + z + counter);
}


int main(){    

    return 0;
}