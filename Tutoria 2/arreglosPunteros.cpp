#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int *puntero = nullptr;

    cout<<*numeros<<endl;
    cout<<numeros[0]<<endl;


    // asignando la direccion de un arreglo a un puntero    
    //puntero = &numeros[0]; 

    // otra de manera de asignar un arreglo a un puntero    
    puntero = numeros;

    // rrecorrer el arreglo con un puntero
    for (int i = 0; i < 5; i++)
    {
        cout<<*puntero++<<endl;
        
    }

    cout<<"______________________________________\n";
    // mostrar las direcciones de memoria de cada elemento del arreglo
    for (int i = 0; i < 5; i++)
    {
        cout<<puntero++<<endl;
    }

    getch();
    return 0;
}