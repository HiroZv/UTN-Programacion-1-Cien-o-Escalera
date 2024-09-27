#ifndef INSTRUCCIONES_H_INCLUDED
#define INSTRUCCIONES_H_INCLUDED
void instrucciones (string unJugador);
void instrucciones (string unJugador){


    rlutil::locate (10, 5);
    cout<< "­Bienvenido/a "<<unJugador<<"!, estas por jugar \"Cien o Escalera\", El objetivo del juego es obtener al menos 100"<<endl;
    rlutil::locate (10, 6);
    cout<< "puntos en la menor cantidad posible de rondas, o sacar una escalera en un lanzamiento."<<endl;
    cout<<endl;
    cout<<endl;
    rlutil::locate (10, 8);
    cout<< "Una ronda esta compuesta por 3 lanzamientos. Un lanzamiento consiste en tirar seis dados "<<endl;
    rlutil::locate (10, 9);
    cout<< "y evaluar sus valores para determinar el puntaje."<<endl;
    cout<<endl;
    cout<<endl;
    rlutil::locate (10, 11);
    cout<< "El puntaje final de la ronda sera el valor maximo de los puntos obtenidos en los 3 lanzamientos"<<endl;
    rlutil::locate (10, 12);
    cout<< "(no la suma de los tres, sino el m s alto), con las siguientes excepciones: "<<endl;
    cout<<endl;
    rlutil::locate (14, 14);
    cout<< "Si en un lanzamiento se obtiene escalera el jugador GANA EL PARTIDO en ese momento."<<endl;
    rlutil::locate (14, 16);
    cout<< "Si en un lanzamiento se obtiene una combinaci¢n de 6 dados con valor 6, el puntaje total "<<endl;
    rlutil::locate (14, 17);
    cout<< "de la persona se resetea a 0."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    rlutil::locate (40,22);
    system ("pause");







































}


#endif // INSTRUCCIONES_H_INCLUDED
