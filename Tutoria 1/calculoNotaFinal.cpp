#include <iostream>


using namespace std;

float promedioNotas(float []);
void mensaje(float);

int  main(){

    float notas[5];
    float promedio;

    for (int  i = 0; i < 5; i++)
    {
        cout<<"Ingrese la nota"<<i+1<<": ";
        cin>>notas[i];
    }
    
    promedio = promedioNotas(notas);
    mensaje(promedio);
    
    return 0;
}

// Funcion para calcular el promedio de notas
float promedioNotas (float notas []){
    float promedio = 0;

    for (int i = 0; i < 5; i++)
    {
        // esto hace lo mismo que promedio = promedio + notas[i];
        promedio += notas[i];

    }

    promedio /= 5;

    return promedio;
    
}

// Funcion para verificar si el estudiante paso la materia

void mensaje(float promedio){
    if (promedio > 6)
        cout<<"El estudiante paso la materia en limpio";
    else if (promedio == 6)
        cout<<"El estudiante paso por fe la materia";
    else
        cout<<"El estudiante no paso la materia F";
    
}


