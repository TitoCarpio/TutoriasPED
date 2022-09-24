#include <iostream>
#include <conio.h>
#include <string.h>
// declaranddo la libreria para el uso de pilas
#include <stack>




using namespace std;

// declarando una estructura de tipo plato

struct platoDerRestaurant{
    string color;
    string material;
    string tipo;
};
// declaracion de tipos
typedef platoDerRestaurant plato;


int main(){
    // crear una pila de platos
    stack <plato> pilaDePlatos;
    bool continuar = true;

    // apilar platos
    do{
        char opcion = 's';
        cout<<"\n cantidad de platos actuales: "<<pilaDePlatos.size()<<endl;
        cout<<"Desea agregar un plato a la pila? (s/n): ";
        cin>>opcion;
        // esto hace que ignore el enter si no se ingreso nada
        cin.ignore();

        if(opcion == 's'){
            plato plato1;
            cout<<"Ingrese el color del plato: ";
            getline(cin,plato1.color);
            cout<<"Ingrese el material del plato: ";
            getline(cin,plato1.material);
            cout<<"Ingrese el tipo del plato: ";
            getline(cin,plato1.tipo);

            // apilar el plato
            pilaDePlatos.push(plato1);
        }else if(opcion == 'n'){
            continuar = false;
        }else
            cout<<"Opcion no valida"<<endl;
        
    }while(continuar);


    // desapilar platos
    cout<<"\nDesapilando platos"<<endl;

    while(!pilaDePlatos.empty()){
        plato plato1 = pilaDePlatos.top();
        cout<<"Color: "<<plato1.color<<endl;
        cout<<"Material: "<<plato1.material<<endl;
        cout<<"Tipo: "<<plato1.tipo<<endl;
        cout<<"-----------------"<<endl;
        pilaDePlatos.pop();
    }

    cout<<"\nLa pila esta vacia"<<endl;

    getch();
    return 0;
}