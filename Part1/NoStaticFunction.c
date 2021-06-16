#include <stdio.h>

int noStaticFunction(int x , int y , int z){

    int counter;
    counter++;
    return (x + y + z + counter);
}


int main(){    

    return 0;
}