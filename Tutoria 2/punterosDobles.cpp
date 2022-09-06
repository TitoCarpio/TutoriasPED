#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero = 20;
    int *dir_numero = nullptr;
    int **dir_dir_numero = nullptr;


    dir_numero = &numero;
    dir_dir_numero = &dir_numero;

    // mostrar el valor de la variable numero
    cout<<"Valor de la variable numero: "<<**dir_dir_numero<<endl;
    cout<<"______________________________________"<<endl;
    // mostrar la direccion de memoria de la variable numero
    cout<<"Direccion de memoria de la variable numero: "<<dir_dir_numero<<endl;
    cout<<"El puntero simple apunta a :"<<dir_numero<<endl;


    // modificando el valor de la variable numero con el puntero doble
    **dir_dir_numero = 30;

    cout<<"El numero ahora es: "<<numero<<endl;


    getch();
    return 0;
}