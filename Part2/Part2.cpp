#include <iostream>
#include <vector>
#include <list>
#include <random>

//Se inicializan los parámetros correspondientes para obtener el random entre -1 y 1
std::default_random_engine generator;
std::uniform_real_distribution<double> distribution(-1,1);
double randomNumber;


// Función para generar el contenedor tipo vector
void generateVector(){

    std::vector<double> vectorTest;
    std::vector<double>::iterator itVector;
    double y;
    double x;
    int counter = 0;

    //Se agregan 100000 valores random al vector
    for (int i = 0; i < 100000; i++){
        randomNumber = distribution(generator);
        vectorTest.push_back(randomNumber);
    }

    //Por medio del iterador se recorre el vector, y se realiza el cálculo correspondiente. 
    for(itVector = vectorTest.begin(); itVector != vectorTest.end(); ++itVector){
        
        x = *itVector; //Valor del iterador en la posición actual
        y = (x * (counter + 1) + x * (counter) + x * (counter - 1)) / 3; //Resultado
        counter++; // Counter corresponde con el valor i de la fórmula
    } 

}

// Función para generar el contenedor tipo list
void generateList(){

    std::list<double> listTest;
    std::list<double>::iterator itList;
    double y;
    double x;
    int counter = 0;

    //Se agregan 100000 valores random al list    
    for (int i = 0; i < 100000; i++){
        randomNumber = distribution(generator);
        listTest.push_back(randomNumber);
    }

    //Por medio del iterador se recorre el vector, y se realiza el cálculo correspondiente. 
    for (itList = listTest.begin(); itList != listTest.end(); ++itList){
        x = *itList;//Valor del iterador en la posición actual
        y = (x * (counter + 1) + x * (counter) + x * (counter - 1)) / 3;//Resultado
        counter++;// Counter corresponde con el valor i de la fórmula
    }

}


int main() {
    
    // Se llama a las funciones para correr las pruebas
    generateVector();
    generateList();
    return 0;
}

