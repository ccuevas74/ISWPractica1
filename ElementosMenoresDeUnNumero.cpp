// ElementosMenoresDeUnNumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <Vector>

void menorDeUnNumero(vector<int> v, int num);


void menorDeUnNumero(vector<int> v,int num) {
    int res;
    int contador = 0;
    cout << "Valores menores a " <<num<<": " << endl;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < num) {
            cout << v[i]<<" ";
            contador++;
        }
    }
    if (contador == 0) {
        cout << "No hay numeros menores a " << num << " en el vector." << endl;
    }
    
}

