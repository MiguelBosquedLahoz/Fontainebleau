#include<iostream>
main(){
       int salir;
       int i;
       int numero;
       std::cout<<"Deme un numero y te dire sus divisores ";
       std::cin>>numero;
       for (i=numero;i>0;i--){
           if(numero%i==0){
                       std::cout<<i;
                       std::cout<<"\n";
           }
       }
       std::cout<<"Toque cualquier ninho para salir: ";
       std::cin>> salir;
       return 0;
       }
