#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Persona{
    char nombre[50];
    int edad;

}




int main (int argc, char const *argv[])
{

ifstream archivoEntrada;
ofstream archivoSalida;
 
 // Abrir el archivo de salida
 archivoSalida. open("Archivo_Salida.bin", ios::binary); 
 if (|archivoSalida){
cerr<< "Error al abrir el archivo de Salida." <<endl;
return 1;
}
//Escribir en el archivo de salida
persona p1= ("juan", 30):
persona p2= ("Maria", 25)

 ArchivoSalida.write((const char*)(&p2), sizeof(Persona));
 archivoSalida.write((const char*)(&p2), sizeof(Persona));


//cerrar el archivo de salida

archivoSalida.close();


//------------------------------------------------
ifstream archivoEntrada;
Persona p;

//abrir el archivo de entrada
  
archivoEntrada. open("Archivo_salida.bin", ios::binary); 
 if (|archivoEntrada){
cerr << "Error al abrir el archivo de Entrada." <<endl;
return 1;
}

//leer el archivo de entrada

while(archivoEntrada.read((char*))(&p), sizeof(persona)) (
    cout <<"nombre:" << p.nombre <<", Edad: " << p. edad << endl;
)       

//cerrar el archivo de entrada
archivoEntrada.close();









    return 0; 
}