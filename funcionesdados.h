#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <cstdlib>
#include <ctime>

using namespace std;

void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

int maximoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el máximo en el vector

void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

bool esEscalera(int v[], int tam);

bool todosIguales(int v[], int tam);

/// Desarrollo de funciones / Definiciones

void ordenarVector(int v[], int tam) //Esta funcion va preguntando cual es el menor y los va ordenando de manera creciente.
{
    int i, j, posmin, aux;
    for(i=0; i<tam-1; i++)
    {
        posmin=i;
        for(j=i+1; j<tam; j++)
        {
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int maximoVector(int v[], int tam)
{
    int i, posMax=0;
    for(i=1; i<tam; i++)      // Este for recorre el vector, la posicion maxima va a valer 0 en la primer vuelta, en la segunda, ya va a tener asignado un valor,
                              // si en esa vuelta, el nuevo valor, es mayor a la posicion maxima, ese valor se reemplaza y pasa a ser el nuevo valor maximo.
    {
        if(v[i] > v[posMax])
        {
            posMax=i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        v[i]=(rand()%limite)+1;
    }
}

int sumarVector(int v[], int tam)
{
    int i, suma=0;
    for(i=0; i<tam; i++)
    {
        suma+=v[i];
    }
    return suma;
}

void cargarVector(int v[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        cout << "Ingrese el valor del dado: ";
        cin >> v[i];

    if (v[i] > tam){

        cout<<endl;
        rlutil::setColor (rlutil::RED);
        cout<< "ERROR!"<<endl;
        rlutil::setColor (rlutil::WHITE);
        cout<< "Los numero deben ser entre el 1 y el 6."<<endl;
        cout<<endl;
        i = i - 1;
    }
    }
}


bool esEscalera(int v[], int tam)
{
    if (tam <= 1) return true;  // Un vector de 0 o 1 elemento siempre es escalera // Pregunta directamente si hay escalera

    ordenarVector(v, tam);  // Asumimos que esta función ordena el vector correctamente // En caso de no haber escalera, la funcion ordena el vector

    for (int i = 1; i < tam; i++)
    {
        if (v[i] != v[i-1] + 1) // En cada vuelta compara si el numero del vector actual es igual al elemento anterior.
        {
            return false;  // Si encontramos un número que no es consecutivo, no es escalera, como por ejemplo dos numeros iguales.
        }
    }
    return true;  // Si llegamos aquí, todos los números son consecutivos, y el vector esta ordenado correctamente, hay escalera.
}

bool todosIguales(int v[], int tam)
{
    for (int x = 0; x < tam; x++) // Este for recorre el vector
    {
        if (v[x] != v[0]) // Este if pregunta si los numeros son distintos al primer numero del vector
        {
            return false;  // Si encuentra un valor diferente al primero, no son todos iguales
        }
    }
    return true;  // Si termina el bucle sin retornar false, todos son iguales
}
#endif // FUNCIONES_H_INCLUDED
