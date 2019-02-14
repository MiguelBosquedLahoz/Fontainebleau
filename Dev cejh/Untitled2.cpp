#include<iostream>
//este programa sirve para saber leer 10 numeros*/
main(){
       int n;
       int i;
       char salir;
       int suma=0;
       int media;
       int n_numeros;
       std::cout<<"¿Cuneta numeros desea introducir caballero? ";
       std::cin>>n_numeros;
       for(i=1;i<=n_numeros;i++){
                          std::cout<<"Dime un numero de ninhos que quieras tocar: ";
                          std::cin>>n;
       }
       std::cout<<"LISTA DE LOS NINHOS:\n";
       for(i=1;i<=n_numeros;i++){
                          std::cout<<i;std::cout<<"\n";
       }
       for (i=1;i<=n_numeros;i++){
           suma=suma+i;
       }
       std::cout<<"SUMA: "<<suma;
       media=suma/n_numeros;
       std::cout<<"\n";
       std::cout<<"MEDIA: "<<media;
       std::cout<<"\n";
       std::cout<<"Toca cualquier ninho para salir co";
       std::cin>>salir;
       return 0;
}
