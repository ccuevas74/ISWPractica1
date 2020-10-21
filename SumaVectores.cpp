#include "Header.h"


vector<int>  SumaVectores(vector<int>& v1, vector<int>& v2) {

	int size = v1.size();

	vector <int> v(size);

	if (v1.size() == v2.size()){

		for (int i = 0; i < v1.size(); i++) {

			v[i] = v1[i] + v2[i];
		}

	}
	else {

		cout << "Los vectores no tienen la misma dimensión." << endl;
	}

	return v;

} 