#include <iostream>
#include <vector>
#include <list>
#include <random>

std::default_random_engine generator;
std::uniform_real_distribution<double> distribution(-1,1);
double randomNumber;

void generateVector(){

    std::vector<double> vectorTest;
    std::vector<double>::iterator itVector;
    double y;
    double x;
    int counter = 0;

    for (int i = 0; i < 100000; i++){
        randomNumber = distribution(generator);
        vectorTest.push_back(randomNumber);
    }

    for(itVector = vectorTest.begin(); itVector != vectorTest.end(); ++itVector){
        
        x = *itVector;
        y = (x * (counter + 1) + x * (counter) + x * (counter - 1)) / 3;
        counter++;
    } 

}

void generateList(){

    std::list<double> listTest;
    std::list<double>::iterator itList;
    double y;
    double x;
    int counter = 0;


    for (int i = 0; i < 100000; i++){
        randomNumber = distribution(generator);
        listTest.push_back(randomNumber);
    }

    for (itList = listTest.begin(); itList != listTest.end(); ++itList){
        x = *itList;
        y = (x * (counter + 1) + x * (counter) + x * (counter - 1)) / 3;
        counter++;
    }

}


int main() {
    
    generateVector();
    generateList();
    return 0;
}

