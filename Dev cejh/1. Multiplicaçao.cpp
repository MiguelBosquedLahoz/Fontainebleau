#include<iostream>
float multiplicacion(float num1, float num2, float num3, float num4){
      float respuesta;
      respuesta=(num1*num2*num3*num4);
      return(respuesta);
}
int main(){
    char salir;
    float num1,num2,num3,num4;
    std::cout<<"Introduzca el primer numero: ";
    std::cin>>num1;
    std::cout<<"Introduzca el segundo numero: ";
    std::cin>>num2;
    std::cout<<"Introduzca el tercero numero: ";
    std::cin>>num3;
    std::cout<<"Introduzca el cuarto numero: ";
    std::cin>>num4;
    std::cout<<multiplicacion(num1,num2,num3,num4);
    std::cout<<"\nToque cualquier ninho para salir: ";
    std::cin>>salir;
    return 0;
}
