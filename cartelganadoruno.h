#ifndef CARTELGANADORUNO_H_INCLUDED
#define CARTELGANADORUNO_H_INCLUDED
void cartelganadoruno (string jugadorUno);
void cartelganadoruno (string jugadorUno){


      rlutil::locate (3, 5);
      cout<< "­Se acab¢ el juego, ";
      rlutil::locate (3, 6);
      cout<<" "<<jugadorUno<<" ha ganado!";


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



#endif // CARTELGANADORUNO_H_INCLUDED
