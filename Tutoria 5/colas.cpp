#include <iostream>
#include <string>
#include <conio.h>
// incluir la libreria para el uso de colas
#include <queue>

using namespace std;

int main(){
    // declarando una cola
    queue <string> colaTutorados;

    // agregar elementos a la cola
    colaTutorados.push("DIEGO");
    colaTutorados.push("JOSE");
    colaTutorados.push("MONICA");
    colaTutorados.push("WILLIAM");
    colaTutorados.push("GERARDO");


    // mostrar el elemento que se encuentra al frente de la cola
    cout << "El elemento que se encuentra hasta adelnate es : "<< colaTutorados.front() << endl;

    // mostrar el elemento que se encuentra al final de la cola
    cout << "El elemento que se encuentra hasta atras es : "<< colaTutorados.back() << endl;

    // eliminar elemntos de la cola
    colaTutorados.pop(); // eliman a DIEGO
    colaTutorados.pop(); // elimina a JOSE

    // mostrar la cantidad de elementos que se encuentran en la cola
    cout << "La cantidad de elementos que se encuentran en la cola es : "<< colaTutorados.size() << endl;


    colaTutorados.pop(); // elimina a MONICA
    colaTutorados.pop(); // elimina a WILLIAM
    colaTutorados.pop(); // elimina a GERARDO

     // mostrar la cantidad de elementos que se encuentran en la cola
    cout << "La cantidad de elementos que se encuentran en la cola es : "<< colaTutorados.size() << endl;

    getch();
    return 0;
}