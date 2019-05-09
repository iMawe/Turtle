/** @file main.cpp
@author iMawe 
@version Revision 1.1
@brief implementacion del main.cpp con el uso de OPenGl en C++.
*/

#include "Turtle.h"
int main(int argc, char **argv){
    
    Turtle T(700,500);
    T.display(argc,argv);
    T.move(150,200);
    T.forward(75,60);
    T.forward(75,60);
    T.forward(75,240);
    T.forward(75,60);
    T.forward(75,240);
    T.forward(75,60);
    T.forward(75,240);
    T.forward(75,60);
    T.forward(75,240);
    T.forward(75,60);
    T.forward(75,240);
    T.forward(75,60);

    
    /*T.penup();
    T.forward(210);
    T.pendow();
    T.forward(50,90);
    T.move(250,250);
    T.forward(100);*/
    glutMainLoop();
}