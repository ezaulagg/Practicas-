#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char const *argv[])
{

ifstream archivoEntrada;
ofstream archivoSalida;
 
 // Abrir el archivo de salida
 archivoSalida. open("Archivo_Salida.txt"); 
 if (|archivoSalida){
cerr<< "Error al abrir el archivo de Salida." <<endl;
return 1;
}
//Escribir en el archivo de salida
 Archivo_Salida <<"hola, este es el archivo de salida. "<<endl;

//cerrar el archivo de salida

archivoSalida.close();


  









    return 0;
}