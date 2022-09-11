#include <iostream>
#include <conio.h>
#include <stdlib.h> // libreria para usar new y delete
using namespace std;

void pedirDatos();
void mostrarDatos();

int nCalificaciones, *calificaciones;

int main(){

    pedirDatos();
    mostrarDatos();
    delete[] calificaciones; // liberar memoria

    getch();
    return 0;
}

void pedirDatos(){
    
    cout<<"Digite el numero de calificaciones: ";
    cin>>nCalificaciones;

    //reserva de memoria para un arreglo
    calificaciones = new int[nCalificaciones];

    for(int i=0; i<nCalificaciones; i++){
        cout<<"Digite una calificacion: ";
        cin>>calificaciones[i];
    }
  
}

void mostrarDatos(){
    cout<<"___________________________________________________\n";
    cout<<"\nMostrando las calificaciones que ingreso: "<<endl;
    for(int i=0; i<nCalificaciones; i++){
        cout<<*(calificaciones+i)<<" ";
    }
}   