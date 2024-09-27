#ifndef DADOSJUEGO_H_INCLUDED
#define DADOSJUEGO_H_INCLUDED
void dibujarCuadrado (int posx, int posy);
void dibujarDado (int numero, int posx, int posy);
void dibujarSombra (int posx, int posy);

///DIBUJAR DADO
void dibujarDado(int numero, int posx, int posy)
{
    dibujarCuadrado(posx, posy);

    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor (rlutil::WHITE);



    switch(numero)
    {
    case 1:
        rlutil::msleep(50);
        rlutil::locate (posx + 3, posy + 1);
        cout << (char) 254;
        break;
    case 2:
        rlutil::msleep(50);
        rlutil::locate (posx + 1, posy);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 2);
        cout << (char) 254;
        break;
    case 3:
        rlutil::msleep(50);
        rlutil::locate (posx + 1, posy);
        cout << (char) 254;
        rlutil::locate (posx + 3, posy + 1);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 2);
        cout << (char) 254;
        break;
    case 4:
        rlutil::msleep(50);
        rlutil::locate (posx + 1, posy);
        cout << (char) 254;
        rlutil::locate (posx + 1, posy + 2);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 2);
        cout << (char) 254;
        break;
    case 5:
        rlutil::msleep(50);
        rlutil::locate (posx + 1, posy);
        cout << (char) 254;
        rlutil::locate (posx + 1, posy + 2);
        cout << (char) 254;
        rlutil::locate (posx + 3, posy + 1);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 2);
        cout << (char) 254;
        break;
    case 6:
        rlutil::msleep(50);
        rlutil::locate (posx + 1, posy);
        cout << (char) 254;
        rlutil::locate (posx + 1, posy + 1);
        cout << (char) 254;
        rlutil::locate (posx + 1, posy + 2);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 1);
        cout << (char) 254;
        rlutil::locate (posx + 5, posy + 2);
        cout << (char) 254;
        break;
    }
    rlutil::hidecursor();
    rlutil::resetColor();
    dibujarSombra(posx, posy);

}
///DIBUJAR CUADRADO DE DADO
void dibujarCuadrado (int posx, int posy)
{
    rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::setColor(rlutil::WHITE);
    for (int x = posx; x <= posx + 6; x++)
    {
        for (int y = posy; y <= posy + 2; y++)
        {
            rlutil::locate (x, y);
            cout << (char) 219;

        }
    }
    rlutil::hidecursor();
}
void dibujarSombra (int posx, int posy)
{
    rlutil::setColor(rlutil::MAGENTA);
    rlutil::setBackgroundColor(rlutil::BLACK);
    for (int y = posy; y <= posy + 2; y++)
    {
        rlutil::locate (posx + 7, y);
        if (y == posy)
        {
            cout << (char) 220;
        }
        else
        {
            cout << (char) 219;
        }
    }

    rlutil::setColor(rlutil::MAGENTA);
    for (int x = posx + 1; x <= posx + 7; x++)
    {
        rlutil::locate (x, posy + 3);
        cout << (char) 223;
    }
    rlutil::hidecursor();
    rlutil::resetColor();
}






#endif // DADOSJUEGO_H_INCLUDED
