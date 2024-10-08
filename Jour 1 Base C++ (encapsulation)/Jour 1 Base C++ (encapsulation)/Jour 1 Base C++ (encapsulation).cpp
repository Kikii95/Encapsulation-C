#include <iostream>
#include <string>
#include <vector>
#include "Point.h"

int main()
{

    std::cout << "Bonjour :D !\n";


    std::vector<std::string>* sArray = new
        std::vector<std::string>();

    /*std::string UserInput;
    std::cin >> UserInput;

    sArray->push_back(UserInput);


    std::cout << sArray[0][0] << sArray[0][1];*/


    for (int i = 0; i < sArray->size(); i++) {
        //std::cout << sArray[0][i] << std::endl ;
        std::cout << (*sArray)[i] << std::endl ;
    }
  
    Point point;
    std::cout << point.ToString();
 


}



