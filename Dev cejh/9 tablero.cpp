#include<iostream>
main(){
       int tablero[5][5];
       int fil;
       int col;
       int rellenuto;
       char salir;
       for(fil=0;fil<=4;fil++){
           if(fil%2==0){
               rellenuto=0;
           }
               else{
                    rellenuto=1;
               }
               for(col=0;col<=4;col++){
                   tablero[fil][col]=rellenuto;
               }
       }
       for(fil=0;fil<=4;fil++){
           for(col=0;col<=4;col++){
               std::cout<<tablero[fil][col];
               }
       std::cout<<"\n";
       }
       std::cout<<" Toque cualquier ninho para salir ";
       std::cin>>salir;
       return 0;
}                                 
       
