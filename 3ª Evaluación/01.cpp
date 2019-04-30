#include<stdio.h>
#include<iostream>
int main(){
    char salir;
    int x;
    int y;
    x=3;
    y=5;
    //std::cout<<x;
    printf("Direccion x=%X\nDireccion y=%X",&x,&y);
    
    std::cout<<"\nPress F for fascist dicktator: ";
    std::cin>>salir;
    return 0;
}
