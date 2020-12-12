#include "iostream"

using namespace std;

int main(){

    float altura, peso, resultado;

    std::cout << "Introduce tu altura en metros: " << '\n';
    cin>>altura;

    std::cout << "Introduce tu peso: " << '\n';
    cin>>peso;

    resultado = peso / (altura * altura);

    std::cout << resultado << '\n';

    if (resultado <= 18.5){
        std::cout << "Estas muy delgado!!" << '\n';
      }
    else if(resultado >= 18.5 && resultado <= 25){
        std::cerr << "Estas en un buen peso!" << '\n';
      }
    else{
      std::cerr << "Tienes sobrepeso!!" << '\n';
    }

  return 0;
}
