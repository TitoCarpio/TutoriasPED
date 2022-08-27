#include <iostream>
#include <cmath>

using namespace std;

// declaracion de prototipos
float solicitarDatos( );
float calcularArea(float);
float calculoPeimetro(float);
void mostrarResultados(float,float);

int main()
{
    float radio = 0, perimetro = 0, area = 0;

    radio = solicitarDatos();
    area = calcularArea(radio);
    perimetro = calculoPeimetro(radio);
    mostrarResultados(area, perimetro);

}

// Funcion para solicitar datos al usuario
float solicitarDatos()
{
    float radio = 0;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    return radio;
}

// funcion para calcular el area de un cirulo
float calcularArea(float radio)
{
    float area = 0;
    // Primera opcio del calculo
    // area = 3.14 * (radio * radio);

    // segunda opcion utilizando la libreria de matematicas de C++
    area = 3.14 * pow(radio,2);
    return area;
}

// funcion para calculo del perimetro de un circulo
float calculoPeimetro(float radioParametros){
    float perimetro = 0;
    perimetro = 2 * 3.1416 * radioParametros;
    return perimetro;
}

// Funcion para mostrar los resultados
void mostrarResultados(float area, float perimetro)
{
    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;
}
