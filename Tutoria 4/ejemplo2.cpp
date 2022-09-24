#include <iostream>
#include <conio.h>
#include <string.h>
// declaranddo la libreria para el uso de pilas
#include <stack>

using namespace std;

int main(){
  stack <char> fraseInv;

  string frase;

    cout<<"Ingrese una frase: ";
    // metodo getline para leer una frase
    getline(cin,frase);

    // invirtiendo la frase
    for(int i = 0; i < frase.length(); i++){
        fraseInv.push(frase[i]);
    }

    // mostrando la frase invertida
    cout<<"La frase invertida es: ";
    while(!fraseInv.empty()){
        cout<<fraseInv.top();
        fraseInv.pop();
    }

    cout<<"\nLa pila esta vacia"<<endl;
  
    getch();
    return 0;
}