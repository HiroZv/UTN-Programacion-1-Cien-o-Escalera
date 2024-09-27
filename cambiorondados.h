#ifndef CAMBIORONDADOS_H_INCLUDED
#define CAMBIORONDADOS_H_INCLUDED
void cambiorondados (int rondas, int puntajejugadorUno, int puntajejugadorDos, string jugadorUno, string jugadorDos);
void cambiorondados (int rondas, int puntajejugadorUno, int puntajejugadorDos, string jugadorUno, string jugadorDos){


      rlutil::locate (10, 4);
      cout<< "RONDA Nø"<<rondas<<endl;
      rlutil::locate (10, 5);
      cout<< "PROXIMO TURNO: "<<jugadorUno<<endl;
      rlutil::locate (10, 6);
      cout<< "PUNTAJE DE "<<jugadorUno<<": "<<puntajejugadorUno<<endl;
      rlutil::locate (10, 7);
      cout<< "PUNTAJE DE "<<jugadorDos<<": "<<puntajejugadorDos<<endl;

      rlutil::locate (1, 10);
      rlutil::setColor (rlutil::MAGENTA);
      cout<< "---------------------------------";

      rlutil::locate (1, 1);
      cout<< "---------------------------------";
      rlutil::locate (34, 2);
      cout<< "|";
      rlutil::locate (34, 3);
      cout<< "|";
      rlutil::locate (34, 4);
      cout<< "|";
      rlutil::locate (34, 5);
      cout<< "|";
      rlutil::locate (34, 6);
      cout<< "|";
      rlutil::locate (34, 7);
      cout<< "|";
      rlutil::locate (34, 8);
      cout<< "|";
      rlutil::locate (34, 9);
      cout<< "|";
      rlutil::locate (34, 10);
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      rlutil::setColor (rlutil::WHITE);
      system ("pause");
      system ("cls");



















}



#endif // CAMBIORONDADOS_H_INCLUDED
