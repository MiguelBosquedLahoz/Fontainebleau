#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
float matriz[35][35];
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<35;fil++){
        for(col=0;col<35;col++){
           matriz[fil][col]=rand()%10;
           std::cout<<matriz[fil][col];
    }
    std::cout<<"\n";
    }
    std::cout<<"\nToque cualquier ninho para salir: ";
    std::cin>>salir;
    return 0;
}
