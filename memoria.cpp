#include <iostream>
using namespace std;

class chorizo{
  private;
  int size;
  bool  encendido;
  int otro;

};

int main(int argc, char const *argv[])
{
cout<<"Tamaño de memoria"<<endl;
cout<<"tamaño int:"<<sizeof(int)<<endl;
cout<<"tamaño char: "<<sizeof(char)<<endl;
cout<<"tamaño bool:"<<sizeof(bool)<<endl;
cout<<"tamaño float: "<<sizeof(float)<<endl;
cout<<"tamaño diuble:"<<sizeof(double)<<endl;




int a, b;
cout<<"memoria Estatica:"<<endl;
cout<<"direccion a: "<<&a<<endl;
cout<<"valor a:"<<a<<endl;
cout<<"tamaño a:"<<sizeof(a)<<endl;


cout<<"direccion b:"<<&b<<endl;
cout<<"valor b: "<<b<<endl;
cout<<"tamaño b:"<<sizeof(b)<<endl;







cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"dieccion de memoria:"<<endl;
int* direccionA = &a;
cout <<"direccionA: "<<direccionA <<endl;
cout<<"tamaño del puntero "<<sizeof(bool*)<<endl;    
cout <<"direccion (&) de direccionA: "<<&direccionA <<endl;
cout <<"indireccion (*) de direccionA: "<<*direccionA <<endl;




cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"arreglos:"<<endl;
int arreglo[10];
cout<<"direccio de arreglo: "<<&arreglo<<endl;
cout<<"direccio de arreglo[0]: "<<&arreglo[0]<<endl;
cout<<"direccio de arreglo[1]: "<<&arreglo[1]<<endl;
cout<<"direccio de arreglo + 0: "<<&arreglo + 0<<endl;
cout<<"direccio de arreglo + 1: "<<&arreglo + 1<<endl;

cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"objetos:"<<endl;
chorizo pruebas;
cout<<"tamaño chorizo: "<<sizeof(chorizo)<<endl;
cout<<"direccion chorizo: "&pruebas<<endl;









return 0;
}



