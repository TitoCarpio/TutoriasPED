#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// crear un programa en C++ que permita ingresar a un usuario su nombre, su apellido y una cantidad x de notas 
// y luego calcular el promedio de las notas ingresadas y mostrar el resultado, este ejercicio se debe
// realizar con estructuras.

// 1. utilizar una estrtuctura de tipo de alumno ue contenga el nombre, el apellido y las notas
// 2. calcular el promedio de las notas
// 3. mostrar el resultado


// variable global para la cantidad de notas a ingresar
int n = 0;

// definir la estructura de tipo alumno
struct alumno
{
    string nombre;
    string apellido;
    float notas[];
};

// declaracion de una variable de tipo alumno
struct alumno estudiante ;

// prototipo de la funcion
// funcion para ingresar los datos del alumno
void ingresarDatos();
float calcularPromedio();
void mostrarResultado(float promedio);


int main()
{
    float promedio = 0;
    // llamar a la funcion para ingresar los datos del alumno
    ingresarDatos();
    // llamar a la funcion para calcular el promedio
    promedio = calcularPromedio();
    // mostrar el resultado
    mostrarResultado(promedio);
    

    getch();
    return 0;
}

void ingresarDatos()
{
    cout<<"______________________________________________________"<<endl;
    cout << "Ingrese el nombre del alumno: ";
    cin >> estudiante.nombre;
    cout << "Ingrese el apellido del alumno: ";
    cin >> estudiante.apellido;
    cout << "Ingrese la cantidad de notas a ingresar: ";
    cin >> n;
    // asignar el tamaño del arreglo de notas
    estudiante.notas[n];
    // ingresar las notas
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> estudiante.notas[i];
    }
}



float calcularPromedio()
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += estudiante.notas[i];
    }
    return suma / n;
}


void mostrarResultado(float promedio)
{
    cout<<"_____________________________________"<<endl;
    cout<<"El nombre del alumno es: "<<estudiante.nombre<< " "<<estudiante.apellido<<endl;
    cout<<"Obtuvo las calificaciones: ";
    for (int i = 0; i < n; i++)
    {
        cout<<estudiante.notas[i]<<" ";
    }

    cout<<endl;
    cout<<"El promedio final es: "<<promedio<<endl;
    cout<<"_____________________________________"<<endl;
   
}