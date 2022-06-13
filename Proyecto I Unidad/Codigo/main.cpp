#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    int eleccion;

    cout<<"**************"<<endl;
    cout<<"Menu de Juegos"<<endl;
    cout<<"**************"<<endl;

    cout<<"Seleccione un juego"<<endl<<endl;
    cout<<"1 - StarShip "<<endl<<endl;
    cout<<"2 - Snake "<<endl<<endl;

    cout<<"Respuesta: ";
    cin>>eleccion;
    
     if (eleccion == 1)
     {
        system("cls");
        starShip();
     }else 
        system("cls");
        snake();
    return 0;
}