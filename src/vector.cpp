#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>



using namespace std;
enum TipoPokemon{
    FUEGO
    AGUA
    PLANTA
    ELECTRICIDAD



};


class Pokemon;
private{
    string nombre;
     list <TipoPokemon> tipo;
    int nivel;
public
   Pokemon(string nombre, TipoPokemon tipo, int nivel){
this->nombre = nombre;
this->tipo = tipo;
this->nivel = nivel;
}

};

string Getnombre(){
return this->nombre;
}

main (int argc, char const *argv[])
{
    //arreglos clasicos
 string frases [10] //<---------- no se puede modificar en tiempo de ejecucion
 frases [0]= "frases 1";
 frases [1]= "frases 2";
 
 vector <string> vfrases; //<------------ Se puede agregar mas en tiempo de ejecucion

vfrases. push_back("primera frase");
vfrases. push_back("segunda frase");
vfrases. push_back("tercera frase");
vfrases. push_back("cuarta frase");

vector(int) vEnteros; //<--------- Remplazar tipo entre <> para cambiar el valor del vector
vEnteros.push_back (3); 
vEnteros.push_back (5);
vEnteros.push_back (1);
vEnteros.push_back (0);
 
vector<Pokemon> pokedex;
pokedex.push_back(Pokemon ("bulbasaur",TipoPokemon::PLANTA));
pokedex.push_back(Pokemon ("ivysaur",TipoPokemon::PLANTA));
pokedex.push_back(Pokemon ("venasaur",TipoPokemon::PLANTA));

cout<<"nombre: "<<pokedex.at(0).Getnombre () <<endl;

fstream pokeCSV ("assets/pokedex.CSV");
if(!pokeCSV){
    cerr<< "Error leyendo el archivo del pokedex"<<endl;
    return EXIT_FAILURE;
}
//cargar pokemon desde el archivp
string linea;
while(getline(pokeCSV, linea)){
    
    stringstream ss(linea)
    string valor
    vector<string> fila;
    while(getline(ss,valor,',' )){
     fila.push_back(valor);
}
//crear pokemon 
pokemon p(fila.at(1), TipoPokemon::AGUA,1);
//agregar el pokemon a la pokedex
pokedex.push_back(p);

cout<< "Pokemon cargado al pokedex" << pokedex.size()endl;
}


return EXIT_SUCCESS;

} 