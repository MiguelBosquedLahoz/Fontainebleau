//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++; //funcion que de nuevo sirve para medir la palabras que se registran    
    }
    return l;
}

int main(){
     char *lista[10];
     int salir;
     char aux[15];
     int cont;
     int l;
     char *pauxiliar;
     int nveces;
     for(cont=0;cont<10;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);//bucle completo para leer cinco palabras
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);//crea un bucle para hacer una lista de las cinco palabras y las muestra por pantalla sin ordenar
     }
     //Ordenamiento
     for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        if(*lista[cont]>*lista[cont+1]){
            printf("\nCambio %s por %s",lista[cont],lista[cont+1]);
            pauxiliar=lista[cont];
            lista[cont]=lista[cont+1];
            lista[cont+1]=pauxiliar;//ordena la lista por orden alfabético
        }
      }
     }
     //Despues del ordenamiento
     printf("\nLISTA ORDENADA:");
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);//muestra por pantalla un alista ordenada 
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);//funcion estandar de salida del compilador
}
