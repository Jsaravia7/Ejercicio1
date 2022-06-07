#include<iostream>
using namespace std;

string libros[2][2];

void cargarLibros(){
   libros[0][0] = "Algoritmos";
   libros[0][1] = "Algoritmos y Programacion (Guia de docentes)";

   libros[1][0] = "Base de datos";
   libros[1][1] = "Apuntes de Base de Datos 1";
   
}

int main(int argc, char const *argv[])
{
    cargarLibros();
     
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout<<"Ingrese la descripcion del libro que busca: ";
        cin>>buscar;
        //busqueda
        for (int i = 0; i < 2; i++)
        {
            string libro = libros [i][1];
            if (libro.find(buscar) != string::npos )
            {
                cout<<"Libro encontrado: "<< libro <<endl;
                salir = true;
            }
            
        }
        
        if (salir == false)
        {
            char continuar = 'n';
        while (true)
        {
          system("cls");
          cout<<"No se encontro el libro que busca. Desea continuar? s/n: ";
          cin>>continuar;

          if (continuar == 's' || continuar == 'S')
          {
            break;
          }else if (continuar == 'n' || continuar == 'N')
          {
              salir = true;
              break;
          }         
        }
      }
        
   } 
    return 0;  
}
