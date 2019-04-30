//Programas sobre manejo de memoria
#include<stdio.h>
int main(){
    char palabra1[5];//ahora tenemos un vector de variables no enteras, en este caso, una concatenacion de letras
    char palabra2[5];
    int salir;//funcion de salida
    printf("Dime algo: ");//apela al usuario a escribir una palabra 
    scanf("%s",palabra1);//muestra la primera palabra definida en el primer vector durante la funcion anterior
    printf("\nDime algo mas: ");//apela al usuario a escribir otra palabra 
    scanf("%s",palabra2);//muestra la segunda palabra definida en el segundo vector durante la funcion anterior
    printf("direccion palabra1 = %x ",palabra1);//va a extraer la posicion en la memoria de la primera palabra 
    printf("palabra1 = %s\n",palabra1);//va a mostrar por pantalla la primera palabra 
    printf("direccion palabra2 = %x ",palabra2);//va a extraer la posicion en la memoria de la segunda palabra 
    printf("palabra2 = %s  ",palabra2);//va a mostrar por pantalla la posicion de la primera palabra 
    scanf("%i",&salir);//
