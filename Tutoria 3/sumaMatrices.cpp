#include <iostream>
#include <conio.h>
#include <stdlib.h> // libreria para usar new y delete

using namespace std;

void pedirDatos();
void sumarMatrices();
void mostrarDatos();


int **matriz1, **matriz2, **matriz3, nFilas, nColumnas;

int main(){

    pedirDatos();
    sumarMatrices();
    mostrarDatos();
    delete[] matriz1; // liberar memoria
    delete[] matriz2; // liberar memoria
    delete[] matriz3; // liberar memoriaE


    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nColumnas;

    //reserva de memoria para un arreglo
    matriz1 = new int*[nFilas];
    matriz2 = new int*[nFilas];
    matriz3 = new int*[nFilas];

    for(int i=0; i<nFilas; i++){
        matriz1[i] = new int[nColumnas];
        matriz2[i] = new int[nColumnas];
        matriz3[i] = new int[nColumnas];
    }

    cout<<"Digite los elementos de la matriz 1: "<<endl;
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz1+i)+j);
        }
    }

    cout<<"Digite los elementos de la matriz 2: "<<endl;
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz2+i)+j);
        }
    }
    cout<<"___________________________________________________\n";


}

void sumarMatrices(){
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            *(*(matriz3+i)+j) = *(*(matriz1+i)+j) + *(*(matriz2+i)+j);
        }
    }
}

void mostrarDatos(){
    cout<<"_________________________________________________\n";
    cout<<"Mostrando la matriz 1: "<<endl;
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<*(*(matriz1+i)+j)<<" ";
        }
        cout<<"\n";
    }

    cout<<"Mostrando la matriz 2: "<<endl;
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<*(*(matriz2+i)+j)<<" ";
        }
        cout<<"\n";
    }

    cout<<"El resultado de la suma de las dos matrices es: "<<endl;


    
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<*(*(matriz3+i)+j)<<" ";
        }
        cout<<"\n";
    }
}
