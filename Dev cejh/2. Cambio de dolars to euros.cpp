#include<iostream>
float cambio(float dolars){
      float respuesta;
      respuesta=(dolars*0.86);
      return(respuesta);
}
int main(){
    char salir;
    float dolars;
    std::cout<<"Introduce una cantidad de dolars: ";
    std::cin>>dolars;
    std::cout<<"Me cago en dios tiene uste: "<<cambio(dolars)<<" paVos.";
    std::cout<<"\nToque cualquier ninho para salir: ";
    std::cin>>salir;
    return 0;
}
