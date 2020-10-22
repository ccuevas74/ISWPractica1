#include "resta.h"

vector<int> Resta(vector<int>& v1,vector<int>& v2){

int size = v1.size();

vector<int> v3 (size);

if (v1.size() == v2.size()){

for(int i = 0; i<v1.size();i++){

	v3[i] = v1[i]-v2[i];	
}}
else{
		cout<<"Los vectores tienen distanta dimensión.";

} 
return v3;

}

