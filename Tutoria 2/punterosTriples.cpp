#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero = 20;
    int *puntero = &numero;
    int **punteroDoble = &puntero;
    int ***punteroTriple = &punteroDoble;

    // mostrar el valor de la variable numero con el puntero triple
    cout<<"Valor de la variable numero: "<<***punteroTriple<<endl;

    // mostrar la direccion de memoria de la variable numero con el puntero triple
    cout<<"Direccion de memoria de la variable numero: "<<punteroTriple<<endl;
    cout<<&numero<<endl;


    // modificando el valor de la variable numero con el puntero triple
    ***punteroTriple = 30;
    cout<<"El numero ahora es: "<<numero<<endl;




    getch();
    return 0;
}