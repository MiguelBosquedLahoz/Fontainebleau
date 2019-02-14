#include<iostream>
main(){
       int salir;
       int i;
       int numero;
       std::cout<<"Dame un numero y te dire sus divisores ";
       std::cin>>numero;
       for (i=numero;i>0;i--){
           if(numero%i==0){
                       std::cout<<i;
                       std::cout<<"\n";
           }   
       }
       std::cout<<"Introduce cualquier tecla para salir: ";
       std::cin>>salir;
       return 0;
}
