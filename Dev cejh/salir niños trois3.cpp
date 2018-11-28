#include<iostream>
int main(){
    //Este programa escribe la tabla de multiplicar que nos diga
    int numero;//Definicion de variables
    int i;
    char salir;
    std::cout<<"Que ninho desea tocar (1-10): ";
    std::cin>>numero;
    for(i=1;i<=10;i++){
        std::cout<< i;
        std::cout<< " x ";
        std::cout<< numero;
        std::cout<< " = ";
        std::cout<< i*numero;
        std::cout<< "\n";
    }
    std::cout<<"Toca culaquier ninho para salir: ";
    std::cin>> salir;
    return 0;
}
                 
