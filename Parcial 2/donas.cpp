#include <iostream>
#include <conio.h>
#include <vector>
#include <queue>
#include <string.h>

float gananciaD=0;
float gananciaP = 0;

using namespace std;
struct producto
{
    string nombre;
    float precio;
};


struct pedido{
    string apellido;
    vector<producto> listaProducto;
};
vector<producto> lista;
queue<pedido> colaDonas;
queue<pedido> colaPlatos;

void menu(){
    bool status=true;
    while (status)
    {

        int opcion = 0;

        cout<<"************MENU**************"<<endl;
        cout<<"\t1.Atender pedido."<<endl;
        cout<<"\t2.Ganancia de donas"<<endl;
        cout<<"\t3.Ganancia de platos"<<endl;
        cout<<"\t4.Salir"<<endl;
        cout<<"******************************"<<endl;

        cout<<"Ingrese la opcion a elegir:";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            int opcion;

            cout<<"*********************************"<<endl;
            cout<<"Servicio que desea comprar:"<<endl;
            cout<<"1.Donas."<<endl;
            cout<<"2.Platos de comida"<<endl;
            cout<<"3.Salir"<<endl;
            cout<<"*********************************"<<endl;
            cout<<"Digite su opcion:";
            cin>>opcion;
            cin.ignore();
            

            if (opcion ==1){
                bool continuar = true;
                while (continuar)
                {
                    int opcion;
                    cout<<"1.sencillas."<<endl;
                    cout<<"2.rellenas."<<endl;
                    cout<<"3.sabor especial"<<endl;
                    cout<<"4.salir"<<endl;
                    cin>>opcion;
                    cin.ignore();

                    if(opcion==1){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                        cout<<"Apellido del cliente:"<<endl;
                        getline(cin, apellido);
                        cout<<"Cantidad";
                        cin>>cantidad;
                        gananciaD += cantidad * 1;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "sencilla";
                        nuevoprod.precio = 1.00;
                        lista.push_back(nuevoprod);
                        colaDonas.push(nuevoped);
                        cout<<" cliente: "<<apellido<<" Producto: "<< nuevoprod.nombre <<"  Total:"<<cantidad*1<<endl; 
                    }else if(opcion == 2){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                        cout<<"Apellido del cliente:"<<endl;
                        getline(cin, apellido);
                        cout<<"Cantidad";
                        cin>>cantidad;
                        gananciaD += cantidad * 1.25;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "rellena";
                        nuevoprod.precio = 1.25;
                        lista.push_back(nuevoprod);
                        colaDonas.push(nuevoped);
                        cout<<" cliente: "<<apellido<<" Producto: "<< nuevoprod.nombre <<"  Total:"<<cantidad*1.25<<endl;
                    }else if(opcion==3){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                         cout<<"Apellido del cliente:"<<endl;
                        getline(cin, apellido);
                        cout<<"Cantidad";
                        cin>>cantidad;
                        gananciaD += cantidad * 1.50;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "sabor especial";
                        nuevoprod.precio = 1.50;
                        lista.push_back(nuevoprod);
                        colaDonas.push(nuevoped);
                        cout<<" cliente: "<<apellido<<" Producto: "<< nuevoprod.nombre <<"  Total:"<<cantidad*1.50<<endl;
                    }else{
                        continuar = false;
                    }
                }
                
            }else if(opcion==2){
                bool continuar = true;
                while (continuar)
                {
                    int opcion;
                    cout<<"1.Desayuno."<<endl;
                    cout<<"2.Almuerzo."<<endl;
                    cout<<"3.Cena"<<endl;
                    cout<<"4.Salir"<<endl;
                    cin>>opcion;
                    cin.ignore();

                    if(opcion==1){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                        cout<<"apellido:"<<endl;
                        getline(cin, apellido);
                        cout<<"cantidad";
                        cin>>cantidad;
                        gananciaP += cantidad * 2.50;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "desayuno";
                        nuevoprod.precio = 2.50;
                        lista.push_back(nuevoprod);
                        colaPlatos.push(nuevoped);
                        
                    }else if(opcion == 2){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                        cout<<"Apellido del cliente:"<<endl;
                        getline(cin, apellido);
                        cout<<"Cantidad";
                        cin>>cantidad;
                        gananciaP += cantidad * 5.00;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "almuerzo";
                        nuevoprod.precio = 5.00;
                        lista.push_back(nuevoprod);
                        colaPlatos.push(nuevoped);
                    }else if(opcion==3){
                        
                        pedido nuevoped;
                        producto nuevoprod;
                        int cantidad=0;
                        string apellido;
                       cout<<"Apellido del cliente:"<<endl;
                        getline(cin, apellido);
                        cout<<"Cantidad";
                        cin>>cantidad;
                        gananciaP += cantidad * 3.50;
                        nuevoped.apellido = apellido;
                        nuevoprod.nombre = "cena";
                        nuevoprod.precio = 1.50;
                        lista.push_back(nuevoprod);
                        colaPlatos.push(nuevoped);
                    }else{
                        continuar = false;
                    }
                }

            }else if(opcion==3){
                cout<<" cliente satisfecho"<<endl;
            }
        
            break;

        case 2:
            cout<<" La ganancia total de donas fue: "<<gananciaD<<endl;
            break;
        case 3:
            cout<<" La ganancia total de platos fue: "<<gananciaP<<endl;
            break;
        case 4:
            status = false;
            break;
        
        default:
            cout<<" Opcion invalida intente de nuevo."<<endl;
            break;
        }
    } 
}
    
    
          


void menudonas(){

}


int main(){
    menu();

    


    getch();
    return 0;
}
