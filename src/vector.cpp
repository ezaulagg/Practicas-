#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <set>


using namespace std;
enum COLUMNAS{
    INDICE,
    NOMBRE,
    NUMERO,
    TIPO,
    ETAPA,
    ANTECESOR,
    ANTECESOR_NO,
}
enum TipoPokemon{
    FUEGO
    AGUA
    PLANTA
    ELECTRICIDAD
    VENENO



};


class Pokemon;
private{
    string nombre;
     set <TipoPokemon> tipo;
    int nivel;
public
   Pokemon(string nombre,set <TipoPokemon> tipo, int nivel){
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
//
vector<Pokemon> pokedex;
pokedex.push_back(pokemon("Misigno",(TipoPokemon::VENENO),999)); 
while(getline(pokeCSV, linea)){
    //convertir a un string en linea 
    stringstream ss(linea)

    //extraer un valor y guardar en lista
    string valor
    vector<string> Listadecolumnas;
    while(getline(ss,valor,',' )){
     fila.push_back(valor);
}
try
{
    cout<<""
    //crear pokemon 
pokemon p(
    Listadecolumnas.at(COLUMNAS::NOMBRE),
    (TipoPokemon::AGUA),
    stoi(Listadecolumnas.at(COLUMNAS::ETAPA))
    pokedex.push_back(p);
);
//agregar el pokemon a la pokedex
pokedex[stoi(Listadecolumnas.at(COLUMNAS::NUMERO))]= p;
}
catch(const std::exception& e)
{
    std::cout<< e.what()'\n';
}



}
cout<< "Pokemon cargado al pokedex" << pokedex.size()endl;
cout<<"el pokemon 5 es:"<<pokedex.at(5).Getnombre::<<endl;

return EXIT_SUCCESS;

} 