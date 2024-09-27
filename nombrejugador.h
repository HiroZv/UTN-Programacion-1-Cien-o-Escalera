#ifndef NOMBREJUGADOR_H_INCLUDED
#define NOMBREJUGADOR_H_INCLUDED

void juego (string unJugador);
void nombrejugador (string unJugador){

    rlutil::locate (39, 4);
    cout<< "---------------------------------"<<endl;
    rlutil::locate (38,5);
    cout<< "|"<<endl;
    rlutil::locate (72, 5);
    cout<< "|"<<endl;
    rlutil::locate (39,6);
    cout<< "---------------------------------"<<endl;
    rlutil::locate (39, 5);
    cout<<"Ingrese su nombre: ";
    rlutil::setColor (rlutil::WHITE);
    cin>>unJugador;



}


#endif // NOMBREJUGADOR_H_INCLUDED
