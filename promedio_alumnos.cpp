
#include<iostream>
using namespace std;

int main() {
    double calificaciones[5];
    double suma = 0;
    for (int a = 0; a < 5; a++) {
        cout << "Ingresa tu calificacion " << a + 1 << ": ";
        cin >> calificaciones[a];
        suma += calificaciones[a];
    }
    double promedio = suma / 5;
    cout << "\nTus calificaciones son:\n";
    for (int a = 0; a < 5; a++) {
        cout << "Calificaciones " << a + 1 << ": " << calificaciones[a] << endl;
    }
    cout << "Promedio final es de: " << promedio << endl;;


    return 0;
}