// Nombre     : Mayor.cpp
// Descripcin : Dados dos numeros indicar cual es el mayor
// Alumnos    : Sebastian Cea,   Leg: 1580048
//              Adrián Arakaki,  Leg: 1561650
//              Facundo Dalmau,  Leg: 1561637
//              Leonel Pallares, Leg:
// Fecha      : 20170408


#include<iostream>
int main()
{
    int numero1;
    int numero2;

    std::cout<<"Escriba dos numeros enteros para comparar\n";
    std::cin>>numero1>>numero2;

        if(numero1==numero2){
            std::cout<<numero1<<" es igual a "<<numero2;
        }
            else{

                    if(numero1>numero2){
                        std::cout<<numero1<<" es mayor a "<<numero2;
                        }
                            else{
                                    std::cout<<numero2<<" es mayor a "<<numero1;
                                }
                }
    std::cin.get();
    std::cin.get();
}

