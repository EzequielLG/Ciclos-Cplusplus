// Autor: LozanoSoft

#include <iostream>

using namespace std;

int main(){

  // Bucles/Ciclos
  //
  // for
  // while

  // for

  for(int i = 0; i < 10; i++){
    cout << "FOR_1 - Esta es la iteración: " << i + 1 << " -> Hola mundo" << endl;
  }

  for(int i = 1; i <= 10; i++){
    cout << "FOR_2 - Esta es la iteración: " << i << " -> Hola mundo" << endl;
  }

  int inicioIteraciones = 1;
  int maxIteraciones = 10;

  for(int i = inicioIteraciones; i <= maxIteraciones; i++){
    cout << "FOR_3 - Esta es la iteración: " << i << " -> Hola mundo" << endl;
  }

  // while

  int numW = 5;

  while(numW > 0){ // Va de 5 a 1

    cout << "WHILE_1 - Esta es la iteración: " << 6 - numW << " -> Hola mundo" << endl;
    numW--; // Es igual a numW = numW - 1;

  }

  int numW_2 = 1;

  while(numW_2 < 6){ // Va de 1 a 5

    cout << "WHILE_2 - Esta es la iteración: " << numW_2 << " -> Hola mundo" << endl;
    numW_2++; // Es igual a numW = numW + 1;

  }

  int numW_3 = 7;
  int contador = 0;

  while(numW_3 > 6 && numW_3 < 10){ // Va de 7 a 9

    contador++;
    cout << "WHILE_3 - Esta es la iteración: " << contador << " -> Hola mundo" << endl;
    numW_3++;

  }

  cout << "Ahora 'numW_3' es igual a: " << numW_3 << endl;

  // while(true)

  contador = 5;

  while(true){

    if(contador == 0){
      break;
    }

    cout << "Valor de la variable 'contador': " << contador << endl;
    contador--;

  }

  // do while

  do {

    cout << "Escribe el valor de la variable 'numW_2': ";
    cin >> numW_2;

  } while(numW_2 != 5);

  // ¿Por qué usar el 'do while'?

  // cin >> numW_2;
  //
  // while(numW_2 != 5) {
  //
  //   cout << "Escribe el valor de la variable 'numW_2': " << endl;
  //   cin >> numW_2;
  //
  // }

  return 0;

}
