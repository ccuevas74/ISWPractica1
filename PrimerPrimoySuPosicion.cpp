#include <iostream>
#include <vector>
using namespace std;

void esPrimo(vector<int> v);


void esPrimo(vector<int> v) {
	vector<int> res;
	for (int i = 0; i < v.size(); i++) {
		int valor = v[i];

		if (valor % 2 != 0) {		
			cout << "El primer numero primo es " << valor << " y esta en la posicion "<< i << endl;
			res.push_back(valor);
			res.push_back(i);
			break;
		}	
	}
}