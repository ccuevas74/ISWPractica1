#include "elementosPares.h"

bool isPar(int num){
    if ((num%2)==0){
        return true;
    } else {
        return false;
    }
}

vector<int> elementosPares(vector<int> v){
    vector<int> res;
    int elemento;
    for(int i = 0; i < v.size(); i++){
        elemento = v[i];
        if(isPar(elemento)){
            res.push_back(elemento);
        }
    }
    return res;
}