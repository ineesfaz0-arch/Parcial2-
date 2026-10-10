#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double venta[100];
    double suma = 0;
    
    for (int i = 0; i < 100; i++) {
        cout << "Ingresa el valor del producto " << i + 1 << ": ";
        cin >> venta[i];
        suma += venta[i];
    }
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "El valor total es de: " << suma << endl;
    return 0;
}
