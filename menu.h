#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "menuinicio.h"
#include "modosimulado.h"
#include "juego.h"
#include "dosjugadores.h"
void modosimulado();
void juego (int& puntajeMaximo, string& nombreMaximo);
void dosjugadores (int& puntajeMaximo, string& nombreMaximo);
void menu();
void menu(){

int opcion;
    int puntajeMaximo = 0;
    string nombreMaximo;




    system ("cls");
    menuinicio ();

    cout<< "\t\t\t\t\t Elija su opcion: ";
    cin>> opcion;


    switch (opcion){

     case 1:
        system ("cls");
        juego(puntajeMaximo, nombreMaximo);
        break;
     case 2:
        system ("cls");
        dosjugadores(puntajeMaximo, nombreMaximo);
        break;
     case 3:
        system ("cls");
        modosimulado();
        break;
     case 0:
        system ("cls");

        cartelhastapronto();

        break;



    default:
        rlutil::setColor (rlutil::RED);
    cout<<endl;
    cout<< "\t\t\t\t\t OPCION INCORRECTA. "<<endl;
        rlutil::setColor (rlutil::WHITE);
    break;

    }





}

#endif // MENU_H_INCLUDED
