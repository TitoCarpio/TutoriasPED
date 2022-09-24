#include <iostream>
#include <conio.h>
#include <string.h>
// declaranddo la libreria para el uso de pilas
#include <stack>



using namespace std;

int main(){
    // declarando la pila
    stack <string> pila1;

    // agregando elementos a la pila
    pila1.push("MONICA");
    pila1.push("GERARDO");
    pila1.push("JOSE");
    pila1.push("WILLIAN");
    pila1.push("DIEGO");

    // mostrando el tamaño de la pila
    cout << "El tamano de la pila es: " << pila1.size() << endl;

    //mostrando el elemento superior de la pila
    cout << "El elemento superior de la pila es: " << pila1.top() << endl;

    // eliminando el elemento superior de la pila
    pila1.pop();
    pila1.pop();
    pila1.pop();
    pila1.pop();
    pila1.pop();

    // mostrando cantidad de elementos de la pila
    cout << "El tamano de la pila es: " << pila1.size() << endl;
    

    // forzando error del codigo al tratar de eliminar un elemento de una pila vacia
    pila1.pop();
    // este mensaje no se mostrara en pantalla debido a que el programa truena
    cout<<"hola"<<endl;

    getch();
    return 0;
}