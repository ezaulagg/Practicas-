
ejecutar : bin/programa 
   ./bin/programa

bin/programa : src/main.cpp
    g++ src/main.cpp -o bin/programa -I include   
bin/memoria : arc/memoria.cpp
  g++ arc/memoria.cpp -o bin/memoria

  memoria :bin/memoria
  ./bin/memoria
  
bin/archivo : src/archivo.cpp
   g++ src/archivo.cpp -o bin/archivo

 archivo : bin/archivo
  ./bin/archivo
  
bin/binario : src/binario.cpp
  g++ src/binario.cpp -o bin/binario
  binario : bin/binario
  ./bin/binario

pokemon: bin/pokemon
./bin/pokemon
  bin/pokemon : src/vector.cpp
  g++ src/vector.cpp -o bin/pokemon