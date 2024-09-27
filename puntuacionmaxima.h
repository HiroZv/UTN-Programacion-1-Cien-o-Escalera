#ifndef PUNTUACIONMAXIMA_H_INCLUDED
#define PUNTUACIONMAXIMA_H_INCLUDED
#include "menualganar.h"
void puntuacionmaxima (int &puntajeMaximo, string& nombreMaximo);
void puntuacionmaxima (int &puntajeMaximo, string& nombreMaximo){



      rlutil::locate (37, 4);
      cout<<"|";
      rlutil::locate (37, 5);
      cout<<"|";
      rlutil::locate (37, 6);
      cout<<"|";
      rlutil::locate (37, 7);
      cout<<"|";
      rlutil::locate (76, 4);
      cout<<"|";
      rlutil::locate (76, 5);
      cout<<"|";
      rlutil::locate (76, 6);
      cout<<"|";
      rlutil::locate (76, 7);
      cout<<"|";


      rlutil::locate (38, 3);
      cout<< "--------------------------------------";
      rlutil::locate (38, 8);
      cout<< "--------------------------------------";
      rlutil::locate (40, 5);
      rlutil::setColor (rlutil::WHITE);
      cout<< "El puntaje maximo por ahora es: "<<puntajeMaximo<<endl;
      rlutil::locate (40, 6);
      cout<< "De: "<<nombreMaximo<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;

      system ("pause");
      system ("cls");
      return menualganar();















}



#endif // PUNTUACIONMAXIMA_H_INCLUDED
