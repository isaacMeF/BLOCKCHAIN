#include<iostream>
//Isaac Mejía F.

#include "block.hpp"
#include"blockchain.hpp"


int main(){

    
    Blockchain bc;

    bc.addBlock("PRUEBA");

    std::cout<<bc<<"\n";

    



    return 0;
}