#include<iostream>
//Definimos la funci�n fuera de main
int mayor(int num1, int num2, int num3){
	int respuesta;
	if(num1>num2 && num1>num3){
		respuesta=num1;
	}
	if(num2>num3 && num2>num1){
		respuesta=num2;
	}
	if(num3>num1 && num3>num2){
		respuesta=num3;
	}
	return respuesta;
}
int main(){
    char salir;
	int num1,num2,num3;
	//Leo un n�mero entero
	std::cout<<"Introduce un numero: ";
	std::cin>>num1;
	//Leo otro n�mero entero
	std::cout<<"Introduce otro numero: ";
	std::cin>>num2;
	//Leo otro n�mero entero
	std::cout<<"Introduce otro numero: ";
	std::cin>>num3;
	//INVOCO A LA FUNCI�N.Lo env�o a una funcion que los compara
	std::cout<<"El mayor es: "<<mayor(num1,num2,num3);
	std::cout<<"\nToca cualquier tecla para salir: ";
	std::cin>>salir;
	return 0;
}
