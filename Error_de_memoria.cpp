#include <iostream>
using namespace std;

void llenarArreglo() {
    int numeros[5];
    for (int i = 0; i <5; i++) {   
        numeros[i] = i * 10;
    }
}

int main() {
    cout << "Antes de la funcion" << endl;
    llenarArreglo();
    cout << "Despues de la funcion" << endl;
    return 0;
}