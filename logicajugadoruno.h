#ifndef LOGICAJUGADORUNO_H_INCLUDED
#define LOGICAJUGADORUNO_H_INCLUDED
#include "interfazjugadoruno.h"
#include "funcionesdados.h"
#include "dadosjuego.h"
#include "mostrarpuntaje.h"
#include "cartelescalera.h"
#include "menualganar.h"
#include "dosjugadores.h"
#include "sextetocartel.h"
#include "menu.h"
#include "cartelhastapronto.h"
#include "cartelsextetoseis.h"
void logicajugadoruno (int puntajejugadorUno, int& maxpuntajejugadorUno, string jugadorUno, int rondas, int dados[6], int valoresDados [3], int opcion, int& puntajeMaximo, string& nombreMaximo, int valorMaximo);
void logicajugadoruno (int puntajejugadorUno, int& maxpuntajejugadorUno, string jugadorUno, int rondas, int dados[6], int valoresDados [3], int opcion, int& puntajeMaximo, string& nombreMaximo, int valorMaximo){


      bool escalera, sexteto, sextetoSeis;


      for (int i=0; i<3; i++){
      system ("cls");


      interfazjugadoruno (jugadorUno, rondas, puntajejugadorUno);
      cargarAleatorio (dados , 6, 6);
      rlutil::resetColor();

      for (int x = 0; x < 6; x++){

      dibujarDado(dados[x], x * 10 + 5, x + 5);
      rlutil::resetColor();
      }

      mostrarpuntaje (valoresDados, i, dados);


      escalera = esEscalera (dados, 6);
      sexteto = todosIguales (dados, 6);
      // Esto asigna las respectivas funciones a las variables booleanas para usarlas luego.
      if (escalera==true){

        puntajejugadorUno = 100;
        maxpuntajejugadorUno = 100;
        system ("pause");
        system ("cls");
        cartelescalera ();
        rlutil::locate (1, 30);
        system ("pause");
        system ("cls");
        menualganardos();
        rlutil::locate (51, 18);
        cout<< "Elija su opcion: ";
        cin >> opcion;

    switch (opcion){

     case 1:
        system ("cls");
        dosjugadores(puntajeMaximo, nombreMaximo);

     case 2:
        system ("cls");
        menu ();

     case 3:
        system ("cls");
        cartelhastapronto();
        return;
      }

      }

      else if (sexteto){

        if (dados [0] == 6){

            sextetoSeis == true;
            cartelsextetoseis ();
            puntajejugadorUno = 0;
            maxpuntajejugadorUno = 0;
            system ("pause");
            break;
        }
        else {

            system ("cls");
            valoresDados [i] = dados[0] * 10;
            sextetocartel ();
            system ("pause");
             }
      }

      rlutil::locate (1, 25);
        system ("pause");

      valoresDados [i] = sumarVector (dados, 6);
        valorMaximo = maximoVector (valoresDados, 3);
        maxpuntajejugadorUno = valoresDados [valorMaximo];
      // Esto calcula el valor maximo de las tres tiradas para luego poder mostrarla en pantalla.

       if (puntajejugadorUno >= 100){
           break;
       }


      }












}




#endif // LOGICAJUGADORUNO_H_INCLUDED
