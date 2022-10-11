#include <iostream>
#include <string>
#include <conio.h>
// incluir la libreria para el uso de colas
#include <queue>


using namespace std;

// creando un trabajo
struct trabajo{
    string usuario;
    string documento;
    int paginas;
    int tiempo;
};
typedef struct trabajo Trabajo;

// creando una impresora
struct impresora{
    queue <Trabajo> colaImpresion;
    int trabajosRealizados;
    int paginasUtilizadas;

};
typedef struct impresora Impresora;

// declarando una variable global de tipo impresora
Impresora epson380;


// declarar prototipos de funciones para la impresora
void agregar();
void consultar();
void imprimir();

int main(){

    epson380.trabajosRealizados = 0;
    epson380.paginasUtilizadas = 0;

    bool continuar = true;

    do{
        int opcion =0;
        cout<<"_______________________________________________"<<endl;
        cout << "1. Agregar trabajo" << endl;
        cout << "2. consultar estado actual"<< endl;
        cout << "3. imprimir cola de trabajo" << endl;
        cout << "4. salir" << endl;
        cout << "_______________________________________________"<<endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion; cin.ignore();


        switch(opcion){
            case 1: agregar(); break;
            case 2: consultar(); break;
            case 3: imprimir(); break;
            case 4: continuar = false; break;
            default: cout << "Opcion no valida" << endl; break;
        }

    }while(continuar);

    getch();
    return 0;
}

void agregar(){
    // solicitar datos del trabajo 
    Trabajo unTrabajo;
    cout<<"Digite su usuario: "; getline(cin, unTrabajo.usuario);
    cout <<"Digite el nombre del documento: "; getline(cin,unTrabajo.documento);
    cout<<"Cantidad de paginas: "; cin>>unTrabajo.paginas;
    // calculando el timpo por pagina
    unTrabajo.tiempo =  unTrabajo.paginas * 5;


    // agregando el trabajo a la cola
    epson380.colaImpresion.push(unTrabajo);

    // modificar el contador de trabajos
    epson380.trabajosRealizados ++;
    // contador de paginas
    epson380.paginasUtilizadas += unTrabajo.paginas;

}


void consultar(){
    cout<<"______________________________________________________________________"<<endl;
    cout<<"Trabajos actuales en cola: "<<epson380.colaImpresion.size()<<endl;
    cout<<"Trabajos totales: "<<epson380.trabajosRealizados<<endl;
    cout<<"Total de paginas utilizadas: "<<epson380.paginasUtilizadas<<endl;
    cout<<"______________________________________________________________________"<<endl;
}


void imprimir(){
    while (!epson380.colaImpresion.empty())
    {
        // ver el documento que se encuentra al frente de la cola
        Trabajo docListoImprimirse = epson380.colaImpresion.front();
        cout<<"imprimiendo archivo "<<docListoImprimirse.documento;
        cout<<"consta de "<<docListoImprimirse.paginas<< " paginas";
        cout<<". Tiempo: "<<docListoImprimirse.tiempo<<" seg"<<endl;

        // sacar el elemneto que ya se imprimio
        epson380.colaImpresion.pop();

    }

    cout<<"Cola de impresion vacia!!!"<<endl;
    
}



