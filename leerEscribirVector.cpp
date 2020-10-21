#include "leerEscribirVector.h"

void escribirVector(vector<int>& v) {
	cout << "======== Creando vector ==========" << endl;
	int tam;
	cout << "Introduce el numero de elementos del vector: ";
	cin >> tam;
	cout << "Rellenando vector... " << endl;
	int elemento;
	for (int i = 0; i < tam; i++) {
		cout << "v[" << i << "]= ";
		cin >> elemento;
		v.push_back(elemento);
	}
	cout << "==================================" << endl;
}

void leerVector(vector<int> v) {
	cout << "======== Mostrando vector ========" << endl;
	cout << "Vector : [ ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "]" << endl;
	cout << "==================================" << endl;
}