#ifndef CARTELGANADORDOS_H_INCLUDED
#define CARTELGANADORDOS_H_INCLUDED
void cartelganadordos (string jugadorDos);
void cartelganadordos (string jugadorDos){



      rlutil::locate (3, 5);
      cout<< "­Se acab¢ el juego, ";
      rlutil::locate (3, 6);
      cout<<" "<<jugadorDos<<" ha ganado!";


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























}



#endif // CARTELGANADORDOS_H_INCLUDED
