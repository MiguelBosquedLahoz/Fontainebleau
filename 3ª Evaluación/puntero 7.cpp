#include<stdio.h>
#include<stdlib.h>

int main(){
     char *lista[3];
     int salir;
     lista[0]=(char *) malloc(8*sizeof(char)); 
     lista[1]=(char *) malloc(7*sizeof(char));
     lista[2]=(char *) malloc(9*sizeof(char)); //el programa va a registrar en la memoria las tres palabras que se escriban a continuación
     printf("\nPrimer rey mago: ");
     scanf("%s",lista[0]);
     printf("\nSegundo rey mago: ");
     scanf("%s",lista[1]);     
     printf("\nTercero rey mago: ");
     scanf("%s",lista[2]);//se escriben las tres palabras y se guarda su dirección 
     printf("\nLOS TRES REYES MAGOS SON: ");
     printf("%s, ",lista[0]);
     printf("%s y ",lista[1]);
     printf("%s",lista[2]);//se ordena a la computadora que las tres palabras sean extraídas de la memoria para mostrarlas por la pantalla del compilador
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);//funcion estandar de salida
}
