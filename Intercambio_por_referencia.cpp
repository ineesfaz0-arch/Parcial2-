#include <iostream>
using namespace std;

void intercambiar(int& x, int& y) {
    int aux = x;
    x = y;
    y = aux;
}

int main() {
    int a, b;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;

    cout << "\nAntes:   a = " << a << ", b = " << b << endl;

    intercambiar(a, b);

    cout << "Despues: a = " << a << ", b = " << b << endl;

    return 0;
}