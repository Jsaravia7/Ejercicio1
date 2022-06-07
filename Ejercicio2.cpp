#include<iostream>
#include<algorithm>
#include<time.h>
using namespace std;


string libros[2][3];

void cargarLibros(){
   libros[0][0] = "Algoritmos";
   libros[0][1] = "Algoritmos y Programacion (Guia de docentes)";
   libros[0][2] = "Jorge Saravia";

   libros[1][0] = "Base de datos";
   libros[1][1] = "Apuntes de Base de Datos 1";
   libros[1][2] = "El pepe";
}

int main(int argc, char const *argv[])
{
    cargarLibros();

    srand(time(NULL));
     
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout<<"Ingrese la descripcion o el autor del libro que busca: ";
        cin>>buscar;
        //busqueda
        for (int i = 0; i < 3; i++)
        {
            string libro = libros [i][1];
            string libroenminuscuala = libro;
            // Transformar a minuscula los string buscar y libro//
            transform(libroenminuscuala.begin(), libroenminuscuala.end(), libroenminuscuala.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroenminuscuala.find(buscar) != string::npos )
            {
                cout<<"Libro encontrado: "<< libro <<endl; 

                cout<<"Tambien te sugerimos estos libros: "<<endl;
                int sugerencia1 = rand() % 2;
                int sugerencia2 = rand() % 2;
                int sugerencia3 = rand() % 2;

                cout<<"Sugerencia 1: "<< libros[sugerencia1][1]<<endl;
                cout<<"Sugerencia 2: "<< libros[sugerencia2][1]<<endl;
                cout<<"Sugerencia 3: "<< libros[sugerencia3][1]<<endl;
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
