#ifndef INTERFAZDOSJUGADORES_H_INCLUDED
#define INTERFAZDOSJUGADORES_H_INCLUDED
void interfazdosjugadores(string jugadorUno, string jugadorDos, int rondas, int puntaje);
void interfazdosjugadores(string jugadorUno, string jugadorDos, int rondas, int puntaje){





      rlutil::setColor (rlutil::WHITE);
      cout<< "Turno de "<<jugadorUno<<" | Ronda Nø"<<rondas<<" | Puntaje Total: "<<puntaje<<endl;
      cout<< "----------------------------------------------"<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;

      system ("pause");
      system ("cls");
      for (int i = 0; i<3; i++){
      rlutil::setColor (rlutil::WHITE);
      cout<< "Turno de "<<jugadorDos<<" | Ronda Nø"<<rondas<<" | Puntaje Total: "<<puntaje<<endl;
      cout<< "----------------------------------------------"<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      }















}



#endif // INTERFAZDOSJUGADORES_H_INCLUDED
