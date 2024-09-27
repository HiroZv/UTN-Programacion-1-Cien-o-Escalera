#ifndef CARTELCOMENZAR_H_INCLUDED
#define CARTELCOMENZAR_H_INCLUDED
void cartelcomenzar (int opcion);
void cartelcomenzar (int opcion){

    system ("cls");
    rlutil::setColor (rlutil::MAGENTA);
    rlutil::locate (39, 3);
    cout<< "-----------------------------------"<<endl;
    rlutil::locate (38,4);
    cout<< "|";
    rlutil::locate (38, 5);
    cout<< "|";
    rlutil::locate (39, 6);
    cout<< "-----------------------------------"<<endl;
    rlutil::locate (74, 4);
    cout<< "|";
    rlutil::locate (74, 5);
    cout<< "|";
    rlutil::locate (39,4);
    cout<< "COMENZAR EL JUEGO? (1- SI / 2- NO):"<<endl;
    rlutil::locate (53, 5);
    cin>>opcion;








}


#endif // CARTELCOMENZAR_H_INCLUDED
