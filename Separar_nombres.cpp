#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string nombreCompleto;
    string apellido;
    string nombre;
    cout << "Escriba su nombre y primer apellido: "; 
    getline(cin, nombreCompleto);

    int espacio = nombreCompleto.find(' ');
    nombre = nombreCompleto.substr(0,espacio);
    apellido = nombreCompleto.substr(espacio +1);


    if (espacio == string::npos) {
        cout << "Error falta el apellido" << endl;
        return 0;
    }
        bool valido = true;
        for (int i = 0; i < nombre.length(); i++) {
            if (isdigit(nombre[i])) {
                valido = false;
            }
        }
        for (int i = 0; i < apellido.length(); i++) {
            if (isdigit(apellido[i])) {
                valido = false;
            }
        }
        if (valido) {
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
        }
        else {
            cout << "Error: el nombre o el apellido contienen numeros" << endl;
        }

}

