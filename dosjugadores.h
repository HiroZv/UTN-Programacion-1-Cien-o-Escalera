#ifndef DOSJUGADORES_H_INCLUDED
#define DOSJUGADORES_H_INCLUDED
#include "marconombredos.h"
#include "instruccionesdos.h"
#include "marcocomenzar.h"
#include "marcopuntaje.h"
#include "cartelganadoruno.h"
#include "cambiorondauno.h"
#include "interfazjugadordos.h"
#include "menualganardos.h"
#include "menu.h"
#include "cartelhastapronto.h"
#include "cartelsextetoseis.h"
#include "sextetocartel.h"
#include "cartelganadordos.h"
#include "puntuacionmaxima.h"
#include "cambiorondados.h"
#include "logicajugadoruno.h"
#include "logicajugadordos.h"
void logicajugadoruno (int puntajejugadorUno, int& maxpuntajejugadorUno, string jugadorUno, int rondas, int dados[6], int valoresDados [3], int opcion, int& puntajeMaximo, string& nombreMaximo, int valorMaximo);
void logicajugadordos (int puntajejugadorDos, int& maxpuntajejugadorDos, string jugadorDos, int rondas, int dados[6], int valoresDados [3], int opcion, int& puntajeMaximo, string& nombreMaximo, int valorMaximo);
void dosjugadores (int &puntajeMaximo, string &nombreMaximo);
void dosjugadores (int &puntajeMaximo, string &nombreMaximo){


   int opcion, rondas = 1, contRondas = 1, maxpuntajejugadorUno = 0, maxpuntajejugadorDos = 0, dados[6], valoresDados [3], contLanzamiento = 1, valorMaximo, puntajejugadorUno = 0, puntajejugadorDos = 0;
   bool escalera, sexteto, sextetoSeis;
   string jugadorUno, jugadorDos, unJugador;

    marconombredos();
    cout<<"Ingrese el nombre del primer jugador: ";
    rlutil::setColor (rlutil::WHITE);
    cin>>jugadorUno;

    system ("cls");

    marconombredos();
    cout<<"Ingrese el nombre del segundo jugador: ";
    rlutil::setColor (rlutil::WHITE);
    cin>>jugadorDos;

    system ("cls");

    instruccionesdos (jugadorUno, jugadorDos);

    marcocomenzar();
    cout<< "COMENZAR EL JUEGO? (1- SI / 2- NO):"<<endl;
    rlutil::locate (53, 5);
    cin>>opcion;

    if (opcion == 1){

        system ("cls");




      while (true){ //Este while se va a seguir ejecutando hasta que se le pida que pare.


        maxpuntajejugadorUno = 0;
        maxpuntajejugadorDos = 0;




        logicajugadoruno (puntajejugadorUno, maxpuntajejugadorUno, jugadorUno, rondas, dados, valoresDados, opcion, puntajeMaximo, nombreMaximo, valorMaximo);



        contLanzamiento++;
        system ("cls");



      rlutil::locate (1, 5);
      cout<< "M ximo puntaje de esta ronda: "<<maxpuntajejugadorUno<<endl;
      cout<< "Lanzamiento Nø "<<contLanzamiento<<endl;
      marcopuntaje();
      puntajejugadorUno += maxpuntajejugadorUno;

      if (puntajejugadorUno > puntajeMaximo){

        puntajeMaximo = puntajejugadorUno;
        nombreMaximo = jugadorUno;

      }

      if (puntajejugadorUno >= 100){
        system ("cls");
        cartelganadoruno(jugadorUno);
        break;
      }


      contRondas++;
      rondas = contRondas;
      system ("cls");


      cambiorondauno(rondas, puntajejugadorUno, puntajejugadorDos, jugadorUno, jugadorDos); //Marco del cambio de ronda luego del lanzamiento del jugador uno.


      logicajugadordos (puntajejugadorDos, maxpuntajejugadorDos, jugadorDos, rondas, dados, valoresDados, opcion, puntajeMaximo, nombreMaximo, valorMaximo);


        contLanzamiento++;
        system ("cls");



      rlutil::locate (1, 5);
      cout<< "M ximo puntaje de esta ronda: "<<maxpuntajejugadorDos<<endl;
      cout<< "Lanzamiento Nø "<<contLanzamiento<<endl;
      marcopuntaje();
      puntajejugadorDos += maxpuntajejugadorDos;

      if (puntajejugadorDos > puntajeMaximo){

        puntajeMaximo = puntajejugadorDos;
        nombreMaximo = jugadorDos;

      }

      if (puntajejugadorDos >= 100){
        system ("cls");
        cartelganadordos(jugadorDos);
        break;
      }

      contRondas += 1;
      rondas = contRondas;


      system ("cls");

      cambiorondados (rondas, puntajejugadorUno, puntajejugadorDos, jugadorUno, jugadorDos); //Marco del cambio de ronda luego de que el jugador dos haya hecho su lanzamiento.

      }
                   do {
                   system ("cls");
                   menualganar ();
                   rlutil::locate (51, 19);
                   cout<< "Elija su opcion: ";
                   cin >> opcion;

                   switch (opcion){

                   case 1:
                    system ("cls");
                    dosjugadores(puntajeMaximo, nombreMaximo);
                   break;
                   case 2:
                    system ("cls");
                    menu ();
                   break;
                   case 3:
                    system ("cls");
                    puntuacionmaxima(puntajeMaximo, nombreMaximo);
                   break;
                   case 4:
                    system ("cls");
                    cartelhastapronto();
                    return;
                   default:
                    rlutil::setColor (rlutil::RED);
                    cout<<endl;
                    cout<< "\t\t\t\t\t OPCION INCORRECTA. "<<endl;
                    rlutil::setColor (rlutil::WHITE);
                   break;
                   }

                   } while (opcion != 4);


     }

    else {
        cartelhastapronto ();
    }

}



#endif // DOSJUGADORES_H_INCLUDED
