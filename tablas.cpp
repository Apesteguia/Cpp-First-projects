#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){

    int numero, resultado, tope;



    std::cout << "Hola, este programa va a digitar la tabla de multiplos del numero que escogas" << '\n'<<endl;
    std::cout << "Introduce el numero:" << '\n';
    std::cin >> numero;
    std::cout << "Introduce hasta que numero quieres multiplicar: " << '\n'<<endl;
    std::cin >> tope;

    for(int i = 1; i <=tope; i++){
        std::cout << i << "*" << numero << "=" << numero * i << '\n';
    }

  system("pause");
  return 0;
}
