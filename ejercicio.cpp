#include <iostream>
#include <string>

using namespace std;

string productos[5][3] ={
  {"001","Iphone x","0"},
  {"002","Laptop Dell","5"},
  {"003","Monitor Samsung","2"},
  {"004","Mouse","100"},
  {"005","Headset","25"},
};

void listarProductos(){
system("cls");
cout<<endl;
cout<<"Sistema de Inventario";
cout<<endl;
cout<<"*********************";
cout<<endl;
cout<<"Codigo Descripcion existencia";
cout<<endl;
cout<<"********************************";
cout<<endl;

for (int i = 0; i < 5; i++)
{
 cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2]<<endl; 
}
}

void movimientoInventario(string codigo,int cantidad,string tipoMovimiento) {
 for (int i = 0; i < 5; i++)
 {
   if(productos[i][0] == codigo){
     if (tipoMovimiento == "+"){
       productos[i][2] = std :: to_string(stoi(productos[i][2]) + cantidad);
     } else{
        productos[i][2] = std :: to_string(stoi(productos[i][2]) - cantidad);
     }
    }
  }  
}
void AjustePositivos(){
  string codigo = "";
int cantidad = 0;
system("cls");
cout<<endl;
cout<<"Ajuste Positivos al Inventario";
cout<<endl;
cout<<"**********************************";
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> codigo;
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> cantidad;
cout<<endl;
  movimientoInventario(codigo,cantidad, "+");
}

void AjustesNegativos(){
  string codigo = "";
int cantidad = 0;
system("cls");
cout<<endl;
cout<<"Ajustes Negativos al Inventario";
cout<<endl;
cout<<"**********************************";
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> codigo;
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> cantidad;
cout<<endl;

  movimientoInventario(codigo,cantidad, "- ");
}

void ingresoDeInventario(){
  string codigo = "";
int cantidad = 0;
system("cls");
cout<<endl;
cout<<"Ingreso de Productos al Inventario";
cout<<endl;
cout<<"**********************************";
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> codigo;
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> cantidad;
cout<<endl;

  movimientoInventario(codigo,cantidad, "+");
}

void salidaDeInventario(){
  string codigo = "";
int cantidad = 0;
system("cls");
cout<<endl;
cout<<"Salida de Productos al Inventario";
cout<<endl;
cout<<"**********************************";
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> codigo;
cout<<endl;
cout<<"Ingrese el codigo del producto: ";
cin >> cantidad;
cout<<endl;

  movimientoInventario(codigo,cantidad, "- ");
}
int main(int argc, char const *argv[])
{
    int opcion = 0;
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
    cout<<"3. -Salida de Inventario"<<endl;
    cout<<"4. -Ajustes Positivos"<<endl;
    cout<<"5. -Ajustes Negativos"<<endl;
    cout<<"*********************";
    cout<<endl;
    cout<<"Ingrese una opcion";
    cout<<endl;
    cin>>opcion;

         switch (opcion)
         {
         case 1:
         listarProductos();    
         break;
         case 2:
         ingresoDeInventario();
         break;
         case 3:
         salidaDeInventario();
         break;
         case 4:
         AjustePositivos();
         break;
         case 5:
         AjustesNegativos();
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