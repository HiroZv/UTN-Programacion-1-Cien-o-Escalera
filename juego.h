#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include "instrucciones.h"
#include "interfaz.h"
#include "menu.h"
#include "cartelhastapronto.h"
#include "cartelsextetoseis.h"
#include "sextetocartel.h"
#include "cartelganaste.h"
#include "puntuacionmaxima.h"
#include "marconombre.h"
void menu();
void juego (int& puntajeMaximo, string& nombreMaximo);
void juego (int& puntajeMaximo, string& nombreMaximo){

      int opcion, puntaje = 0, rondas, contRondas = 1, dados[6], contLanzamiento = 0, valorMaximo, maxPuntaje = 0, valoresDados[3];
      bool sexteto, escalera, sextetoSeis;
      string unJugador;

      marconombre();
      cout<< "Ingrese su nombre: ";
      rlutil::setColor (rlutil::WHITE);
      cin>>unJugador;

      system ("cls");

      instrucciones(unJugador);

      system ("cls");

      marcocomenzar ();
      rlutil::locate (39,4);
      cout<< "COMENZAR EL JUEGO? (1- SI / 2- NO):"<<endl;
      rlutil::locate (53, 5);
      cin>>opcion;

      if (opcion == 1){

        system ("cls");




      while (puntaje < 100){


        maxPuntaje = 0;
        rondas = contRondas;
        contRondas++;


      for (int i=0; i<3; i++){
      system ("cls");


      interfaz (unJugador, puntaje, rondas);
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
        juego(puntajeMaximo, nombreMaximo);

     case 2:
        system ("cls");
        menu();

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
            puntaje = 0;
            maxPuntaje = 0;
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
        maxPuntaje = valoresDados [valorMaximo];
      // Esto calcula el valor maximo de las tres tiradas para luego poder mostrarla en pantalla.

       }


        contLanzamiento++;
        system ("cls");



      rlutil::locate (1, 5);
      cout<< "M ximo puntaje de esta ronda: "<<maxPuntaje<<endl;
      cout<< "Lanzamiento Nø "<<contLanzamiento<<endl;
      marcopuntaje();
      puntaje += maxPuntaje;

      if (puntaje > puntajeMaximo){

        puntajeMaximo = puntaje;
        nombreMaximo = unJugador;

      }












      }


      cartelganaste ();
      system ("pause");
      system ("cls");


                   do {
                   system ("cls");
                   menualganar ();
                   rlutil::locate (51, 19);
                   cout<< "Elija su opcion: ";
                   cin >> opcion;



                   switch (opcion){

                   case 1:
                    system ("cls");
                    juego (puntajeMaximo, nombreMaximo);
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
        cartelhastapronto();
      }


}



#endif // JUEGO_H_INCLUDED
