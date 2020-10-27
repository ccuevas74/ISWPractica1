#include "Impares.h"

vector<int> Impares(vector<int> v) {


	vector<int> res;

	for (int i = 0; i < v.size(); i++) {

		if ((v[i] % 2) != 0) {

			res.push_back(v[i]);
		}

	}

	return res;

}