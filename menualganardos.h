#ifndef MENUALGANARDOS_H_INCLUDED
#define MENUALGANARDOS_H_INCLUDED
void menualganardos ();
void menualganardos (){


    rlutil::setColor (rlutil::MAGENTA);
    cout<< R"(
                           _ ____  _                _                       _       _
                          | |  _ \(_)              (_)                     | |     | |
                          | | |_) |_  ___ _ __      _ _   _  __ _  __ _  __| | ___ | |
                          | |  _ <| |/ _ \ '_ \    | | | | |/ _` |/ _` |/ _` |/ _ \| |
                          |_| |_) | |  __/ | | |   | | |_| | (_| | (_| | (_| | (_) |_|
                          (_)____/|_|\___|_| |_|   | |\__,_|\__, |\__,_|\__,_|\___/(_)
                                                  _/ |       __/ |
                                                 |__/       |___/

                                                             )";
    rlutil::locate (48, 12);
    cout<< "¨Que hacemos ahora?";
    rlutil::locate (48, 14);
    cout<< "1 - Jugar otra vez"<<endl;
    rlutil::locate (48, 15);
    cout<< "2 - Volver al menu principal"<<endl;
    rlutil::locate (48, 16);
    cout<< "3 - Salir del juego"<<endl;
}







#endif // MENUALGANARDOS_H_INCLUDED
