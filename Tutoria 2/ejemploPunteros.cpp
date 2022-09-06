#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero = 10;
    int *puntero = nullptr;


    // mostrando la direccion de memoria de la variable numero
    cout<<"La direccion de memoria de la variable numero es: "<<&numero<<endl;

    // asignado la direccion de memoria de la variable numero al puntero
    puntero = &numero;

    // mostrando la direccion de memoria del puntero
    cout<<"La direccion de memoria del puntero es: "<<puntero<<endl;

    // mostrando el valor de la variable numero mediante el puntero
    cout<<"El valor de la variable numero es: "<<*puntero<<endl;

    getch();
    return 0;
}