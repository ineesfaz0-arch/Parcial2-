#include <iostream>
using namespace std;

int main() {
	double grupo1[5];
	double grupo2[5];
	double mayor[5];
	for (int i = 0; i < 5; i++) {
		cout << "Grupo 1, promedio " << i + 1 << ": ";
		cin >> grupo1[i];

	}
	    cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Grupo 2, promedio " << i + 1 << ": ";
		cin >> grupo2[i];
	}
	for (int i = 0; i < 5; i++) {
		if (grupo1[i] > grupo2[i]) {
			mayor[i] = grupo1[i];
		}
		else
			mayor[i] = grupo2[i];
	}
	cout << endl;
	for (int i= 0; i < 5; i++) {
		cout << "Posicion " << i + 1 << ": Grupo 1 = " << grupo1[i] << ", Grupo 2 = " << grupo2[i] << ", Mayor = " << mayor[i] << endl;
	}
	return 0;
}