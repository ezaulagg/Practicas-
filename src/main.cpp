#include <iostream>
#include "Mascota.hpp"

int main(int argc, char const *argv[])
{
    std:: cout<<"hola mundo"<<std:: endl;
    Mascota firulais;
   
    for (size_t i = 0; i < 3; i++)
    {
        firulais.golpear();
    }
    std::cout<<"vida actual:"<<firulais.LeerVida()<<std::endl;
    
    for (size_t i = 0; i < 3; i++)
    {
        firulais.Acariciar();
    }
    std::cout<<"vida actual:"<<firulais.LeerVida()<<std::endl;
    
    
    return 0;
}
