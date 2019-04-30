#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;//funcion que servira para realizar la medicion de la palabra    
    }
    return l;
}

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);//hace al usuario escribir una palabra y luego la registra en la memoria 
         l=medida(aux);//tambien guarda la cantidad de letras que contiene
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);//crea un listado con las cinco paqlabras que ha registrado
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);//bucle for de hasta cinco vectore4s que muestra el listado de las cinco palabras
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
