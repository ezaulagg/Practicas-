
ejecutar : bin/programa 
   ./bin/programa

bin/programa : src/main.cpp
    g++ src/main.cpp -o bin/programa -I include   
bin/memoria : arc/memoria.cpp
  g++ arc/memoria.cpp -o bin/memoria

  memoria :bin/memoria
  .bin/memoria
  
