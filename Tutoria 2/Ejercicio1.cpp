#include <iostream>
#include <conio.h>

using namespace std;

// 1. solicitar al usuario un dato y almacenarlo en una variable
// 2. verificar si el dato es par o impar
// 3. hacer un menu para el usuario

// Prototipos de funciones
int solicitarDato();
void verificarDato(int *);
int solicitarOpcion();

int main()
{
    int numero = 0;
    int opcion = 0;

    // creando menu de usuario
    do
    {
        numero = solicitarDato();
        verificarDato(&numero);
        opcion = solicitarOpcion();
    } while (opcion != 2);

    getch();
    return 0;
}

int solicitarDato()
{
    int dato = 0;
    cout << "______________________________________\n";
    cout << "Ingrese un numero: ";
    cin >> dato;
    return dato;
}

void verificarDato(int *dato)
{
    if (*dato % 2 == 0)
    {
        cout << "El numero es par\n";
    }
    else
    {
        cout << "El numero es impar\n";
    }
}

int solicitarOpcion()
{
    int opcion = 0;
    cout << "______________________________________\n";
    cout << "1. Ingresar otro numero\n";
    cout << "2. Salir\n";
    cout << "______________________________________\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout << "______________________________________\n";

    return opcion;

}