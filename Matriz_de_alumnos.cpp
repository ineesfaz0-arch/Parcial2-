#include <iostream>
using namespace std;
int main(){
    
    double calificaciones[10][3];

    for (int i = 0; i < 10; i++) {
        cout << "Grupo A, promedio " << i + 1 << ": ";
        cin >> calificaciones[i][0];
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Grupo B, promedio " << i + 1 << ": ";
        cin >> calificaciones[i][1];
    }
    for (int i = 0; i < 10; i++) {
        if (calificaciones[i][0] > calificaciones[i][1]) {
            calificaciones[i][2] = calificaciones[i][0];
        }
        else {
            calificaciones[i][2] = calificaciones[i][1];
        }
    }
    cout<< endl;
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << ": A = " << calificaciones[i][0] << ", B = " << calificaciones[i][1] << ", Mayor = " << calificaciones[i][2]<< endl;
    }
    return 0;
}




