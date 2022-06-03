#include<iostream>
using namespace std;

string libros[2][2];

void cargarLibros(){
   libros[0][0] = "Algoritmos";
   libros[0][1] = "Algoritmos y Programacion (Guia de docentes";

   libros[1][0] = "Base de datos";
   libros[1][1] = "Apuntes de Base de Datos 1";
   
}

int main(int argc, char const *argv[])
{
    cargarLibros();
    
    for (int i = 0; i < 2; i++)
    {
        cout<<libros[i][1];
    }
    return 0;
}
