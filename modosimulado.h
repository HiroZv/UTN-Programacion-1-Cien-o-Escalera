#ifndef MODOSIMULADO_H_INCLUDED
#define MODOSIMULADO_H_INCLUDED
#include "funcionesdados.h"
#include "interfazsimulado.h"
#include "cartelhastapronto.h"
#include "cartelsextetoseis.h"
#include "sextetocartel.h"
#include "cartelganaste.h"

void menu();
void modosimulado();
void modosimulado()
{
    int rondas, puntaje = 0, maxPuntaje, contRondas = 1, contLanzamiento = 1, dados[6], valoresDados[3], valorMaximo, opcion;
    bool sexteto, escalera, sextetoSeis;
    rlutil::setColor (rlutil::WHITE);
    rlutil::locate (10, 5);
    cout << "Estas entrando en un modo simulado de el juego \"Cien o Escalera\" " << endl;
    rlutil::locate (10, 6);
    cout << "Ingresa el valor de los seis dados para obtener diferentes puntajes.";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    rlutil::locate (13, 9);
    system ("pause");
    system ("cls");

    while (puntaje < 100)
    {

        rondas = contRondas;
        contRondas++;
        maxPuntaje = 0;
        sextetoSeis = false;

        for (int i = 0; i < 3; i++)
        {

            system ("cls");

            interfazsimulado(rondas, puntaje);




            cargarVector(dados, 6);

            mostrarpuntaje(valoresDados, i, dados);

            escalera = esEscalera(dados, 6);
            sexteto = todosIguales(dados, 6);

            if (escalera == true)
            {
                system ("cls");
                cartelescalera();
                system ("pause");
                system ("cls");
                puntaje = 100;
                maxPuntaje = 100;
                rlutil::locate (1, 5);
                rlutil::setColor (rlutil::WHITE);
                cout << "Maximo puntaje de esta ronda: "<< maxPuntaje <<endl;
                cout << "Lanzamiento Nø " << contLanzamiento << endl;
                marcopuntaje();

                system ("cls");

                menualganardos();
                cout<< "Elija su opcion: ";
                cin >> opcion;

                switch (opcion){

                case 1:
                system ("cls");
                modosimulado();

                case 2:
                system ("cls");
                menu ();

                case 3:
                system ("cls");
                cartelhastapronto();
                return;
               }
            }
            else if (sexteto == true)
            {
                if (dados[0] == 6)
                {
                    system ("cls");
                    cartelsextetoseis();
                    system ("pause");
                    sextetoSeis = true;
                    break;
                }
                else
                {
                    system ("cls");
                    sextetocartel();
                    valoresDados[i] = dados[0] * 10;

                }
            }
            else
            {
                valoresDados[i] = sumarVector (dados, 6);
            }
            cout << endl;
            rlutil::locate (1, 25);
            system("pause");
        }
        if (sextetoSeis==true)
        {
            system ("cls");
            cartelsextetoseis();
            puntaje = 0;

        }
        else
        {
            valorMaximo = maximoVector(valoresDados, 3);
            maxPuntaje = valoresDados[valorMaximo];
            puntaje += maxPuntaje;
        }

        contLanzamiento++;
        system ("cls");

        rlutil::setColor (rlutil::WHITE);
        rlutil::locate (1, 5);
        cout << "Maximo puntaje de esta ronda: "<< maxPuntaje <<endl;
        cout << "Lanzamiento Nø " << contLanzamiento << endl;
        marcopuntaje();
    }


    cartelganaste();
    system ("pause");
    system ("cls");
    menualganardos();
    rlutil::locate (51, 18);
    cout<< "Elija su opcion: ";
    cin >> opcion;

    switch (opcion){

     case 1:
        system ("cls");
        modosimulado();

     case 2:
        system ("cls");
        menu ();

     case 3:
        system ("cls");
        cartelhastapronto();
        break;
      }





}



#endif // MODOSIMULADO_H_INCLUDED
