#ifndef MOSTRARPUNTAJE_H_INCLUDED
#define MOSTRARPUNTAJE_H_INCLUDED
#include "funcionesdados.h"
void mostrarpuntaje (int valoresDados[3], int i, int dados[6]);
void mostrarpuntaje (int valoresDados[3], int i, int dados[6]){



            valoresDados [i] = sumarVector (dados, 6);

            cout<<endl;
            cout<< "Este es el resultado de su lanzamiento: "<<valoresDados[i];
            cout<<endl;







}



#endif // MOSTRARPUNTAJE_H_INCLUDED
