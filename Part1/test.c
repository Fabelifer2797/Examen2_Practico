#include <stdio.h>
#include <time.h>



int staticFunction(int x , int y , int z){

    static int counter;
    counter++;
    return (x + y + z + counter);
}


int noStaticFunction(int x , int y , int z){

    int counter;
    counter++;
    return (x + y + z + counter);
}


int main(){ 

    int result;
    int i = 0;
    int k = 0;
    double timeSpentStatic;
    double timeSpentNoStatic;

    clock_t beginStatic = clock();

    for (i; i < 100000; i++){
        result = staticFunction(i,i,i);
    }

    clock_t endStatic = clock();
    timeSpentStatic = (double) (endStatic - beginStatic) / CLOCKS_PER_SEC;
    printf("Static function time spent: %f  seconds\n", timeSpentStatic);

    clock_t beginNoStatic = clock();

    for (k; k < 100000; k++){
        result = noStaticFunction(k,k,k);
    }

    clock_t endNoStatic = clock();
    timeSpentNoStatic = (double) (endNoStatic - beginNoStatic) / CLOCKS_PER_SEC;
    printf("No Static function time spent: %f  seconds\n", timeSpentNoStatic);


    return 0;
}