#include<iostream>
//este programa sirve para saber leer 10 numeros*/
main(){
       int num[10];
       int i;
       char salir;
       for(i=0;i<=10;i++){
                          std::cout<<"Dime un numero de ninhos que quieras tocar: ";
                          std::cin>>num[i];
       }
       std::cout<<"LISTA DE LOS NINHOS:\n ";
       for(i=0;i<=10;i++){
                          std::cout<< num[i];std::cout<<"\n";
       }
       std::cout<<"\n";
       std::cout<<"Toca cualquier ninho para salir";
       std::cin>>salir;
       return 0;
}
