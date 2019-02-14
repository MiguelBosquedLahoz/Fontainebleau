#include<iostream>
//Este programa sirve para saber si los números son pares o impares
main(){
       int salir;
       int nmax=100;
       int i;
       //i es una variable contadora
       for (i=1;i<=nmax;i++){
           if(i%2==0){
                     std::cout<<i;
                     std::cout<<" Es PAR";
           }else{
                     std::cout<<i;
                     std::cout<<" Es IMPAR";
           }
           std::cout<<"\n";
       }
       std::cout<<"Introduce cualquier tecla para salir: ";
       std::cin>>salir;
       return 0;
       }
