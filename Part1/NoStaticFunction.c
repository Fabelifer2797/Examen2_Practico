#include <stdio.h>


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

    return 0;
}