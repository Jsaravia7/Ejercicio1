#include <iostream>

using namespace std;

string productos[5][2] ={
  {"001","Iphone x"},
  {"002","Laptop Dell"},
  {"003","Monitor Samsung"},
  {"004","Mouse"},
  {"005","Headset"},
};
int main(int argc, char const *argv[])
{
    int opcion = 0, i = 0;
    while (true)
    {
    system("cls");

    cout<<"*********************";
    cout<<endl;
    cout<<"Sistema de Inventario";
    cout<<endl;
    cout<<"*********************";
    cout<<endl;
    cout<<"1. -Productos"<<endl;
    cout<<"2. -Ingreso de inventario"<<endl;
    cout<<"3. -Salidad de Inventario"<<endl;
    cout<<"0. -Salir"<<endl;
    cout<<"*********************";
    cout<<endl;
    cout<<"Ingrese una opcion";
    cout<<endl;
    cin>>opcion;

         switch (opcion)
         {
         case 1:{
             system("cls");
             cout<<endl;
             cout<<"Sistema de Inventario";
             cout<<endl;
             cout<<"*********************";
             cout<<endl;
             for ( i = 0; i < 5; i++)
             {
                cout << productos[i][0] << " " << productos[i][1]<<endl; 
             }
             
            break;
         }
         
         break;
         case 2:
         cout<<"Escogistes 2";
         break;
         case 3:
         cout<<"Escogistes 3";
         break;

         default:
         break;

        }
        system("pause");
        
        if(opcion == 0)
         {
         break;
         }
    }
    return 0;
}