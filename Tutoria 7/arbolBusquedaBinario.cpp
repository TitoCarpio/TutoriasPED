#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

// creamos la estructura de un nodo
struct nodo
{
    int dato;
    nodo *izq;
    nodo *der;
    nodo *padre;
};

// creamos el arbol
nodo *arbol = NULL;

// funcion de menu
void menu();
// prototipos de funciones que vamos a utilizar
nodo *crearNodo(int, nodo *);
void insertarNodo(nodo *&, int, nodo *);
void mostrarArbol(nodo *, int);
bool busquedaArbol(nodo *, int);
void eliminarNodo(nodo *&, int);
void eliminar(nodo *);

int main()
{

    menu();
    getch();
    return 0;
}

// funcion para crear un nodo
nodo *crearNodo(int n, nodo *padre)
{
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->der = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

// funcion para insertar un nodo al arbol
void insertarNodo(nodo *&arbol, int n, nodo *padre)
{
    if (arbol == NULL)
    { // cuando el arbol este vacio
        nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }
    else
    { // si el arbol tiene uno o mas elementos
        int valorRaiz = arbol->dato;

        if (n < valorRaiz)
        {
            insertarNodo(arbol->izq, n, arbol);
        }
        else
        { // si el dato es mayor que el dato raiz
            insertarNodo(arbol->der, n, padre);
        }
    }
}

// funcion para mostrar un menu
void menu()
{
    int dato, opcion;

    do
    {
        cout << "\t MENU \n";
        cout << "1. Insertar un nuevo nodo" << endl;
        cout << "2. Mostrar el arbol completo" << endl;
        cout << "3. Buscar un elemento en el arbol" << endl;
        cout << "4. Eliminar un nodo del arbol" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Digite un numero: ";
            cin >> dato;
            insertarNodo(arbol, dato, NULL); // insertamos el nodo al arbol
            cout << "\n";
            system("pause");
            break;
        case 2:
            cout << "Mostrar arbol \n ";
            mostrarArbol(arbol, 0);
            cout << "\n";
            system("pause");
            break;
        case 3:
            cout << "Digite el numero a buscar: ";
            cin >> dato;
            if (busquedaArbol(arbol, dato) == true)
            {
                cout << "El numero ha sido encontrado en el arbol";
            }
            else
            {
                cout << "El numero no ha sido encontrado en el arbol";
            }
            cout << "\n";
            system("pause");
            break;

        case 4:
            cout << "Digite el numero a eliminar: ";
            cin >> dato;
            eliminarNodo(arbol, dato);
            cout << "\n";
            system("pause");
            break;

        default:
            break;
        }
        system("cls");
    } while (opcion != 5);
}

// funcion para mostrar el arbol
void mostrarArbol(nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++)
        {
            cout << "   ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}

// Funcion de busqueda
bool busquedaArbol(nodo *arbol, int n)
{
    if (arbol == NULL)
    { // cuando el arbol este vacio
        return false;
    }
    else if (arbol->dato == n)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return busquedaArbol(arbol->izq, n);
    }
    else
    {
        return busquedaArbol(arbol->der, n);
    }
}

// funcion para eliminar un nodo del arbol
void eliminarNodo(nodo *&arbol, int n){
    if(arbol == NULL){ // si el arbol esta vacio
        return;
    }
    else if(n < arbol->dato){ // si el numero es menor que la raiz, buscamos en subarbol izquierdo
        eliminarNodo(arbol->izq, n);
    }
    else if(n > arbol->dato){// si el numero es mayor que la raiz, buscamos en subarbol derecho
        eliminarNodo(arbol->der, n);
    }
    else{
        eliminar(arbol);
    }
}

// funcion para eliminar un nodo
void eliminar(nodo *nodoEliminar){
    if(nodoEliminar->izq && nodoEliminar->der){ // si el nodo tiene 2 hijos
        nodo *menor = nodoEliminar->der;
        while(menor->izq){
            menor = menor->izq;
        }
        nodoEliminar->dato = menor->dato;
        eliminarNodo(nodoEliminar->der, menor->dato);
    }
    else if(nodoEliminar->izq){ // si el nodo tiene un hijo izquierdo
        if(nodoEliminar == nodoEliminar->padre->izq){
            nodoEliminar->padre->izq = nodoEliminar->izq;
        }
        else{
            nodoEliminar->padre->der = nodoEliminar->izq;
        }
    }
    else if(nodoEliminar->der){ // si el nodo tiene un hijo derecho
        if(nodoEliminar == nodoEliminar->padre->izq){
            nodoEliminar->padre->izq = nodoEliminar->der;
        }
        else{
            nodoEliminar->padre->der = nodoEliminar->der;
        }
    }
    else{ // si el nodo no tiene hijos
        if(nodoEliminar == nodoEliminar->padre->izq){
            nodoEliminar->padre->izq = NULL;
        }
        else{
            nodoEliminar->padre->der = NULL;
        }
    }
    delete nodoEliminar;
}
