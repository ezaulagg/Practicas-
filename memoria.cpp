#include <iostream>
using namespace std;

class chorizo{
  private;
  int size;
  bool  encendido;
  int otro;

  public
  void inicializar(){
bool size;
bool encendido;
 otro = true;

  } 
};

int main(int argc, char const *argv[])
{
  cout<<"--------------------------------------------------------------------------------"<<endl;

cout<<"Tamaño de memoria"<<endl;
cout<<"tamaño int:"<<sizeof(int)<<endl;
cout<<"tamaño char: "<<sizeof(char)<<endl;
cout<<"tamaño bool:"<<sizeof(bool)<<endl;
cout<<"tamaño float: "<<sizeof(float)<<endl;
cout<<"tamaño double:"<<sizeof(double)<<endl;
cout<<"tamaño void:"<<sizeof(void)<<endl;



cout<<"--------------------------------------------------------------------------------"<<endl;
int a, b;
cout<<"memoria Estatica:"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;

cout<<"direccion a: "<<&a<<endl;
cout<<"valor a:"<<a<<endl;
cout<<"tamaño a:"<<sizeof(a)<<endl;


cout<<"direccion b:"<<&b<<endl;
cout<<"valor b: "<<b<<endl;
cout<<"tamaño b:"<<sizeof(b)<<endl;







cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"dieccion de memoria:"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
int* direccionA = &a;
cout <<"direccionA: "<<direccionA <<endl;
cout<<"tamaño del puntero "<<sizeof(bool*)<<endl;    
cout <<"direccion (&) de direccionA: "<<&direccionA <<endl;
cout <<"indireccion (*) de direccionA: "<<*direccionA <<endl;




cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"arreglos:"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
int arreglo[10];
cout<<"direccio de arreglo: "<<&arreglo<<endl;
cout<<"direccio de arreglo[0]: "<<&arreglo[0]<<endl;
cout<<"direccio de arreglo[1]: "<<&arreglo[1]<<endl;
cout<<"direccio de arreglo + 0: "<<&arreglo + 0<<endl;
cout<<"direccio de arreglo + 1: "<<&arreglo + 1<<endl;

cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"objetos:"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;

chorizo pruebas;
cout<<"tamaño chorizo: "<<sizeof(chorizo)<<endl;
cout<<"direccion chorizo: "&pruebas<<endl;

cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"Memoria Dinamica: "<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"malloc"<<malloc(sizeof(int))<<endl;
//guardar direccion en un puntero

void* memoriaDinamica = malloc((sizeof(int)));
cout<<"--------------------------------------------------------------------------------"<<endl;

cout<<"cast de variable: "<<endl;
int* punteroentero = (int*)malloc(sizeof(int));
*punteroentero = 5;
cout<<"direccion: "<<punteroentero<<endl;
cout<<"valor: "<<*punteroentero<<endl;

//liberar memoria
Free(*punteroentero);

cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"Memoria Dinamica C++ estructurada(objetos): "<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"C:   "(chorizo*)malloc(sizeof(chorizo))<<endl;
cout<<"C++: "<<new chorizo()<<endl;

//C
chorizo* punteroC = (chorizo*)malloc(sizeof(chorizo))<<endl;
(*puntero).inicializar();
Free(punteroC);
  //C++
chorizo* punteroCxx = new chorizo();
















return 0;
}



