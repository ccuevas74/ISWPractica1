#include "mayorElem.h"
vector<int> mayorElem(vector<int>& v1, int elem){
vector<int> v2;
int size = v1.size();

for(int i = 0; i<size;i++){
    if(v1[i] > elem){
        v2.push_back(v1[i]);
    }
}

return v2;    
}

}




