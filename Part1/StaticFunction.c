#include <stdio.h>

int staticFunction(int x , int y , int z){

    static int counter;
    counter++;
    return (x + y + z + counter);
}


int main(){    

    return 0;
}