#ifndef MARCONOMBRE_H_INCLUDED
#define MARCONOMBRE_H_INCLUDED
void marconombre ();
void marconombre (){

    rlutil::setColor (rlutil::MAGENTA);
    rlutil::locate (39, 4);
    cout<< "---------------------------------"<<endl;
    rlutil::locate (38,5);
    cout<< "|"<<endl;
    rlutil::locate (72, 5);
    cout<< "|"<<endl;
    rlutil::locate (39,6);
    cout<< "---------------------------------"<<endl;
    rlutil::locate (39, 5);

}


#endif // MARCONOMBRE_H_INCLUDED
