#include<iostream>
//Este prtograma sirve para saber si los números saon pares o impares
main(){
       int salir;
       int n_maximo=100;
       int i;
       //i es una variable contadora
       for (i=1;i<=n_maximo;i++){
           if (i%2==0){
              std::cout<<i;
              std::cout<<" Es NINHO";
           }else{
                std::cout<<i;
                std::cout<<" Es NINHO RATA";
           }
           std::cout<<"\n";
       }
       std::cout<<"Toca cualquier ninho para salir: ";
       std::cin>> salir;
       return 0;
       }
